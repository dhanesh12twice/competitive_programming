#include <bits/stdc++.h>


using namespace std;

bool isit(string & s, string & t){
     int found;
     
  if(s.size() != t.size()){return  false;};

  int sized = s.size();
  for(int a = 0 ; a< sized; a++){

            if( t.find(s[a]) != -1){
                found = t.find(s[a]) ;
                t.erase(found , 1); 
            }
            else if(t.find((char) tolower(s[a])) != -1){
                found = t.find((char) tolower(s[a]));
                t.erase(found ,1 );
            }
            else if (t.find((char) toupper(s[a]))!= -1){
                found = t.find((char) toupper(s[a]));
                t.erase(found ,1);
            }
            else{
                return false;
            } 
           
           
        
  }
        return true;   
}


 
int main()
{
    string s = "ANgrAam" ;  string t = "naagram" ;

   
   cout << isit(s,t) ; 
 
 return 0;
}
