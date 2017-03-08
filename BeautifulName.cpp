/*
 Ãû×ÖµÄÆ¯ÁÁ¶È
*/
#include <iostream>  
#include <string>  
using namespace std;

#define CSIZE 26  

void sort(int* a, int len) {

	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - i - 1; ++j)
		{
			if (a[j] > a[j + 1])
			{
				char t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

}

int calcValue(string name) {
	int value = 0;
	int cvalue[CSIZE] = {};
	const char* cname = name.c_str();
	int len = name.length();

	for (int i = 0; i < len; ++i)
	{
		cvalue[cname[i] - 'a'] ++;
	}

	sort(cvalue, CSIZE);

	int base = CSIZE;

	for (int i = CSIZE - 1; i >= 0; --i)
	{
		if (cvalue[i] == 0)
		{
			break;
		}
		value += cvalue[i] * base;
		base--;
	}

	return value;
}

int mainBeautifulName() {
	int n;
	cin >> n;

	while (n--) {
		string name;
		cin >> name;
		int value = calcValue(name);
		cout << value << endl;
		// if (n == 0)  
		// {  
		//  cout << endl;  
		// }  
		// else{  
		//  cout << " ";  
		// }  
	}

	return 0;
}