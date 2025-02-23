#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void selectionSort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] < nums[min])
                {
                    min = j;
                }
            }
            if (min != i)
            {
                swap(nums[min], nums[i]);
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
    cout << "Output after selection sorting" << endl;
    solution.selectionSort(nums);
    cout << endl;
    solution.print(nums);
    return 0;
}