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
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        bool done = 1;
        for(auto d:mp){
            if(d.second >= 3){
                cout<<d.first<<endl;
                done = 0;
                break;
            }
        }
        if(done) cout<<-1<<endl;
    }
    return 0;
}
