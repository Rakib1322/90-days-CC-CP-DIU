//Count No. of years during which greater than 300 Automobiles were sold
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cout<<"Enter the size of the years: ";
    cin>>n;
    int Num[n];
    cout<<"Enter element of the array:\n";
    for(int i=0; i<n; i++){
        cout<<"["<<i+1<<"] = ";
        cin>>Num[i];
    }
    for(int i=0; i<n; i++){
        if(Num[i] >300) c++;
    }
    cout<<"Auto mobile sold greater than 300 is: "<<c<<endl;
}
