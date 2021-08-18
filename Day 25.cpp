#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){
        int n,i,flag=0;
        cin>>n;
        if(n==1)
        cout<<"Not prime"<<endl;
        else{
             for( i=2;i<=sqrt(n);i++){
            if(n%i==0){
                cout<<"Not prime"<<endl;
                flag++;
                break;
            }
        }
        if(flag==0)
        cout<<"Prime"<<endl;
        }
    }  
    return 0;
}

