// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i] % 2 == 0) c++;
        }
        int res = min(c,(n-c));
        cout<<res<<endl;
    }
}
