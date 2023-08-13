#include<iostream>
#include<algorithm>
using namespace std;
int main()
{  int min,temp;
    int n=10;
    int a[10] = {12,2,11,24,11,111,2312,121,12,200};
    for(int i =0 ;i <n-1;i++)
    {  min = i ;
        for(int j=i;j<n;j++)
        {
            if(a[j] < a[min])
            {
               temp = a[j];
               a[j] = a[min];
               a[min] = temp;
            }
        }
    }
    cout<<"Sorted array is : ";
        for(int i =0 ;i <n;i++)
    {  cout<<a[i]<<" "; ;}
return 0 ;

}
