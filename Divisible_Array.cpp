#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int c= 2;
    if(n % 2 == 0){
        for(int i=0; i<n; i++){
            cout<<c<<" ";
            c+=2;
        }
        cout<<endl;
    }
    else{
        for(int i=0; i<n; i++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
}
