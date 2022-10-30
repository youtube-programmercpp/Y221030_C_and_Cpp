#include <stdio.h>
//条件コンパイル
#if 0
void f(int a)
{
	if (a < 0)
		printf("%d は 負の値です。\n", a);
	else
		printf("%d は 0 または正の値です。\n", a);
}
#else
//\ 記号を行末に書くことで複数行の定義可
#define	f(a)                                      \
	if (a < 0)                                    \
		printf("%d は 負の値です。\n", a);        \
	else                                          \
		printf("%d は 0 または正の値です。\n", a) 
#endif
//マクロの鉄則
//パラメータを２回以上評価することは避けるべし
int main()
{
	int x = -1;
	f(++x);
}
