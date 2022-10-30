#include <stdio.h>
#include <vcruntime.h> //Visual Studio 専用
#include <Windows.h>
// ## 連結演算子

int main()
{
	OutputDebugStringA(__FILE__ "(" _CRT_STRINGIZE(__LINE__) "): テスト1\n");
	OutputDebugStringA(__FILE__ "(" _CRT_STRINGIZE(__LINE__) "): テスト2\n");
	int a1;
	int a2;
	_CRT_CONCATENATE(a, 1) = 10;
	_CRT_CONCATENATE(a, 2) = 20;




}


