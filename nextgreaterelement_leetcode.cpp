#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> gre = {13,7,6,12,10};
    int n = gre.size() ;

    int gre1[n] ;
    // ans = {-1,12,12,-1,-1};
    

   vector<int>v1;

    for(int a = n-1 ; a >= 1 ; a--){
        v1.push_back(gre[a]);
        
         while(!v1.empty()){
             if (v1.back() >= gre[a-1]){ gre1[a-1] = v1.back() ;break;}
         else{v1.pop_back() ;}

         }

         if(v1.empty() == true) { gre1[a-1] = -1;}
     }
    
   gre1[n-1] = -1;
   for(int i =0 ;i < n ; i++){
       cout << gre1[i] <<' ' ;
   }
  
    return 0;
}