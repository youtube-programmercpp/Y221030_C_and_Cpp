#include <stdio.h>
#include <vcruntime.h> //Visual Studio ��p
#include <Windows.h>
// ## �A�����Z�q

int main()
{
	OutputDebugStringA(__FILE__ "(" _CRT_STRINGIZE(__LINE__) "): �e�X�g1\n");
	OutputDebugStringA(__FILE__ "(" _CRT_STRINGIZE(__LINE__) "): �e�X�g2\n");
	int a1;
	int a2;
	_CRT_CONCATENATE(a, 1) = 10;
	_CRT_CONCATENATE(a, 2) = 20;




}


