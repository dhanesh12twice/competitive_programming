#include<bits/stdc++.h>
using namespace std;

int theoddone(int n ,int k, int s){
    int sum = 0; vector<int> multiple ; int i =1;
    while(i <= n*2 -1){
        sum += i;
        multiple.push_back(i);
        i +=2 ;
    }
    for(auto & it : multiple){cout << it << ' ';}

    
   for(auto it : multiple){
       int val = it;
       if((s-sum) == val * (k-1)){return val;}
   }
}
int main() {
	// your code goes here
	int T=1; //cin >> T;
	while(T--){
	    int n = 3, k =5, s = 13;
	 //   cin >> n >> k >> s;
	    cout << theoddone(n,k,s) << endl;
	    
	}
	return 0;
}