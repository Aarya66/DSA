#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto x : nums) {
            pq.push(x);
            if (pq.size() > k) {
                pq.pop();
            }
        }
        return pq.top();
    }
};

int main() {
    
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;

    Solution sol;

    cout << "The " << k << "th largest element is: " << sol.findKthLargest(nums, k) << endl;

    return 0;
}
