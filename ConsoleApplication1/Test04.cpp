#include <stdio.h>
//�����R���p�C��
#if 0
void f(int a)
{
	if (a < 0)
		printf("%d �� ���̒l�ł��B\n", a);
	else
		printf("%d �� 0 �܂��͐��̒l�ł��B\n", a);
}
#else
//\ �L�����s���ɏ������Ƃŕ����s�̒�`��
#define	f(a)                                      \
	if (a < 0)                                    \
		printf("%d �� ���̒l�ł��B\n", a);        \
	else                                          \
		printf("%d �� 0 �܂��͐��̒l�ł��B\n", a) 
#endif
//�}�N���̓S��
//�p�����[�^���Q��ȏ�]�����邱�Ƃ͔�����ׂ�
int main()
{
	int x = -1;
	f(++x);
}
