// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,e1=0,e2=0,od1 = 0,od2=0;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>x;
            if(i % 2 == 1){
                if(x % 2 == 1) od1++;
                else e1++;
            }
            else if(i % 2 == 0){
                if(x % 2 == 0) e2++;
                else od2++;
            }
        }
        if((od1 && e1)>0)cout<<"NO\n";
        else if((od2 && e2)>0)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
