#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums, int low, int mid, int high)
    {
        int left = low;
        int right = mid + 1;
        vector<int> temp;
        while (left <= mid && right <= high)
        {
            if (nums[left] <= nums[right])
            {
                temp.push_back(nums[left]);
                left++;
            }
            else
            {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid)
        {
            temp.push_back(nums[left]);
            left++;
        }

        while (right <= high)
        {
            temp.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++)
        {
            nums[i] = temp[i - low];
        }
    }
    void mergeSortHelper(vector<int> &nums, int low, int high)
    {
        if (low < high)
        {
            int mid = (low + high) / 2;
            mergeSortHelper(nums, low, mid);
            mergeSortHelper(nums, mid + 1, high);
            merge(nums, low, mid, high);
        }
    }

    void mergesort(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;

        mergeSortHelper(nums, low, high);
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
    cout << "Output after merge sorting" << endl;
    solution.mergesort(nums);
    cout << endl;
    solution.print(nums);
    return 0;
}