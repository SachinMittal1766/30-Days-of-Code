#include<iostream>
#include <climits>
using namespace std;

int hourglass(int i,int j,int **arr){
    return arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]+arr[i+1][j+1];
    
}

int main(){
    int maxima=INT_MIN;
    int n=6;
    int **arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            maxima=max(maxima,hourglass(i,j,arr));
        }
    }
    cout<<maxima<<endl;
    return 0;
}

