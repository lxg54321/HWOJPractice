/*
×Ö·û´®¼Ó½âÃÜ
*/
#include <iostream>  
#include <string>  
using namespace std;

// #define CSIZE 26  

// void sort(int* a, int len){  
//     for (int i = 0; i < len-1; ++i)    
//     {    
//         for (int j = 0; j < len-i-1; ++j)    
//         {    
//             if (a[j] > a[j+1])    
//             {    
//                 char t = a[j];    
//                 a[j] = a[j+1];    
//                 a[j+1] = t;    
//             }    
//         }    
//     }    
// }  

char* encode(const char* code, int len) {
	char* value = new char[len + 1];

	for (int i = 0; i < len; ++i)
	{
		if (code[i] >= 'a' && code[i] < 'z')
		{
			value[i] = 'A' + (code[i] - 'a') + 1;
		}
		else if (code[i] == 'z')
		{
			value[i] = 'A';
		}
		else if (code[i] >= 'A' && code[i] < 'Z')
		{
			value[i] = 'a' + (code[i] - 'A') + 1;
		}
		else if (code[i] == 'Z')
		{
			value[i] = 'a';
		}
		else if (code[i] >= '0' && code[i] < '9')
		{
			value[i] = code[i] + 1;
		}
		else if (code[i] == '9')
		{
			value[i] = '0';
		}
	}

	return value;
}

char* decode(const char* code, int len) {
	char* value = new char[len + 1];

	for (int i = 0; i < len; ++i)
	{
		if (code[i] > 'a' && code[i] <= 'z')
		{
			value[i] = 'A' + (code[i] - 'a') - 1;
		}
		else if (code[i] == 'a')
		{
			value[i] = 'Z';
		}
		else if (code[i] > 'A' && code[i] <= 'Z')
		{
			value[i] = 'a' + (code[i] - 'A') - 1;
		}
		else if (code[i] == 'A')
		{
			value[i] = 'z';
		}
		else if (code[i] > '0' && code[i] <= '9')
		{
			value[i] = code[i] - 1;
		}
		else if (code[i] == '0')
		{
			value[i] = '9';
		}
	}

	return value;
}

int mainStringEncodeDecode() {
	string a, b;
	cin >> a >> b;

	cout << encode(a.c_str(), a.length()) << endl << decode(b.c_str(), b.length()) << endl;

	return 0;
}