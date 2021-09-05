#include <iostream>
using namespace std;

int min(int a,int b){
    if(a>b){
        return b;
    }
    else
     return a;
}

int calculate(int a,int b,int c,int d){
    int p = a/c;
    int q = b/d;
    int r = min(p,q);
    return r;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	cout<<endl;
	for(int i=0; i<t; i++){
	    int x,y,xr,yr,D,r;
	    cin>>x>>y>>xr>>yr>>D;
	    int f = calculate(x,y,xr,yr);
	    if(f>=D){
	        cout<<"YES"<<endl;
	    }
	    else{
	       cout<<"NO"<<endl; 
	    }
	}
	return 0;
}
