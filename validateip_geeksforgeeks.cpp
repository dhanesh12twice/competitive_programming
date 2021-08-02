#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

int main(void) {

   string s = "670.53.56.29";

    if(s[0] == '.'){
          cout << 0;
      }

   string cmparer ;
   int count =0;
   
   for(int a = 0 ; a < s.size() ; a++){
      if( char(s[a]) > 47 && char(s[a]) < 58 || s[a] == '.'){
        if(s[a] != '.'){ cmparer.push_back(s[a]);}
        else{
            count++;
            if(stoi(cmparer) > 255 || cmparer.size() > 3){ cout << "0b" << ' '<<s[a-1];}
            cmparer.clear();
        }
              
      }
      else{ cout << "0a" << ' ' << s[a];}
     
   }

   if(count != 3){cout << 0;}
   else{cout << 1;} 
    return 0;
}