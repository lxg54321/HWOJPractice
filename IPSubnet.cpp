/*
判断两个IP是否属于同一子网
*/
#include<iostream>  
#include<string>  
using namespace std;

class IPAddr {
public:
	int part[4];
	bool isValid;

	IPAddr(string s) {
		int length = s.length();
		const char* cs = s.c_str();
		int i_part = 0;

		for (int i = 0; i < 4; i++)
		{
			part[i] = 0;
		}

		for (int i = 0; i < length; i++)
		{
			if (cs[i] == '.') {
				if (i == 0)
				{
					isValid = false;
					return;
				}
				i_part++;
				continue;
			}
			if (cs[i] < '0' || cs[i] > '9')
			{
				isValid = false;
				return;
			}
			int num = cs[i] - '0';
			part[i_part] = part[i_part] * 10 + num;
			if (part[i_part] > 255)
			{
				isValid = false;
				return;
			}
		}

		if (i_part == 3)
		{
			isValid = true;
		}
	}

};

bool compareIp(IPAddr mask, IPAddr p1, IPAddr p2) {
	for (int i = 0; i < 4; i++)
	{
		int num1 = mask.part[i] & p1.part[i];
		int num2 = mask.part[i] & p2.part[i];
		if (num1 != num2)
		{
			return false;
		}
	}
	return true;
}

int mainSubnet() {
	string s0, s1, s2;
	cin >> s0 >> s1 >> s2;
	IPAddr mask(s0);
	IPAddr ip1(s1);
	IPAddr ip2(s2);

	if (mask.isValid && ip1.isValid && ip2.isValid)
	{
		if (compareIp(mask, ip1, ip2))
		{
			cout << 0 << endl;
		}
		else
		{
			cout << 2 << endl;
		}
	}
	else
	{
		cout << 1 << endl;
	}

	//system("pause");  
	return 0;
}