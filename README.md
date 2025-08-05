# 🧠 42 C++ Module 01 – Assignment Overview

Welcome to **C++ Module 01**, the second module in the 42 C++ piscine.  
This module focuses on understanding **memory allocation**, **references**, **pointers**, and **class method organization**.

---

## 📁 Contents

| Exercise | Filename(s)         | Key Concepts                            |
|----------|---------------------|-----------------------------------------|
| `ex00`   | `megaphone.cpp`     | `int main`, basic `std::string`, `toupper()` |
| `ex01`   | `Zombie.cpp`, `Zombie.hpp`, `newZombie`, `randomChump` | stack vs heap allocation |
| `ex02`   | `ZombieHorde.cpp`   | dynamic arrays, `new[]`, `delete[]`     |
| `ex03`   | `Weapon`, `HumanA`, `HumanB` | references vs pointers, initialization |
| `ex04`   | `replace.cpp`       | file streams, `std::ifstream`, `std::ofstream`, string manipulation |
| `ex05`   | `Harl.cpp`, `Harl.hpp` | function dispatching via `if/else` or `switch`, encapsulated logic |
| `ex06`   | `HarlFilter.cpp`, `Harl.cpp` | cascading logic with `switch`, function pointers |

---

## ✅ Usage

To compile each exercise:

```bash
c++ -Wall -Wextra -Werror -std=c++98 main.cpp -o program
./program
```

Or use the provided `Makefile`:

```bash
make
./program
```

---

## 🧪 Testing Guide

### ex01 Zombie

```cpp
Zombie *z = newZombie("Foo");
z->announce();
delete z;

randomChump("Bar");
```

### ex03 HumanA / HumanB

Understand how references (HumanA) and pointers (HumanB) behave when you change the weapon after creation.

### ex05 / ex06 Harl

```bash
./harlFilter DEBUG
./harlFilter WARNING
./harlFilter nonsense
```

- In `ex05`, only one level is printed.
- In `ex06`, it prints the matching level **and all above it**.

---

## 🔍 Tips

- Stick to **C++98 standard** (no C++11 features).
- Use **member functions properly** (constructors, destructors).
- Avoid memory leaks (`valgrind`, `asan` can help).
- Stick to **code conventions**: no unnecessary includes, correct naming.

---

## 🙏 Credits

Authored by [`ghwa`](mailto:ghwa@student.42.fr)

Happy coding! 💻✨
