//iterative


#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int n = nums.size(); //size of the array
    int low = 0, high = n - 1;

    // Perform the steps:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = binarySearch(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << ind << endl;
    return 0;
}




//recursive
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& nums, int low, int high, int target) {
    if (low > high) return -1; // Base case: target not found

    int mid = (low + high) / 2;
    if (nums[mid] == target) return mid;
    else if (target > nums[mid]) return binarySearch(nums, mid + 1, high, target);
    else return binarySearch(nums, low, mid - 1, target);
}

int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = binarySearch(a, 0, a.size() - 1, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << ind << endl;
    return 0;
}

// The above code is a C++ implementation of binary search algorithm.
// It includes both iterative and recursive approaches to find the index of a target element in a sorted array.