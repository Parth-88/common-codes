#include<iostream>
#include <cmath>
using namespace  std;

class student 
{
    public:
            string name ;
            string major;
            double cgpa;

            student (string aname,string amajor,double acgpa)
            {
                name = aname;
                major = amajor;
                cgpa = acgpa;
                
            }

};

int main ()
{
cout<< "hii";

cout << pow(8,3);

string a;
cout<<"Enter a line";
getline(cin,a);
cout<< a;

int aa[] = {23,3,4,5,446,23};
cout<<aa[3];

student student1 ("parth","arts","8.4");

return 0;
}


