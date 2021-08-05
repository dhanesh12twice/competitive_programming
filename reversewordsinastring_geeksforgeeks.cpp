#include <bits/stdc++.h>


using namespace std;

int main(){
    string S = "I.am.inquistive" ;
    string ans ;
        int val = S.size() ;
        for(int i = S.size() ; i >= 0; i--){
            if(S[i] == '.'){
                ans.append(S.substr(i+1, val-(i+1)));
                ans.append(".");
                val = i;
            }
        }
        ans.append(S.substr(0,val));
        cout << ans;
    
   
    
    return 0;
}