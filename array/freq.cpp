#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {12,10,10,11,13,13};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    int count = 1;
    for(int i = 0 ; i<=n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else if(i==n-1 || arr[i]!=arr[i+1]) { 
        cout<<arr[i]<<":"<<count<<endl;
        count =1;

        }
    }
    return 0 ;
}