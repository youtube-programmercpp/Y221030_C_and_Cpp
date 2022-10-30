#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <utility>
class FilePointer {
	FILE* fp;
public:
	//デフォルトコンストラクタ
	//default constructor
	//引き数が無い no arguments
	//noexcept は必須ではない（が、noexcept であって欲しい…）
	FilePointer( ) noexcept
		: fp(nullptr)
	{
	}
	~FilePointer()
	{
		if (fp)
			fclose(fp);
	}
	FilePointer(FILE* fp) noexcept
		: fp(fp)
	{
	}
	//move constructor
	//自己クラスの右辺値参照が唯一の引数となるコンストラクタ
	//こちらの noexcept は必須であると思うべき
	FilePointer(FilePointer&& r) noexcept
		: fp(r.fp)
	{
		r.fp = nullptr;
	}
	//移動代入演算子は既に存在しているインスタンスにおいての処理
	FilePointer& operator=(FilePointer&& r) noexcept
	{
		std::swap(fp, r.fp);
		return *this;//代入演算子では *this を返す
	}
	FILE* get() const noexcept
	{
		return fp;
	}
};

int main()
{
	FilePointer x(fopen("NUL", "w"));
	FilePointer y(std::move(x));//移動コンストラクタを呼ぶ
	x = std::move(y);//移動代入演算子の実装を呼ぶ
}
