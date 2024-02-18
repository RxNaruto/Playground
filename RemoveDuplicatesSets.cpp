#include<iostream>
#include<set>
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
int removeDuplicates(int arr[],int n){
    set<int>uniqueEl;
    for(int i=0;i<n;i++){
        uniqueEl.insert(arr[i]);
    }
    int k=uniqueEl.size();
    int j=0;
    for(int i:uniqueEl){
        arr[j++]= i;
    }
    return k;
}

int main()
{
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];
   inputElements(arr,n);
   int k=removeDuplicates(arr,n);
   printArray(arr,k);
 return 0;
}