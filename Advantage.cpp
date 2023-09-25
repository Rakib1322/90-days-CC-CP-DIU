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
        vector<int>v(n),v2;
        for(int i=0; i<n; i++) cin>>v[i];
        v2 = v;
        sort(v2.begin(),v2.end());
        int res = *(v2.end() - 2);
        int res2 = v2.back();
        for(int i=0; i<n; i++){
            if(v[i] != res2) cout<<v[i] - res2<<" ";
            else cout<<v[i] - res<<" ";
        }
        cout<<endl;
    }

    return 0;
}
