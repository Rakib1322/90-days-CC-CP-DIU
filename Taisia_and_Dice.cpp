// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int n,r,s;
        cin>>n>>s>>r;
        int ho = s - r;
        int res = r / (n-1);
        int rem = r % (n-1);
        cout<<ho<<" ";
        for(int i=0; i<(n-1); i++){
            if (rem > 0) cout<<res+1<<" ";
            else cout<<res<<" ";
            rem--;
        }
        cout<<endl;
    }
    return 0;
}
