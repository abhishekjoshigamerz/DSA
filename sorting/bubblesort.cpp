#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void bubblesort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = 0; j < nums.size() - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                }
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
    cout << "Output after bubble sorting" << endl;
    solution.bubblesort(nums);
    cout << endl;
    solution.print(nums);
    return 0;
}