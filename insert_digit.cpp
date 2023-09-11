// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
		int n;
		char x;
		string s;
		cin >> n;
		cin>>x;
		cin >> s;
		bool done = 0;
		for(int i = 0; i < n; ++i){
			if(s[i] >= x) cout << s[i];
			else{
				cout << x;
				for(int j = i; j < n; ++j) cout << s[j];
				done = 1;
				break;
			}
		}
		if(!done){
			cout << x;
		}
		cout << endl;
	}
	return 0;
}
