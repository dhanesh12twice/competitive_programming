#include<bits/stdc++.h>

using namespace std;


 int findPeakElement(vector<int>& nums) {
       int low_bound = INT_MIN ; nums.push_back(INT_MIN); int val =0;
       for(int i = 0 ; i < nums.size() -1 ; i++){
           if(low_bound < nums[i] && nums[i] > nums[i+1]){
               val = i;
               break;
           }
           low_bound = nums[i];
       }
       return val;
    }

int main(){

    vector<int> nums = {1,2,1,3,5,6,4} ;
     cout << findPeakElement(nums);
    return 0;
}