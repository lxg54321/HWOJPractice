/*
输出单向链表中倒数第k个结点
*/
#include <iostream>  
#include <string>  
using namespace std;

struct ListNode
{
	int       m_nKey;
	ListNode* m_pNext;
};

int mainLastKNode() {
	int n;
	cin >> n;
	int temp;
	cin >> temp;
	ListNode* header = new ListNode;
	header->m_nKey = temp;
	ListNode* cur = header;

	for (int i = 1; i < n; ++i)
	{
		ListNode* node = new ListNode;
		cin >> node->m_nKey;
		cur->m_pNext = node;
		cur = cur->m_pNext;
	}

	int k;
	cin >> k;
	cur = header;

	for (int i = 0; i < n - k - 1; ++i)
	{
		cur = cur->m_pNext;
	}
	cout << cur->m_nKey << endl;

	return 0;
}