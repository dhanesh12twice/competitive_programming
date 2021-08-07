#include <bits/stdc++.h>

using namespace std;

int main(){

     vector<bool> result; int extraCandies = 3; vector<int> candies = {2,3,5,1,3};
       int max = *max_element(candies.begin(), candies.end());
        for(auto it = candies.begin() ; it != candies.end(); it++){
            result.push_back(*it + extraCandies >= max ); 
        }
        
        for(auto it = result.begin() ; it != result.end() ; it++){
            cout << *it << endl;
        }
    return 0;
}
   