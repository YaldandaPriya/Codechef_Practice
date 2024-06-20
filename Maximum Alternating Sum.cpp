#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }int sum=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n/2;i++){
        sum=sum-a[i];
    }
    for(int i=n/2;i<n;i++){
        sum=sum+a[i];
    }
    cout<<sum<<endl;
}
}
