#include<iostream>
using namespace std;
void moveZeroesEnd(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            
            if(arr[j]==0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}
int main()
{
    int arr[8]={1,0,2,3,0,4,0,1};
    moveZeroesEnd(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}