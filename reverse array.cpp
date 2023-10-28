#include <iostream>
#include <math.h>
using namespace std;
void reverse(long long arr[],long long start,long long end){
  
         if(start>=end){
             return;
           }
           
             long long temp=arr[start];
             arr[start]=arr[end];
             arr[end]=temp;
         reverse(arr,start+1,end-1);
         
 }
int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }
    reverse(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
