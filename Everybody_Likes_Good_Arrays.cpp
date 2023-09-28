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
        for(int i=0; i<n; i++) cin>>v[i];
        for(int i=0; i<n-1; i++){
            if((v[i] % 2) == (v[i+1] % 2)){
                v[i+1] = v[i] * v[i+1];
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
