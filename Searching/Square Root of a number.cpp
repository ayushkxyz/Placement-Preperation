       
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        long long int s=0;
        long long int ei=x;
        long long int  ans=0;
        long long int mid;
        while(s<=ei){
            mid=(s+ei)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                ei=mid-1;
            }
            else if(mid*mid<x){
                ans=mid;
                s=mid+1;
            }
                
            }
            return ans;
        }
         
