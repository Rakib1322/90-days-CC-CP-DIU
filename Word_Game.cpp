#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,c=0;
    cin>>n;
    string s[3][n];
    map<string,int> mp;
    for(int i=0; i<3; i++){
       for(int j=0; j<n; j++){
           cin>>s[i][j];
           mp[s[i][j]]++;
       }
    }
    for(int i=0; i<3; i++){
            c =0;
       for(int j=0; j<n; j++){
        if(mp[s[i][j]] == 1) c+=3;
        else if(mp[s[i][j]] == 2) c++;
       }
       cout<<c<<" ";
    }
    cout<<endl;
}
}
