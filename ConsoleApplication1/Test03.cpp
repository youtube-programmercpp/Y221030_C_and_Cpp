#include <stdio.h>
////足し算関数
//int add(int a, int b)
//{
//	return a + b;
//}

//マクロの鉄則
//括弧をたくさん使って守る
//パラメータを括弧で囲む（一つ一つの）
//そして全体を括弧で囲む
#define	add(a, b) ((a) + (b))
#define	mul(a, b) ((a) * (b))
int main()
{
	printf("足し算の結果：%d\n", add(1 + 2, 2 + 3));
	printf("掛け算の結果：%d\n", mul(1 + 2, 2 + 3));
}
