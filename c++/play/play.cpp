#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[6]={3,6,1,2,5,0};
    bubbleSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<< " ";

    }
 
 return 0;
}