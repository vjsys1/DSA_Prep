#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);


    cout<<v.size()<<endl;
    cout<<v.capacity();
    return 0;
}