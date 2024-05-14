#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[l] <= nums[mid]) {
                if (nums[l] <= target && target <= nums[mid])
                    r = mid - 1;
                else
                    l = mid + 1;
            } else {
                if (nums[mid] <= target && target <= nums[r])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;

    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    int index = sol.search(nums, target);
    if (index != -1) {
        cout << "Target " << target << " found at index " << index << endl;
    } else {
        cout << "Target " << target << " not found." << endl;
    }

    return 0;
}
