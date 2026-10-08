#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string name;
    string sound;

public:
    void setName(string n)
    {
        name = n;
    }

    void setSound(string s)
    {
        sound = s;
    }

    string getName()
    {
        return name;
    }

    string getSound()
    {
        return sound;
    }

    // pure virtual function: Animal is an abstract class
    virtual void makeSound() = 0;

    virtual ~Animal() {}
};

class Dog : public Animal
{
public:
    void makeSound() override
    {
        cout << getName() << " says: " << getSound() << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() override
    {
        cout << getName() << " says: " << getSound() << endl;
    }
};

int main()
{
    Dog dog;
    Cat cat;

    dog.setName("Dog");
    dog.setSound("Woof Woof");

    cat.setName("Cat");
    cat.setSound("Meow Meow");

    dog.makeSound();
    cat.makeSound();

    return 0;
}