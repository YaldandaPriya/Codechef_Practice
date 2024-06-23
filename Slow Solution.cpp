#include <iostream>
using namespace std;

int main() {
	int t_case;
	cin>>t_case;
	 
	for(int k = 0; k<t_case; k++){
	    int y ,a ,b;
	    cin>>y>>a>>b;

	    int d = b/a;
	    int e = b%a;
	   if(d<y) cout<<e*e + d*a*a<<endl;
	   else cout<<y*a*a<<endl;
	}
	return 0;
}
