#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = { 1,2,2,1,1,3}; 
    int arr1[4];
//    111223
    int k = 0;
    std::sort(arr , arr+6);
    for(int i = 0;i< 6 ; i++){
         int count = 0;
        for(int j = 0;j<6;j++){
            if( arr[i] == arr[j]){
                count++;
            }
            
           
        }
         arr1[k] = count;
            k++;
    }
    for ( int i = 0;i<k;i++){
        cout<<arr1[i];
    }
    // for ( int i = 0 ; i< k;i++){
    //     for(int j = 0 ;j<k ;j++){
    //         if ( arr1[i] == arr1[j]){
    //             cout << "False";
    //         }
    //         else {
    //             cout<<"True";
    //         }
    //     }
    // }
    
}