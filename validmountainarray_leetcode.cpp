#include<bits/stdc++.h>

using namespace std;


 bool validMountainArray(vector<int>& arr) {
        int some = arr[0];int cmp = 0;  bool val1 = 0;bool val2 = 0;
        if(arr.size() >=3){
            for(int a = 1 ; a < arr.size() ; a++){ 
              
              
                   if(some < arr[a]){some = arr[a];val1 = 1;}
                   else if(some == arr[a]){return false;}
                   else{
                       if(some > arr[a]){some = arr[a]; val2 = 1;}
                    else if(some == arr[a]){return false;}
                   else{return false;}
                        
            
               
                   }
                             
               

              
                
            }
           return { val1 && val2};
        }
        else{return false;}
}

int main(){
    vector <int> arr = {9,8,7,6,5,4,3,2,1,0};
    cout << validMountainArray(arr);
    return 0;
}