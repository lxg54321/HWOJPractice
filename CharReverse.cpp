/*
×Ö·ûÄæĞò
*/
#include<iostream>  
#include<string>  
using namespace std;

int mainCharReverse() {
	string s;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		cout << s.at(s.length() - i - 1);
	}
	cout << endl;

	//system("pause");  
	return 0;
}