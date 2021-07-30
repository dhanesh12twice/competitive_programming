#include <iostream>
#include <vector>

using namespace std ;




int main(void){

    int n;
    cout << "Enter the no of values for the array " << endl ;
    cin >> n;
    
    cout << "Enter " << n << " values to store them" << endl;
    int arr[n];
    for(int a =0 ; a < n ; a++){
          cin >> arr[a] ;
    }

    // Moving the negative elements in the right side and positive  elements in the left side without changing the order .
   vector<int> pos, neg;
        
        for(int a =0 ; a< n ; a++){
            if(arr[a] >=0 ){
                pos.push_back(arr[a]);
            }
            else{neg.push_back(arr[a]);}
        }
        
        for(int i =0 ; i < pos.size(); i++){
            arr[i]  = pos[i];
        }
        for(int j = pos.size(); j < pos.size()+neg.size(); j++){
            arr[j] = neg[j-pos.size()];
        }

        for(int k =0 ; k < n ; k++){
            cout << arr[k] <<' ';
        }    
}

