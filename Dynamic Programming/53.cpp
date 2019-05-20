#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<time.h>
using namespace std;
//Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//Definition for singly - linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};
class Solution {
public:
	int maxSubArray(vector<int>& nums, int *& Max, int n) {
		if (Max[n] != INT_MIN) return Max[n];
		else if (n == 0) return nums[0];
		else
		{
			Max[0] = nums[0];
			for (int i = 1; i < n + 1; i++)
			{
				Max[i] = max({nums[i], maxSubArray(nums, Max, i- 1) + nums[i]});
			}
			return Max[n];
		}
	}
	int maxSubArray(vector<int>& nums) {
		int *Max = new int[nums.size()]{};
		for (int i = 0; i < nums.size(); i++)
		{
			Max[i] = INT_MIN;
		}
		return maxSubArray(nums, Max, nums.size() - 1);
	}
};

int main()
{
	Solution Obj;
	vector<int> v = { -2,1,-3,4,-1,2,1,-5,4 };
	//vector<int> v = { -1,-2 };
	cout << Obj.maxSubArray(v) << endl;
	system("pause");
	return 0;
}