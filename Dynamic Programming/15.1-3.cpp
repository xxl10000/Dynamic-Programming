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
//class Solution
//{
//	int P[11] = { 0, 1,5,8,9,10,17,17,20,24,30 };
//	int memo[11]{ 0 };
//public:
//	int recurMax(int n, int cost)
//	{
//		if (memo[n]) return memo[n];
//		else if (n == 0) return 0;
//		else if (n == 1) return P[1];
//		else
//		{
//			int Max = P[n];
//			for (int i = 1; i < n; i++)
//			{
//				Max = max(Max, P[i] + recurMax(n - i, cost) - cost);
//			}
//			return memo[n] = Max;
//		}
//	}
//	int bottom_up(int n, int cost)
//	{
//		int *r = new int[n + 1]{ 0 };
//		if (!r)
//		{
//			cout << "Memory error!\n";
//			exit(1);
//		}
//		int Max;
//		for (int i = 1; i < n + 1; i++)
//		{
//			Max = P[i];
//			for (int j = 1; j < i; j++)
//			{
//				Max = max(Max, r[i - j] + r[j] - cost);
//			}
//			r[i] = Max;
//			
//		}
//		return Max;
//	}
//};
//int main()
//{
//	Solution Obj;
//	time_t start, end;
//	int tmp;
//	for (int i = 2; i < 11; i++)
//	{
//		Solution Obj;
//		start = clock();
//		//cout << Obj.recurMax(i) << endl;
//		for (int j = 0; j < 100000; j++)
//			tmp = Obj.bottom_up(i,3);
//		cout << tmp << endl;
//		end = clock();
//		cout << i << "#" << (double)(end - start) / CLOCKS_PER_SEC << endl;
//	}
//
//	//cout << Obj.dynamicMac(4) << endl;
//	system("pause");
//	return 0;
//}