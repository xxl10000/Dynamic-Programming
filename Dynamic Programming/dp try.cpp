//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//	int P[11] = { 0, 1,5,8,9,10,17,17,20,24,30 };
//	int memo[11]{ 0 };
//	int r[11] = { 0 };
//public:
//	int recurMax(int n)
//	{
//		if (memo[n] != 0)
//		{
//			return memo[n];
//		}
//		if (n <= 1)
//		{
//			return P[n];
//		}
//		else if (memo[n] == 0)
//		{
//			int Max = 0;
//			for (int i = 1; i <= n; i++)
//			{
//				Max = max(Max, P[i] + recurMax(n - i));
//			}
//			return memo[n] = Max;
//		}
//	}
//	int recurMaxNoMemo(int n)
//	{
//		if (n < 2) return P[n];
//		else
//		{
//			int Max = INT_MIN;
//			for (int i = 1; i <= n; i++)
//			{
//				Max = max(Max, P[i] + recurMaxNoMemo(n - i));
//			}
//			return Max;
//		}
//	}
//	int dynamicMac(int n)
//	{
//		/*int *r = new int[n + 1]{};
//		if (!r)
//		{
//			cout << "error!\n";
//			exit(1);
//		}*/
//		for (int i = 1; i <= n; i++)
//		{
//			int q = -1;
//			for (int j = 1; j <= i; j++)
//			{
//				q = max(q, P[j] + r[i - j]);
//			}
//			r[i] = q;
//		}
//		/*int tmp = r[n];
//		delete r;*/
//		return r[n];
//	}
//};
//
//#include<time.h>
//int main()
//{
//
//	time_t start, end;
//	int tmp;
//	for (int i = 2; i < 11; i++)
//	{
//		Solution Obj;
//		start = clock();
//		//cout << Obj.recurMax(i) << endl;
//		for (long j = 0; j < 10000000; j++)
//			tmp = Obj.dynamicMac(i);
//		cout << tmp << endl;
//		end = clock();
//		cout << i << "#" << (double)(end - start) / CLOCKS_PER_SEC << endl;
//	}
//
//	//cout << Obj.dynamicMac(4) << endl;
//	system("pause");
//	return 0;
//}