#include<iostream>
using namespace  std;

void  rs(string &s)
    {
        for (int i = 0;i<s.size()/2;i++)
        {
            int n = s.size();
            char a= s[i];
            s[i] = s[ n-i-1];
            s[n-i-1] = a;
        }
        cout<<s;
    }

int pow(int a,int b)
{
    if (b==0)
    return (1);

    if(b==1)
    return (a);

    int ans=pow(a,b/2);

    if(b & 1)
    return (a*ans*ans);

    else 
    return (ans*ans);


}

int main ()
{
string a="parth";
//rs(a);
//int r = pow(9,67);
int aa=1;
int p = 9;
for (int i = 1;i<68;i++)
{
    aa*=p;
}
cout<< aa;

return 0;
}


