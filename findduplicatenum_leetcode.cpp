#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std ;

int duplicate(vector <int> &arr){
    std::unordered_map<int,int> mapper;
    int value ;
    for (auto it = arr.begin() ; it != arr.end() ; it++){
        if(mapper.count(*it) == 1){
            value = *it;
            break;
        }
        mapper[*it] = 1;
    }
    return value;
}

int main (void){
    vector <int> v1 = {3,3,3,3};
    //find the only number which duplicates in the entire vector . We can simply use unordered map or unordered set to do the job.
    cout << duplicate(v1);
    
}