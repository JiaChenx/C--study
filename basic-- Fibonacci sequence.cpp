#include "stdafx.h"
#include "iostream"
#include "ctime"
using namespace std;

//Fibonacci sequence

int main()
{
	int f1 = 1, f2 = 1;
	int a;
	clock_t start, finish;
	start = clock();
	cin >> a;
	for (int i = 1;i <= a;i++)
	{
		cout << " f1= " << f1 << "    f2= " << f2 << endl;
		if (i % 2 == 0)
			cout << '\n';
		f1 = f1 + f2;
		f2 = f2 + f1;

	}
finish = clock();
	cout << finish - start << "/" << CLOCKS_PER_SEC << " (s) " << endl;
	system("pause");
	return 0;
}
