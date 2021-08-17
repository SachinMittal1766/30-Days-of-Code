#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     cin>>arr[i];
     int temp;
     int count=0;
     for(int i=0;i<n-1;i++){
         for(int j=0;j<(n-1-i);j++){
             if(arr[j]>arr[j+1]){
                 temp=arr[j+1];
                 arr[j+1]=arr[j];
                 arr[j]=temp;
                 count++;
             }
         }
     }
     
     cout<<"Array is sorted in "<<count<<" swaps."<<endl;
     cout<<"First Element: "<<arr[0]<<endl;
     cout<<"Last Element: "<<arr[n-1]<<endl;
}



