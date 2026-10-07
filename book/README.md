# Book Class Program (C++)

A simple C++ program that demonstrates how to create a class, make objects from it using an **array**, and access their attributes.

## Problem Statement

Create a class representing a `Book` with attributes like `title`, `author`, and `publishedYear`. Demonstrate the instantiation of objects using an array and accessing their attributes.

## Concepts Used

- Classes and objects
- Public data members
- Member functions
- Array of objects
- Accessing members with the dot (`.`) operator
- `for` loop

## Class Structure

```
Book
├── title          (string)
├── author         (string)
├── publishedYear  (int)
└── display()      -> prints the book details
```

## How It Works

1. The `Book` class is defined with three public attributes and a `display()` function.
2. An array of 3 `Book` objects is created: `Book books[3];`
3. Each object's attributes are set using the dot operator, for example `books[0].title = "C++ Programming";`
4. A `for` loop goes through the array and calls `display()` on each book.

## How to Compile and Run

```bash
g++ main.cpp -o book
./book
```

On Windows:

```bash
g++ main.cpp -o book.exe
book.exe
```

## Sample Output

```
Title: C++ Programming
Author: Bjarne Stroustrup
Published Year: 1985

Title: The C++ Language
Author: Bjarne Stroustrup
Published Year: 1998

Title: java
Author: brenden eich
Published Year: 1995

```

## Files

| File | Description |
|------|-------------|
| `main.cpp` | Source code of the program |
| `README.md` | Project documentation |

## Possible Improvements

- Take book details from the user with `cin` instead of hard-coding them
- Make the attributes private and add getters and setters
- Use a constructor to initialize each book