#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output;
        if (n < 1) {
            return output;
        }
        int product = 1;
        for (int i = 0; i < n; i++) {
            product *= nums[i];
            output.push_back(product);
        }
        product = 1;
        for (int i = n - 1; i > 0; i--) {
            output[i] = output[i - 1] * product;
            product *= nums[i];
        }
        output[0] = product;

        return output;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> result = sol.productExceptSelf(nums);

    cout << "Output array: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
