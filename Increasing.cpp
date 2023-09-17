// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        bool done = 0;
        sort(v.begin(),v.end());
        for(int i=0; i<n-1; i++){
            if(v[i] >= v[i+1]){
                done = 1;
                break;
            }
        }
        if(done == 1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
