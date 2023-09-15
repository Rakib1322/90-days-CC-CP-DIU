#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
        cin>>n;
        string s;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cin>>s;
        map<int,set<char>> mp;
        for(int i=0;i<n;i++){
            mp[v[i]].insert(s[i]);
        }
        int done = 1;
        for(auto d:mp){
            if(d.second.size()>1){
                done = 0;
                break;
            }
        }
        cout<<(done? "YES\n":"NO\n");
}
}
