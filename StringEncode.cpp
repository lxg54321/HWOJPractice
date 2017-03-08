/*
×Ö·û´®¼ÓÃÜ
*/
#include<iostream>  
#include<string>  
using namespace std;

#define SIZE 26  

int getIndex(char c) {
	if (c >= 'a' && c <= 'z')
	{
		return c - 'a';
	}
	else {
		return c - 'A';
	}
}

int mainStringEncode() {
	string key, data;
	cin >> key >> data;

	bool used[SIZE] = {};
	int table[SIZE] = {};
	int j = 0;

	for (int i = 0; i < key.length(); i++)
	{
		int index = getIndex(key.at(i));
		if (!used[index]) {
			used[index] = true;
			table[j++] = index;
		}
	}

	int t = 0;
	for (int i = j; i < SIZE; i++)
	{
		while (used[t]) {
			t++;
		}
		used[t] = true;
		table[i] = t;
	}

	for (int i = 0; i < data.length(); i++)
	{
		int index = getIndex(data.at(i));
		if (data.at(i) >= 'a' && data.at(i) <= 'z')
		{
			data.at(i) = 'a' + table[index];
		}
		else {
			data.at(i) = 'A' + table[index];
		}
	}

	cout << data << endl;

	//system("pause");  
	return 0;
}