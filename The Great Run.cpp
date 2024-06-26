#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     int t_case;
     cin>>t_case;
     while(t_case--){
         int n,k;
         cin>>n>>k;
         vector<int>ar(n);
         for(int i=0;i<n;i++){
             cin>>ar[i];
         }
         int maxi = -1;
        for(int i=0;i<=n-k;i++)
        {
            int res =0;
            for(int j=i; j<i+k;j++)
            {
                res+=ar[j];
            }
            if(maxi<res){
                maxi = res;
            }
        }
        cout<<maxi<<endl;
     }
}
