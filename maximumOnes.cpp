#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int maxconsOnes(int arr[],int n){
    int count=0,maxn=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxn=max(maxn,count);

        }
        else{
            count=0;
        }
        
        
    }
    return maxn;
    

}
int main()
{
    int arr[6]={1,1,0,1,1,1};
    cout<<"The most consecutive 1's are "<<maxconsOnes(arr,6);
    
 return 0;
}