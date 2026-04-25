# Employees DB (C++)

A simple console-based Employee Management System written in C++ using Object-Oriented Programming.

---

## 📌 Features

- Add new employees
- Fire employees
- Promote employees (salary increase)
- View all employees
- View active employees
- View former employees

---

## 🧠 Project Structure

- `Employee` → represents a single employee (id, name, salary, status)
- `Database` → manages collection of employees and operations
- `UserInterface` → console menu for user interaction
- `main.cpp` → entry point of the program

---

## 🛠 Technologies Used

- C++
- Object-Oriented Programming (OOP)
- STL (vector)
- Console I/O

---

## ▶️ How to Run

Compile all `.cpp` files together and run the executable:

```bash
g++ main.cpp Database.cpp Employee.cpp UserInterface.cpp -o app
./app
