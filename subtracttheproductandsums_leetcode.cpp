#include <bits/stdc++.h>
#include<string>
#include<typeinfo>

using namespace std;

int main(){
    int n = 234;
     string  S = to_string(n) ;
   

 
         int sum =0; int product =1; int val;
        for(int a =0; a < S.size() ; a++){
            val = int(S[a]) - 48 ;
       
            sum +=val;
            product *= val;
        }
        cout << (product - sum) ;
    return 0; 
}