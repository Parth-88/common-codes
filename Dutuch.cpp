#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

void dutch(int ar[],int n)
{
    int l = 0;
    int h = n-1;
    while (l<h)
    {
        if (ar[l]<0)
        {
             l++;
        }
       
        else if (ar[h]>0)
        {
             h--;
        }
       
        else{
            swap(ar[l],ar[h]);
            l++;
            h--;
            
        }
    }
      for (int i = 0 ;i<n;i++)
    {
        cout<<ar[i]<<endl;
    }
     
}

int main ()
{
    int arr[] = {3,-9,7,-2,6,9,-9};
    int n = 7;
    dutch(arr,n);
    
   


return 0;
}