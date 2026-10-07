# Person Class Program (C++)

A simple C++ program that demonstrates **encapsulation** using a `Person` class with private attributes, getter and setter methods, and a parameterized constructor. The program creates N `Person` objects from user input and displays their details.

## Problem Statement

Define a class `Person` with private attributes `name`, `age`, and `address`. Encapsulate these attributes using getter and setter methods. Implement a parameterized constructor for the `Person` class. Create N number of objects using this constructor and display the details.

## Concepts Used

- Classes and objects
- Encapsulation (private data members with public getters and setters)
- Parameterized constructor
- `vector` to store N objects
- `getline()` for input with spaces
- `for` loop

## Class Structure

```
Person
├── Private
│   ├── name     (string)
│   ├── age      (int)
│   └── address  (string)
└── Public
    ├── Person(name, age, address)   -> parameterized constructor
    ├── setName(), setAge(), setAddress()
    ├── getName(), getAge(), getAddress()
    └── display()                    -> prints the person's details
```

## How It Works

1. The user enters the number of persons, `n`.
2. A loop runs `n` times. Each time it reads a name, age, and address from the user.
3. A `Person` object is created with the parameterized constructor and added to a `vector<Person>`.
4. A second loop calls `display()` on every object, which prints the details through the getter methods.

## How to Compile and Run

```bash
g++ main.cpp -o person
./person
```

On Windows:

```bash
g++ main.cpp -o person.exe
person.exe
```

## Sample Input and Output

```
Enter number of persons: 2

Enter details of person 1
Name: Miraj
Age: 20
Address: Jamnagar

Enter details of person 2
Name: Rahul
Age: 21
Address: Rajkot

--- Person Details ---

Name: Miraj
Age: 20
Address: Jamnagar

Name: Rahul
Age: 21
Address: Rajkot

```

## Files

| File | Description |
|------|-------------|
| `main.cpp` | Source code of the program |
| `README.md` | Project documentation |
| `output.png` | Project output |

## Possible Improvements

- Validate the age input (for example, reject negative values)
- Add a function to search for a person by name
- Add an option to update a person's details using the setters