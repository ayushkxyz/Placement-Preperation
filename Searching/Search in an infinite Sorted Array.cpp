#include<iostream>
using namespace std;
int Search(int arr[],int size,int elem){
      if(arr[0]==x){
          return 0;
      }
      int i=1;
      while(arr[i]<=elem){
          if(arr[i]==elem){
              return i;
          }
          i=i*2;

      }
    return binary_search(int arr,(i/2)+1,i-1,elem);

}
