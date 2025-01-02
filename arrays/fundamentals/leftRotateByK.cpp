#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotateArrayByK(vector<int> &nums, int k)
    {

        vector<int> temp;
        int n = nums.size();
        k = k % nums.size();
        for (int i = 0; i < k; i++)
        {
            temp.push_back(nums[i]);
        }
        for (int i = k; i < n; i++)
        {
            nums[i - k] = nums[i];
        }

        for (int i = 0; i < k; i++)
        {
            nums[n - k + i] = temp[i];
        }
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;
    solution.rotateArrayByK(nums, k);

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}
