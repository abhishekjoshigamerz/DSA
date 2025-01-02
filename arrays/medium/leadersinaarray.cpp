// Given an integer array nums, return a list of all the leaders in the array.
// A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.
// Input: nums = [1, 2, 5, 3, 1, 2]

// Output: [5, 3, 2]

// Explanation: 2 is the rightmost element, 3 is the largest element in the index range [3, 5], 5 is the largest element in the index range [2, 5]
// brute force approach
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> leaders(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            bool leader = true;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] > nums[i])
                {
                    leader = false;
                    break;
                }
            }
            if (leader == true)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 5, 3, 1, 2};

    // Create an instance of the Solution class
    Solution finder;

    // Get leaders using class method
    vector<int> ans = finder.leaders(nums);

    cout << "Leaders in the array are: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}