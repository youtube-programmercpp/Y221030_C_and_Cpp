#include <stdio.h>
#include <stdlib.h> //Visual Studio �� stdlib.h

int main()
{
	int a[10];
	for (int i = 0; i < _countof(a); ++i) {
		if (scanf_s("%d", &a[i]) == 1) {
			//���͐���
			continue;//���s
		}
		else {
			printf("���̓G���[���������܂����B\n");
			return EXIT_FAILURE;
		}
	}
	for (unsigned i = _countof(a); i;) {
		--i;
		printf("a[%d] = %d\n", i, a[i]);
	}
}
