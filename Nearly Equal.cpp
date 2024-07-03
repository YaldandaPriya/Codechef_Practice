#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;int mini=INT_MAX;
    for(int i=0;i<n-m+1;i++){
        int c=0;
        string a=s.substr(i,i+m);
        for(int j=0;j<m;j++){
            if(a[j]!=t[j]){
                c++;
            }
        }
        mini=min(mini,c);
    }
    cout<<mini<<endl;
}
}
