#include "pch.h" // 引入pch.h或者framework.h都可以
#pragma comment(lib, "StaticLib1.lib")

void useStatic_main() {
	StaticOne a(1);
	a.sayHello();

	fnStaticLib1();
}
