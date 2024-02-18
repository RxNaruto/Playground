#include<iostream>
using namespace std;
void inputElements(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<endl;
        cin>>arr[i];
    }
}
void secondLargestElement(int arr[],int n){
    int largest=arr[0];
    int secondLargest;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]<largest){
            secondLargest=arr[i];
        }
    }
    cout<<"The second largest element is "<<secondLargest<<endl;

}
int main()
{
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];
   inputElements(arr,n);
   secondLargestElement(arr,n);   
 return 0;
}