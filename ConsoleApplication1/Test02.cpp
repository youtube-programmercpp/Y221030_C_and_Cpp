#include <stdio.h>
#include <stdlib.h> //Visual Studio の stdlib.h

int main()
{
	int a[10];
	for (int i = 0; i < _countof(a); ++i) {
		if (scanf_s("%d", &a[i]) == 1) {
			//入力成功
			continue;//続行
		}
		else {
			printf("入力エラーが発生しました。\n");
			return EXIT_FAILURE;
		}
	}
	for (unsigned i = _countof(a); i;) {
		--i;
		printf("a[%d] = %d\n", i, a[i]);
	}
}
