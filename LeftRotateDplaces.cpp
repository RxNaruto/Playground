#include<iostream>
using namespace std;
void inputElements(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<endl;
        cin>>arr[i];
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void leftRotateDPlace(int arr[],int n,int d){
    for(int j=0;j<d;j++){
    int temp=arr[0];
    int i;
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
    }

}
int main()
{
    int n,d;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    cout<<"Enter the d places"<<endl;
    cin>>d;
    int arr[n];
   inputElements(arr,n);
   leftRotateDPlace(arr,n,d);
   printArray(arr,n);
 return 0;
}