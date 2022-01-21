#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
     //int n = sizeof(arr, arr+n);

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
   

    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<" ";
    }//arr[i]==*(arr+i)

    for(int i=4;i>=0;i--){
        cout<<*(arr+i)<<" ";
    }
}