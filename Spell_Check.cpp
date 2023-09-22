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
        string s,temp = "Timur";
        cin>>s;
        sort(s.begin(),s.end());
        sort(temp.begin(),temp.end());
        if(s == temp) cout<<"yes\n";
        else cout<<"NO\n";
    }
    return 0;
}
