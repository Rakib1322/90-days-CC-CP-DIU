// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;cin>>t;
    while(t--){
        int n,c1=0,c2=0;cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++){
            cin>>b[i];
            if(a[i] != b[i])c1++;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        c2++;
        for(int i=0; i<n; i++){
            if(a[i] != b[i])c2++;
        }
        cout<<min(c1,c2)<<endl;
    }
    return 0;
}
