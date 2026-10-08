# Animal Hierarchy: Abstract Class and Polymorphism in C++

A simple C++ program that demonstrates **abstract classes**, **inheritance**, **pure virtual functions**, and **function overriding** using an `Animal` base class with `Dog` and `Cat` derived classes.

## Features

- `Animal` is an **abstract base class** (it has a pure virtual function, so it cannot be instantiated).
- Data members `name` and `sound` are **private** and accessed through getters and setters (encapsulation).
- `Dog` and `Cat` inherit from `Animal` and override `makeSound()`.
- A **virtual destructor** in the base class ensures safe cleanup through base-class pointers.

## Class Overview

### `Animal` (abstract)

| Member | Type | Description |
|---|---|---|
| `name` | `string` (private) | Name of the animal |
| `sound` | `string` (private) | Sound the animal makes |
| `setName(string)` | method | Sets the name |
| `setSound(string)` | method | Sets the sound |
| `getName()` | method | Returns the name |
| `getSound()` | method | Returns the sound |
| `makeSound()` | pure virtual | Must be implemented by derived classes |
| `~Animal()` | virtual destructor | Allows proper destruction of derived objects |

### `Dog` : `Animal`
Overrides `makeSound()` to print the dog's name and sound.

### `Cat` : `Animal`
Overrides `makeSound()` to print the cat's name and sound.

## OOP Concepts Demonstrated

- **Abstraction**: `Animal` defines an interface (`makeSound()`) without implementing it.
- **Encapsulation**: private data members with public getters and setters.
- **Inheritance**: `Dog` and `Cat` extend `Animal`.
- **Polymorphism**: each derived class provides its own `makeSound()` implementation via `override`.

## How to Compile and Run

Requires a C++ compiler with C++11 support or later (for `override`), such as `g++`.

```bash
g++ -std=c++11 main.cpp -o animal
./animal
```

On Windows (Command Prompt):

```bash
g++ -std=c++11 main.cpp -o animal.exe
animal.exe
```

> Replace `main.cpp` with the name of your source file.

## Sample Output

```
Dog says: Woof Woof
Cat says: Meow Meow
```

## Project Structure

```
.
├── main.cpp
└── README.md
```

## Possible Improvements

- Add more animals (e.g., `Cow`, `Duck`) by deriving from `Animal`.
- Store animals in an array of `Animal*` pointers (or `vector<unique_ptr<Animal>>`) and call `makeSound()` in a loop to show runtime polymorphism.
- Add constructors to set `name` and `sound` at creation time.