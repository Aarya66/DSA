#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static long long trap(vector<int>& height) {
        int n = height.size();
        long long sum = 0;
        int left = 0;
        int right = 0;
        for(int i = 1; i < n - 1; i++) {
            left = height[i];
            for(int j = 0; j < i; j++) {
                left = max(left, height[j]);
            }
            right = height[i];
            for(int j = i + 1; j < n; j++) {
                right = max(right, height[j]);
            }
            sum += (min(left, right) - height[i]);
        }
        return sum;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the height array: ";
    cin >> n;
    
    vector<int> height(n);
    cout << "Enter the height values: ";
    for(int i = 0; i < n; i++) {
        cin >> height[i];
    }

    cout << "Trapped water: " << Solution::trap(height) << endl;
    
    return 0;
}
