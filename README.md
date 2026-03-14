# Morse Code Converter (C++)

## Overview

The **Morse Code Converter** is a C++ console application that translates **plain text into Morse code and Morse code back into plain text**.

The program demonstrates fundamental C++ programming concepts such as string processing, loops, conditional logic, and mapping characters to Morse code patterns.

---

## Features

* Convert **Text → Morse Code**
* Convert **Morse Code → Text**
* Supports:

  * Alphabetic characters (A–Z)
  * Numeric characters (0–9)
* Uses `/` to represent spaces between words
* Simple **console-based interface**

---

## Example

### Text → Morse

Input

```
HELLO
```

Output

```
.... . .-.. .-.. ---
```

---

### Morse → Text

Input

```
.... . .-.. .-.. ---
```

Output

```
HELLO
```

---

## Project Structure

```
docs/
└── build-cpp.bat

src/
│
├── main.cpp
│
└── MorseCodeConverter.cpp
└── MorseCodeConverter.h
```

### File Descriptions

**main.cpp**

* Entry point of the program
* Handles user input and program flow

**MorseCodeConverter.h**

* Header file defining the Morse code converter class and function declarations

**MorseCodeConverter.cpp**

* Implements the logic for converting:

  * Text → Morse
  * Morse → Text
* Stores the Morse code mappings

---

## Requirements

* A C++ compiler such as:

  * GCC
  * Clang
  * MSVC
  * MinGW

---

## How to Compile

Using **g++**:

```bash
g++ src/main.cpp src/MorseCodeConverter.cpp -o morse
```

---

## How to Run

```
docs/build-cpp.bat
```

---

## Concepts Demonstrated

* C++ classes and functions
* String manipulation
* Loops and conditional statements
* Mapping characters to Morse code
* Basic program structure

---

## Author

Created as part of a Computer Science programming assignment.
