#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void insertionsort(vector<int> &nums)
    {
        for (int i = 0; i <= nums.size() - 1; i++)
        {
            int j = i;
            while (j > 0 && nums[j - 1] > nums[j])
            {
                swap(nums[j - 1], nums[j]);
                j--;
            }
        }
    }
    void print(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {5, 4, 6, 1, 2, 3, 9, 8, 10, 7};
    cout << "Output before sorting" << endl;
    solution.print(nums);
    cout << endl;
    cout << "Output after insertion sorting" << endl;
    solution.insertionsort(nums);
    cout << endl;
    solution.print(nums);
    return 0;
}