#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

//ͬһ������������2��������ʵ�ֲ�ͬ�Ĺ��ܣ��β��б�ͬ
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

