#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; 
    long sum = 0;
    cin >> n;
    vector<long> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum = sum + A[i];
    }

    cout << sum << endl;
}