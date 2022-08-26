#include<iostream>
using namespace  std;

int h = 0;

int ft (int n,int k)
{
    if (n==1)
    {
         cout<<"loop ends";
          cout<<"\n";
           cout<<"\n";
          return k;
    }
       

if (n%2==0)
{
    h++;
    n/=2;
    if (n>k)
    {
        k=n;
    }

    cout<<n;
     cout<<"    ";
    return ft(n,k);
}
else 
{
    h++;
    n = (n*3)+1;
    if (n>k)
    {
        k=n;
    }

    cout<<n;
    cout<<"    ";
    return ft(n,k);
}
cout<<n;
 cout<<"               ";
 return k;
}

int main ()
{ 
    
int r ;
cout<<"enter n";
 cout<<"                                           ";
cin >>r;
 cout<<"\n";
 ft(r,0);
}