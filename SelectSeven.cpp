/*
£®¡∑œ∞”√£©ÃÙ7
*/
#include <iostream>  
using namespace std;

#define MAX_LEN 1025  

bool isRelated(int num) {
	if (num % 7 == 0)
	{
		return true;
	}
	int divider = 10;
	while (divider < num) {
		if (num % divider == 7)
		{
			return true;
		}
		if (num / divider == 7)
		{
			return true;
		}
		num /= 10;
	}
	return false;
}

int mainSelectSeven() {
	int n;
	cin >> n;
	int sum = 0;

	if (n > 6) {
		for (int i = 7; i <= n; ++i)
		{
			if (isRelated(i))
			{
				sum++;
			}
		}
	}
	cout << sum << endl;

	return 0;
}