# Graduate-Assistantship-Class-Assignments

Fraction Class Project
📌 Overview

This project is divided into three tasks, each extending the functionality of a C++ Fraction class.
It demonstrates fundamental object-oriented programming concepts such as class design, separate compilation, non-member functions, operator overloading, and documentation using Javadoc/Doxygen style comments.

📝 Tasks
Task 1

Implement a basic Fraction class (fraction.h, fraction.cpp).

Includes:

Constructor with default arguments

Setter and getter functions

Display function

Test program: project1_task1.cpp

Task 2

Extend the Fraction class with non-member functions (newfraction1.h, newfraction1.cpp):

add(f1, f2)

subtract(f1, f2)

multiply(f1, f2)

divide(f1, f2)

No simplification of fractions is required.

Interactive test program: project1_task2.cpp

Task 3

Redo Task 2 using operator overloading (newfraction2.h, newfraction2.cpp):

+ and - as member functions

* and / as non-member functions

<< (output) as non-member function

>> (input) as a friend function

Test program: project1_task3.cpp

📂 File Structure
Project1-Fraction/
│
├── Task1/
│   ├── fraction.h
│   ├── fraction.cpp
│   └── project1_task1.cpp
│
├── Task2/
│   ├── newfraction1.h
│   ├── newfraction1.cpp
│   └── project1_task2.cpp
│
├── Task3/
│   ├── newfraction2.h
│   ├── newfraction2.cpp
│   └── project1_task3.cpp
│
└── README.md

⚙️ Compilation & Execution
Task 1
g++ fraction.cpp project1_task1.cpp -o task1
./task1

Task 2
g++ newfraction1.cpp project1_task2.cpp -o task2
./task2

Task 3
g++ newfraction2.cpp project1_task3.cpp -o task3
./task3

📖 Example Run (Task 2 & Task 3)
Enter the first fraction: numerator denominator
3 5
Enter the second fraction: numerator denominator
2 3

The two fractions entered are
f1 = 3/5
f2 = 2/3

The arithmetic operations on these two fractions:
f1 + f2 = 19/15
f1 - f2 = -1/15
f1 * f2 = 6/15
f1 / f2 = 9/10

👨‍💻 Author

Name: Dinesh Seveti

StarID: <am9663gn>

Course: Graduate Assistantship – CSCI Assignments