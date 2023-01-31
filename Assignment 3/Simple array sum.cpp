#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

int main(){
int n;
cin>>n;
int ar[n];
int sum =0;
for(int i=0;i<n;i++) {
cin>>ar[i];

sum+=ar[i];
}
cout<<sum<<endl;
}

