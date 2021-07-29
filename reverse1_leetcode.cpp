#include  <iostream>
#include <vector>


using namespace std;
int main(void){
     
 vector <char> s = {'h','e','l','l','o'} ;
 

int sized = s.size();

 if( sized %2 ==0 ){sized = sized/2 ;}
 else{sized = sized /2 + 1 ;}     
   for(int a =0 ; a < sized; a++){
            int  temp = s[a];
            s[a] = s[s.size() -1-a];
            s[s.size()-1-a] = temp;
        }     

cout << '[';
for(auto it = s.begin(); it!= s.end() ; it++){
    if(it != s.end()-1){
        cout << '"' << *it << '"' <<',';
    }
    else{cout << '"' << *it << '"';}
}       
      
   cout << ']'     ;
    return 0;
}