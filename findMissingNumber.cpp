#include<iostream>
using namespace std;
int missingNumber(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]!=count){
            return count;
        }
         count++;
        }
        
       
    }
    return 0;
}
int main()
{
    int arr[2]={1,3};
    cout<<"The missing number is "<<missingNumber(arr,4);
 return 0;
}