#include<iostream>
using namespace std;
void subset(int arr[],int arr2[],int n1,int n2)
{   bool flag =false;
    for(int i=0;i<n2;i++ )
    {
        int j=0;
        while(j<n1)
        {
            if(arr[j]==arr2[i])
            {
                flag =true;
                break;
              
            }
            else{
                flag =false;
            }
            j++;
        }
        if(flag==false){
            cout<<"array2 is not a subsest";
            break;
        }

    }
    if(flag==true)
    cout<<"array 2 is a subset";

}
int main()
{
    int arr[]={1,2,3,4,5};
    int arr2[]={1,6};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    subset(arr,arr2,n1,n2);

}