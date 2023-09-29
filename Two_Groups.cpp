#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n,sum=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){cin>>v[i]; sum = sum + v[i];}
        cout<<abs(sum)<<endl;

    }
    return 0;
}
