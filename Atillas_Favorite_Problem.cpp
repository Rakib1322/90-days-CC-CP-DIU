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
        string s;
        cin>>s;
        char ch = *max_element(s.begin(),s.end());
        cout<<ch - 96<<endl;
    }
    return 0;
}
