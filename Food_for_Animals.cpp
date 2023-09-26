// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int co=0;
        int res = a-x;
        int res2 = b-y;
        if(res < 0) co += res;
        if(res2< 0) co += res2;
        int res3 = c + co;
        if(res3 >= 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
