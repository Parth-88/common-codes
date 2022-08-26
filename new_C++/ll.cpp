#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

int main ()
{
int a[] = {3,4,5,6,67,8,89};
for (auto i : a)
{
    cout<< i<<"   ";
}
cout<<endl;
vector<int> arr; 
cout<<arr.size()<<endl;
arr.push_back(22);
arr.push_back(22);
arr.push_back(22);
cout<<arr.size()<<endl;


return 0;
}
