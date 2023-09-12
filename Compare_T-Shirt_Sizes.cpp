// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if((a.back() == 'S') && (b.back() == 'M')){
            cout<<'<'<<endl;
        }
        else if((a.back() == 'M') && (b.back() == 'S')){
            cout<<'>'<<endl;
        }
        else if((a.back() == 'M') && (b.back() == 'L')){
            cout<<'<'<<endl;
        }
        else if((a.back() == 'L') && (b.back() == 'M')){
            cout<<'>'<<endl;
        }
        else if((a.back() == 'L') && (b.back() == 'S')){
            cout<<'>'<<endl;
        }
        else if((a.back() == 'S') && (b.back() == 'L')){
            cout<<'<'<<endl;
        }
        else if((a.back() == 'S') && (b.back() == 'S')){
            if(a.size() > b.size()) cout<<'<'<<endl;
            else if(a.size() < b.size()) cout<<'>'<<endl;
            else cout<<'='<<endl;
        }
        else if((a.back() == 'L') && (b.back() == 'L')){
            if(a.size() > b.size()) cout<<'>'<<endl;
            else if(a.size() < b.size()) cout<<'<'<<endl;
            else cout<<'='<<endl;
        }
        else if((a.back() == 'M') && (b.back() == 'M')){
            cout<<'='<<endl;
        }
    }
}
