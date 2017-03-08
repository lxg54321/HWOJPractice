/*
ÉßĞÎ¾ØÕó
*/
#include <iostream>  
using namespace std;

int mainSnakeMatrix()
{
	int n;
	cin >> n;

	int begin = 1;
	for (int i = 0; i<n; i++) {
		begin += i;
		cout << begin;
		if (i<n - 1) {
			cout << " ";
		}
		else {
			cout << endl;
			break;
		}
		int num = begin;
		for (int j = i; j<n; j++) {
			num += j + 2;
			cout << num;
			if (j<n - 2) {
				cout << " ";
			}
			else {
				cout << endl;
				break;
			}
		}
	}

	return 0;
}