int searchInSorted(int arr[], int N, int K) 
    { 
      //Binary search Iteratively
       // Your code here
       int low=0,high=N-1;
       int mid;
       while(low<=high){
           mid=(low+high)/2;
           if(arr[mid]==K){
               return 1;
           }
           else if(arr[mid]>K){
               high=mid-1;
           }
           else{
               low=mid+1;
           }
       }
       return -1;
    }

// Binary search Recursively

    int helper(int input[],int low,int high,int element){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
      if(input[mid]==element){
          return mid;
      }
    else if(input[mid]>element){
        return helper(input,low,mid-1,element);
    }
    else{
        return helper(input,mid+1,high,element);
    }
}


int binarySearch(int input[], int size, int element) {
    // Write your code here
    return helper(input,0,size-1,element);

}
