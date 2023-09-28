// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if (s == "YES"){
            cout<<"NO\n";
            continue;}
            bool done = 1;
            for(int i=0; i<s.size(); i++){
                if(s[i] != 'Y' && s[i] != 'e' && s[i] != 's'){
                    done = 0;
                }
            }
        for(int i=0; i<s.size()-1; i++){
            if(s[i] == 's' && s[i+1] != 'Y') {
                done =0;
                break;}
            else if(s[i] == 'e' && s[i+1] != 's') {
                done =0;
                break;}
            else if(s[i] == 'Y' && s[i+1] != 'e') {
                done =0;
                break;}
            else if(s[i] == 's' && s[i+1] == 'e'){
                done=0;
                break;
                }
            else if(s[i] == 'y'){
                done=0;
                break;
            }
    }
        if(done) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
