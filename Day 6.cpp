#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
   while(n--){
       string s;
       cin>>s;
       string S1,S2;
       for(int i=0;i<s.length();i++){
           if(i%2==0){
               S1+=s[i];
           }
           else 
           S2+=s[i];
       }
       cout<<S1<<" "<<S2<<endl;
       
   }
      
    return 0;
}

