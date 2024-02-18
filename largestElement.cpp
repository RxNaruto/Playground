#include<iostream>
using namespace std;
void inputElements(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<endl;
        cin>>arr[i];
    }
}
void largestElement(int arr[],int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"The largest element is "<<largest<<endl;

}
int main()
{
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];
   inputElements(arr,n);
   largestElement(arr,n);   
 return 0;
}