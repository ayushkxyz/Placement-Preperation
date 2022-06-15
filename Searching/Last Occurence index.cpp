#include<iostream>
using namespace std;

int lastOcc(int arr[],int low,int high,int elem,int n){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
     if(arr[mid]>elem){
         return lastOcc(arr,low,mid-1,elem,n);
     }
     else if(arr[mid]<elem){
         return lastOcc(arr,mid+1,high,elem,n);
     }
     else{
         if(mid==n-1||arr[mid]!=arr[mid+1]){
             return mid;
         }
         else{
           return lastOcc(arr,mid+1,high,elem,n);
         }
     }
}
   
/*
int lastOcc(int arr[],int low,int high,int elem,int n){
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]>elem){
            high=mid-1;
        }
        else if(arr[mid]<elem){
             low=mid+1;
        }
        else{
            if(mid==n-1||arr[mid]!=arr[mid+1]){
                return mid;
            }
            else{
                  low=mid+1;
            }
        }

    }
    return -1;
}
*/






int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int elem;
    cin>>elem;
    int ans=lastOcc(arr,0,n-1,elem,n);
    cout<<"INDEX ="<<ans<<endl;

}
