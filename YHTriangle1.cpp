/*
iNOC产品部-杨辉三角的变形
*/
#include <iostream>  
#include <string>  
using namespace std;

int mainYHTriangle1() {
	int n;
	cin >> n;

	if (n == 1 || n == 2)
	{
		cout << -1 << endl;
		return 0;
	}

	n -= 3;
	n = n % 4;

	switch (n) {
	case 0:
		cout << 2 << endl;
		break;
	case 1: case 2:
		cout << 3 << endl;
		break;
	case 3:
		cout << 4 << endl;
		break;
	default:
		break;
	}

	return 0;
}