#include <stdio.h>
//順次評価演算子（コンマ演算子）

int f()
{
	return 123;
}

int main()
{
	if (f()) {
		printf("関数 f は 0 以外の値を返しました。\n");
	}
}
