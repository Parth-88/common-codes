#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class parth
{
private:
    int weight;

public:
    int age;
    string name;

    // default const
    parth()
    {
        this->age = 00;
        this->weight = 90;
        cout << "default" << endl;
    }

    parth(int age)
    {
        this->age = age;
        this->weight = 90;
        cout << "para" << endl;
    }

    // copy const

    parth(parth &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        cout << "inside copy" << endl;
    }

    void eat()
    {
        cout << "eating" << endl;
    }

    int getweight()
    {
        return weight;
    }

    void setweight(int w)
    {
        weight = w;
    }

    ~parth()
    {
        cout << "destuctor" << endl;
    }
};

class dog : public parth
{
};

int main()
{
    parth singh;
    singh.age = 20;
    cout << singh.age << endl;

    singh.eat();
    singh.setweight(90);
    cout << singh.getweight() << endl;

    // dyanamic

    parth *damm = new parth;

    (*damm).age = 15;

    damm->age = 20;

    cout << "size of " << sizeof(parth) << endl;

    parth(89);
    parth();

    cout << endl;
    parth singh3(*damm);

    parth singh5 = *damm;
    delete damm;
    dog d1;
    cout << "DOG" << endl;
    d1.eat();

    return 0;
}