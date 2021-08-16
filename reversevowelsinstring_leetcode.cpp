#include<bits/stdc++.h>

using namespace std;


int main(){
    string s = "education" ;
    
   auto found = s.find_first_of("aeiouAEIOU");
 auto  found1 = s.find_last_of("aeiouAEIOU");

 

    while(found <found1 ){
        char temp = s[found] ;
        s[found] = s[found1];
        s[found1] = temp;
        found = s.find_first_of("aeiouAEIOU",found+1);
       
        found1 = s.find_last_of("aeiouAEIOU",found1-1);

       
        
    }

    cout << s;

    return 0;
}