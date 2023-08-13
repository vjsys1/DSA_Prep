#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{ 
    int n=10,temp;
    int a[10] = {12,2,11,24,11,111,2312,121,12,200};
    for(int i = 0 ; i<n-1;i++)
    {
        for(int j=0;j<n-i+1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
                cout<<" Sorted array";

        for(int i = 0 ; i<n;i++)
        {
            cout<<" "<<a[i];
        }
// return 0 ;

    


}
