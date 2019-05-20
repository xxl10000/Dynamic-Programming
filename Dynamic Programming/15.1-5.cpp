//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<unordered_map>
//#include<time.h>
//using namespace std;
////Definition for a binary tree node.
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
////Definition for singly - linked list.
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//
//};
//const int N = 10001;
//class Solution
//{
//	int memo[N] = { 0 };
//public:
//	long long recurFabor(int n)
//	{
//		if (memo[n]) return memo[n];
//		else if (n < 2) return 1;
//		else return memo[n] = recurFabor(n - 1) + recurFabor(n - 2);
//	}
//};
//int main()
//{
//	
//	time_t start, end;
//	long long tmp;
//	for (int i =30; i < 40; i++)
//	{
//		Solution Obj;
//		start = clock();
//		for (int j = 0; j < 100000000; j++)
//		{
//			tmp = Obj.recurFabor(i);
//
//		}
//		end = clock();
//		cout << tmp << endl;
//		cout << i << "#" << (double)(end - start) / CLOCKS_PER_SEC << endl;
//	}
//	//cout << Obj. << endl;
//	system("pause");
//	return 0;
//}