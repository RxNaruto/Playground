#include<iostream>
#include<vector>
using namespace std;

int max(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    return max;
}
int numberAppearOnce(int arr[],int n){
    int maxn=max(arr,n);
    vector<int>arr2(maxn+1,0);
    int temp;
    for(int i=0;i<n;i++){
        temp=arr[i];
        arr2[temp]=arr2[temp]+1;
        
    }
    for(int i=0; arr2.size();i++){
        if(arr2[i]==1){
            return i;
        }
    }

    
}
int main()
{
    int arr[5]={4,1,2,1,2};
    cout<<"The number that appear once is "<<numberAppearOnce(arr,5);
    
    

 return 0;
}