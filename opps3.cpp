#include <iostream>
using namespace std;

class Animal{
        public:
        Animal() {
                cout << "i am inside animal constructor" << endl;
        }
         void speak() {
                cout << "Speaking " << endl;
        }
};

class Dog: public Animal {
        public:
        Dog() {
                cout << "i am inside Dog constructor" << endl;
        }
        //override
        void speak() {
                cout << "barking" << endl;
        }
};

int main() {

         Animal* a = new Animal();
         a.speak();
//limked list
int aa = 5;
         Dog* a = new Dog();
         a.speak();

        //UpCasting
         Animal* a = new Dog();
         a.speak();

        // //DownCasting
         Dog* b = (Dog* )new Animal();
        b.speak();

        Dog* a = (Dog*)new Animal();
        // Dog a;



  return 0;
}