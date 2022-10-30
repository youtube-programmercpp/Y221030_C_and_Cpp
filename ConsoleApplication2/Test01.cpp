#include <Windows.h>
#include <crtdbg.h>
#include <memory>
struct Member {
	Member()
	{
		OutputDebugStringA(__FILE__ "(" _CRT_STRINGIZE(__LINE__) "): " __FUNCTION__ "\n");
	}
	~Member()
	{
		OutputDebugStringA(__FILE__ "(" _CRT_STRINGIZE(__LINE__) "): " __FUNCTION__ "\n");
	}
	int n;
};
#include <iostream>
int main()
{
	_CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_LEAK_CHECK_DF);
	const auto p = std::make_shared<Member>();
	p->n = 5000;
	const auto q = p;
#define	Macro(x)	#x "=" << x
	std::cout << Macro(p->n) << ", Address = " << p.get() << std::endl;
	std::cout << Macro(q->n) << ", Address = " << q.get() << std::endl;
#undef	Macro
}
