#include <stdio.h>
////�����Z�֐�
//int add(int a, int b)
//{
//	return a + b;
//}

//�}�N���̓S��
//���ʂ���������g���Ď��
//�p�����[�^�����ʂň͂ށi���́j
//�����đS�̂����ʂň͂�
#define	add(a, b) ((a) + (b))
#define	mul(a, b) ((a) * (b))
int main()
{
	printf("�����Z�̌��ʁF%d\n", add(1 + 2, 2 + 3));
	printf("�|���Z�̌��ʁF%d\n", mul(1 + 2, 2 + 3));
}
