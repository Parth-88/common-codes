#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

class parth
{
    private:
    int weight;
    public:
    int age;
    string name;
    

    void eat()
    {
        cout<<"eating"<<endl;

    }

    int getweight(){
        return weight;
    }

    void setweight(int w){
        weight = w;
    }

};

int main ()
{
    parth singh;
    singh.age = 20;
    cout<<singh.age<<endl;

    singh.eat();
    singh.setweight(90);
    cout<< singh.getweight()<<endl;



    //dyanamic

    parth* damm = new parth;


    (* damm).age = 15;
    
    damm->age = 20;


    








cout<<"size of "<<sizeof(parth)<<endl;
return 0;
}