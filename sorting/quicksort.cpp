#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int partition(vector<int> &nums, int low, int mid, int high)
    {
        int i = low;
        int j = high;
        int pivot = nums[low];
        while (i < j)
        {
            while (nums[i] <= pivot && i <= high - 1)
            {
                i++;
            }
            while (nums[j] > pivot && j >= low + 1)
            {
                j--;
            }
            if (i < j)
            {
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[low], nums[j]);
        return j;
    };
    void quickSortHelper(vector<int> &nums, int low, int high)
    {
        if (low < high)
        {
            int mid = (low + high) / 2;
            int pIndex = partition(nums, low, mid, high);
            quickSortHelper(nums, low, pIndex - 1);
            quickSortHelper(nums, pIndex + 1, high);
        }
    }

    void quicksort(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;

        quickSortHelper(nums, low, high);
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
    cout << "Output after quick sorting" << endl;
    solution.quicksort(nums);
    cout << endl;
    solution.print(nums);
    return 0;
}