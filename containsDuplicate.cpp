#include <bits/stdc++.h>
using namespace std;

int check(vector<int>& nums)
{
	unordered_set<int> hashset;

	for (int i = 0; i < nums.size(); i++) {
		hashset.insert(nums[i]);
	}

	if (hashset.size() < nums.size())
		return 1;

	return 0;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

	if(check(nums))
        cout<<"TRUE"<<endl;
    else
        cout<<"FALSE"<<endl;
	
	return 0;
}
