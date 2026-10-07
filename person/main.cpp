#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string address;

public:
    Person(string n, int a, string ad)
    {
        name = n;
        age = a;
        address = ad;
    }

    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setAddress(string ad)
    {
        address = ad;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    string getAddress()
    {
        return address;
    }

    void display()
    {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Address: " << getAddress() << endl;
        cout << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of persons: ";
    cin >> n;
    cin.ignore(); // clear the newline left by cin >> n

    vector<Person> persons;

    for (int i = 0; i < n; i++)
    {
        string name, address;
        int age;

        cout << "\nEnter details of person " << i + 1 << endl;

        cout << "Name: ";
        getline(cin, name);

        cout << "Age: ";
        cin >> age;
        cin.ignore();

        cout << "Address: ";
        getline(cin, address);

        // create the object using the parameterized constructor
        persons.push_back(Person(name, age, address));
    }

    cout << "\n--- Person Details ---\n\n";
    for (int i = 0; i < n; i++)
    {
        persons[i].display();
    }

    return 0;
}