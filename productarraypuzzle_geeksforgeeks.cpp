#include<bits/stdc++.h>

using namespace std;


vector<long long int> product_array_puzzle(vector<long long int> & nums , int n){
    long long int a = 1;
    int count = 0;
    vector<long long int> ans ;

    for(int i = 0 ; i < n ; i++){
        if(nums[i] != 0){a *= nums[i];}
        else{count++;}
    }

    ans.assign(n, a);

    for(int j = 0 ; j < n ; j++){
        if(count == 0 ){ans[j] = ans[j]/ nums[j];}
        else if(count == 1){
            if(nums[j] != 0){ans[j] = 0;}
        }
        else{ans[j] = 0;}
    }

    return ans;

    
}

int main(){
   
   vector<long long int> producti= {0,2,3,4,5,6,7,8};
   int n = producti.size() ;

   vector<long long int> p = product_array_puzzle(producti, n) ;
   
   for(int z = 0 ; z < n ; z++){
       cout << p[z]<< ' ';
   }
    return 0;
}