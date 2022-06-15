 int helper(int arr[],int s,int l,int N){
        int mid=(s+l)/2;
        
              if(s>l){
                  return -1;
              }
              if(arr[mid]==0){
                 return helper(arr,s,mid-1,N);
              }
              else{
                  if(mid==N-1||arr[mid+1]==0){
                      return mid;
                  }
                  else{
                      return helper(arr,mid+1,l,N);
                  }
              }
              
               
    }
    int countOnes(int arr[], int N)
    {
        
        // Your code here
        int a=helper(arr,0,N-1,N);
        if(a==-1){
            return 0;
        }
        else{
            return a+1;
        }
        
    }
};
