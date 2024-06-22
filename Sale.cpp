#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--){
       int n;cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       long long int max=0;
       long long int ans=0;
       for(int i=0;i<n;i++){
           ans+=arr[i];
           if(max<(ans+arr[i])){
               max=ans+arr[i];
           }
       }
       cout<<max<<endl;
   }
}
