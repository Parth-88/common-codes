#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

void f (int i, int ar[],vector<int> &ds,int n)
{
    if ( i == n)
    {
        for (auto it : ds)
        {
            cout << it<<" ";
        }
        cout << endl;
        return;
    }

     f(i+1,ar,ds,n);
    ds.push_back(ar[i]);
    f(i+1,ar,ds,n);
    ds.pop_back();
}

int main ()
{
    int ar[]={3,2,1};
    vector<int> ds;
    int n = 3;
     
    f(0,ar,ds,n);
   
 return 0;

}
