#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a=0,b=0;
    while(n--){
        string s;
        cin>>s;
        if(s=="START38"){
            a++;
        }
        else if(s=="LTIME108"){
            b++;
        }
    }
    cout<<a<<" "<<b<<endl;
}
}
