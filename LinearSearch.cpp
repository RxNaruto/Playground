#include<iostream>
using namespace std;
void inputElements(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<endl;
        cin>>arr[i];
    }
}
int linearSearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,x;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];
   inputElements(arr,n);
   cout<<"Enter the element you want to find"<<endl;
    cin>>x;
   cout<<"The element is present at index"<<linearSearch(arr,n,x);

   
 return 0;
}