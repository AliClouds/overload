#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

//同一个类中重载了2个函数，实现不同的功能，形参列表不同
class CLoad
{
public:
	CLoad()
	{

	}
	~CLoad()
	{

	}

	void Foo(int x)
	{
		cout << "int x: " << x << endl;
	}
    

	void Foo(char *name)
	{
		cout << "name: " << name << endl;
	}
};

int main()
{
	CLoad load;
	load.Foo("hananiah");
	load.Foo(999);

	Sleep(1000);
    return 0;
}

