#include <iostream>

using namespace std;

int value_finder(int A[], int N);

int main(void){
   

    int N;
    cout << " Enter number of values to insert in an array" << endl;
    cin >> N ;

     int A[N] ;

    cout << " Enter " << N-1 << " contagious values for array  "<< endl;

    for(int a =0; a < N-1 ; a++){
        cin >> A[a];
    }

    cout << value_finder(A,N);


}

int value_finder(int A[], int N){
    int sum =0;
    int value = (N * (N+1))/2 ;
    for(int i =0; i < N-1 ; i++){
        sum += A[i];
    }

    return(value - sum);
}