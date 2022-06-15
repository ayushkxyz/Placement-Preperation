#include<iostream>
using namespace std;
/*
int firstOcc(int arr[],int low,int high,int elem){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
     if(arr[mid]>elem){
         return firstOcc(arr,low,mid-1,elem);
     }
     else if(arr[mid]<elem){
         return firstOcc(arr,mid+1,high,elem);
     }
     else{
         if(mid==0||arr[mid]!=arr[mid-1]){
             return mid;
         }
         else{
           return firstOcc(arr,low,mid-1,elem);
         }
     }
}
*/

int firstOcc(int arr[],int low,int high,int elem){
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
            if(mid==0||arr[mid]!=arr[mid-1]){
                return mid;
            }
            else{
                  high=mid-1;
            }
        }

    }
    return -1;
}







int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int elem;
    cin>>elem;
    int ans=firstOcc(arr,0,n-1,elem);
    cout<<"INDEX ="<<ans<<endl;

}
