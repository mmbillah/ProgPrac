//polymorphism means "many forms".
//In this example, the function animalSound() has multiple forms.

#include<iostream>
#include<string>

using namespace std;

// Base class
class Animal {
  public:
    void animalSound() { //the function "animalSound()" in defined the first time
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() { //the fucntion is given a second definition
    cout << "The pig says: wee wee \n" ;
   }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() { //the function is given a third definition
    cout << "The dog says: bow wow \n" ;
  }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound(); //calling the animalSound() func from the base class
  myPig.animalSound(); //the function is being overridden by a derived class
  myDog.animalSound(); //the function is being overridden again by another derived class
  return 0;
}
