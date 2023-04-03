#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace  std;


int containsDuplicate(vector<int>& nums)
     {
         int f =0;
        for (int i = 0 ;i<4;i++)
        {
            for (int j = i+1 ;j<4;j++)
            {
                if (nums[i]==nums[j])
                {
                    f++;
                }
                
               
            }
        }
        
        if (f==0)
        {
            return 1;
        }
     return 0;
    }

int main ()
{
    vector<int> arr;
    arr.push_back(99);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);
  cout<<containsDuplicate(arr);

return 0;
}