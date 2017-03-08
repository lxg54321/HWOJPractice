/*
 字符串最后一个单词的长度
*/
#include <iostream>  
using namespace std;

int mainLastWordLength() {
	char a[129];
	int len = 0;
	int i = -1;
	bool flag = false;
	cin.getline(a, 129);

	while (i <= 129) {
		i++;
		if (a[i] == ' ')
		{
			flag = true;
			continue;
		}
		else if (a[i] == '\n' || a[i] == '\0')
		{
			break;
		}
		else
		{
			if (flag)
			{
				len = 0;
				flag = false;
			}
			len++;
		}
	}
	cout << len << endl;
	return 0;
}