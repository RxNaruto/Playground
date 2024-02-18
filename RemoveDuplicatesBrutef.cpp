#include<iostream>
using namespace std;
void inputElements(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<endl;
        cin>>arr[i];
    }
}
void overlap(int arr[],int size,int s){
    int i;
    for(i=s;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=NULL;

}
void removeDuplicates(int arr[],int n){
    for(int i=0;i<(n-1);i++){
        for(int j=1;j<n;j++){
            if(arr[i]==arr[j]){
                overlap(arr,n,j);
            }
        }

    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];
   inputElements(arr,n);
   removeDuplicates(arr,n);
   printArray(arr,n);
 return 0;
}