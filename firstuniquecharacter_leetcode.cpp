#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "leetcode" ; int flag =0;

   map<char, int> mapper; 

     for(int a =0 ; a< s.size() ; a++){
            mapper[s[a]] = mapper[s[a]] +1;
        }

        for(int a = 0; a < s.size() ; a++){
            if( mapper[s[a]] == 1){cout << a;break;flag++;}
        }
    if(flag == 0){cout << -1;} 
    
    return 0;
}