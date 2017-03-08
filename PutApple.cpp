/*
·ÅÆ»¹û
*/
#include<iostream>  
using namespace std;

int calc(int m, int n, int pre) {
	if (n == 1)
	{
		return 1;
	}
	int ways = 0;
	for (int i = pre; i <= m / n; i++)
	{
		ways += calc(m - i, n - 1, i);
	}
	return ways;
}

int mainPutApple() {
	int m, n;
	cin >> m >> n;
	int total = calc(m, n, 0);

	cout << total << endl;

	system("pause");
	return 0;
}