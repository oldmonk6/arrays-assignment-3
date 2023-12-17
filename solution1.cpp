#include<iostream>

using namespace std;
int main()
{
    int arr[]={1,3,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=13;
    
    
    
   
   for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)
        {
            int high=n-1;
            while(j<=high)
            {
                if(arr[i]+arr[j]+arr[high]==x)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[high]<<endl;
                    
                }
                high--;
            }
        }
   }
    

    
}