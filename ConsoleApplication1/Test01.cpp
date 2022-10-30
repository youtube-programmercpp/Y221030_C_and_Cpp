#include <stdio.h>
#include <stdlib.h>

//鉄則
//短い名前は駄目
//マクロ (macro)
#define	ConsoleApplication1_DATA_MAX_COUNT 3 //ここを弄ると良い（チューニング箇所）
int main()
{
	int a[ConsoleApplication1_DATA_MAX_COUNT];//0～(ConsoleApplication1_DATA_MAX_COUNT-1)
	for (int i = 0; i < ConsoleApplication1_DATA_MAX_COUNT; ++i) {
		if (scanf_s("%d", &a[i]) == 1) {
			//入力成功
			continue;//続行
		}
		else {
			printf("入力エラーが発生しました。\n");
			return EXIT_FAILURE;
		}
	}
	for (unsigned i = ConsoleApplication1_DATA_MAX_COUNT;   i   ;) {
		--i;
		printf("a[%d] = %d\n", i, a[i]);
	}
}
