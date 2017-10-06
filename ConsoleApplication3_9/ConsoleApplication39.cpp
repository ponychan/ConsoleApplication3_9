// ConsoleApplication39.cpp: 定义控制台应用程序的入口点。
//3.9.cpp递归调用求组合数

#include "stdafx.h"
#include<iostream>
using namespace std;

//计算N选k的组合数--C(n,k)=
int comm(int n, int k) {
	if (k > n)
		return 0;
	else if (n == k || k == 0)
		return 1;
	else
		return comm(n - 1, k) + comm(n - 1, k - 1);
}

int main()
{
	int n, k;
	cout << "please enter two integers n and k:";
	cin >> n >> k;
	cout << "C(n,k)=" << comm(n, k) << endl;
	return 0;
}

