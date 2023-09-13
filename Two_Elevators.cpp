// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int res = abs (c-b) + c;
        if( a == res ) cout<<3<<endl;
        else if ( a > res ) cout<<2<endl;
        else cout<<1<<endl;
    }
    return 0;
}
