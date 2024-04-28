#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int minDifference(vector<int>& A, int N, int M) {
    if (N == 0 || M == 0)
        return 0;

    if (M > N)
        return -1; // Not possible to distribute

    sort(A.begin(), A.end());

    int minDiff = INT_MAX;

    for (int i = 0; i + M - 1 < N; ++i) {
        int diff = A[i + M - 1] - A[i];
        minDiff = min(minDiff, diff);
    }

    return minDiff;
}

int main() {
    int N, M;
    cout << "Enter the number of packets (N): ";
    cin >> N;
    cout << "Enter the number of students (M): ";
    cin >> M;

    vector<int> A(N);
    cout << "Enter the number of chocolates in each packet:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Packet " << i + 1 << ": ";
        cin >> A[i];
    }

    int minDiff = minDifference(A, N, M);

    if (minDiff == -1)
        cout << "It's not possible to distribute chocolates among students.\n";
    else
        cout << "Minimum difference between maximum and minimum chocolates given to a student: " << minDiff << endl;

    return 0;
}

