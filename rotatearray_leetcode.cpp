#include <iostream>
#include <vector>

using namespace std;

 void reverse(vector <int> &nums, int start , int end);

int main(void){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 4; //rotating the nums into three times ie. removing the last element and add it to the beginnning for three times.

    /* Directly removing the last element and add it in the beginning.
    But this causes the program to run outside to the time bound.
    So reversing the vector concept will help to solve this time complexity. */

    reverse(nums , 0, nums.size()-1);
    reverse(nums, 0 , k-1);
    reverse(nums, k, nums.size()-1);
    
    for(auto it = nums.begin(); it != nums.end(); it++){
        cout << *it << ' ';
    }
    return 0;

}


  void reverse(vector <int> &nums, int start , int end){
        int cmp;
        if ((end-start) % 2 ==0){cmp = (end-start)/2;}
        else{ cmp = (end-start)/2 +1;}

        for(int a =0; a< cmp; a++){
            int temp = nums[a+start];
            nums[a+start] = nums[end-a];
            nums[end-a] = temp;
        }
    }