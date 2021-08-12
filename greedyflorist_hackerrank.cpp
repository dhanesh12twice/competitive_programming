#include<bits/stdc++.h>


using namespace std;




int main(){
     
   vector<int> c = {1,3,5,7,9}; int k = 3; int sum = 0; int val;
   sort(c.begin(), c.end() ,greater<int>());
 

   int remain = c.size() % k ;
   int quotient = c.size() / k;
   quotient = remain != 0 ? quotient+1 : quotient ;
    int cmp;

   for(int a = 0 ; a < quotient  ; a++){
     int b = a * k ; 
     if( b + k <= c.size()){cmp = b + k ;}
     else{cmp = b+ remain;}
      for(int i = b ; i < cmp ; i++){
        sum += (a+1) * c[i];
      }
   }

   

     cout << sum;



    return 0;
}