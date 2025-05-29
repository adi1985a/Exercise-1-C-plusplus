# 📏🎨 Rectangle DuoColor Class Demo: C++ OOP
_A C++ console program demonstrating a (Rectangle) class with individual side colors, multiple constructors, property management.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Platform: Cross-platform](https://img.shields.io/badge/Platform-Cross--platform-lightgrey.svg)]()

## 📋 Table of Contents
1.  [Overview](#-overview)
2.  [Key Features of the `Prostokat` Class](#-key-features-of-the-prostokat-class)
3.  [Screenshots (Conceptual Output)](#-screenshots-conceptual-output)
4.  [System Requirements](#-system-requirements)
5.  [Installation and Setup](#️-installation-and-setup)
6.  [Usage Guide](#️-usage-guide)
7.  [File Structure](#-file-structure)
8.  [Technical Notes](#-technical-notes)
9.  [Contributing](#-contributing)
10. [License](#-license)
11. [Contact](#-contact)

## 📄 Overview

The **Rectangle DuoColor Class Demo**, developed by Adrian Lesniak, is a C++ console application designed to illustrate object-oriented programming (OOP) principles through the implementation of a (Rectangle) class. A distinctive feature of this version is that the class manages **separate colors for its two primary sides** (`kolor_a`, `kolor_b`), in addition to side lengths (`a`, `b`) and calculated `pole` (area). The program showcases default and overloaded constructors for flexible object initialization and a `show()` method to display the rectangle's details. Consistent with its internal naming, all console output is presented in english. The `main` function demonstrates creating an array of `Rectangle` objects and displaying their properties.

The program produces direct console output based on the `show()` method.

<p align="center">
  <img src="screenshots\1.jpg" width="600"/>
</p>


The program produces direct console output based on the `show()` method.

## ✨ Key Features of the `Prostokat` Class

*   📦 **Attributes (Private)**:
    *   `a`, `b`: Integer or floating-point values representing the lengths of the rectangle's sides.
    *   `kolor_a`: A `std::string` storing the color of side 'a'.
    *   `kolor_b`: A `std::string` storing the color of side 'b'.
    *   `pole`: A `float` or `double` storing the calculated surface area of the rectangle.
*   🛠️ **Constructors**:
    *   **Empty/Default Constructor**: Initializes a rectangle with default values (e.g., sides 0, both colors (black), area 0).
    *   **Overloaded Constructor (Sides `a` and `b` only)**: Initializes a rectangle with specified side lengths. Side colors might default to a specific color (e.g., "black") or be uninitialized/handled differently. Calculates area.
    *   **Overloaded Constructor (Sides `a`, `b`, and both `kolor_a`, `kolor_b`)**: Initializes a rectangle with specified side lengths and individual colors for each side. Calculates area.
*   📊 **Methods**:
    *   `show()`: A public method that prints the rectangle's side lengths (`a` and `b`), the color of each side (`kolor_a` and `kolor_b`), and its calculated `field` (area) to the console.
    *   (Implicit) A private method or logic within constructors to calculate `pole = a * b`.
*   👨‍💻 **Demonstration in `main()`**:
    *   Creates a fixed-size array (e.g., of four `Rectangle` objects).
    *   Initializes these objects using the various constructors to demonstrate their usage and the handling of individual side colors.
    *   Iterates through the array, calling the `show()` method for each `Rectangle` object.
* 


**Example Console Output (assuming Polish output):**
```text
--- Prostokąt #1 ---
Bok a: 0
Bok b: 0
Kolor boku a: czarny
Kolor boku b: czarny
Pole: 0.00

--- Prostokąt #2 ---
Bok a: 3
Bok b: 4
Kolor boku a: czarny
Kolor boku b: czarny
Pole: 12.00

--- Prostokąt #3 ---
Bok a: 5
Bok b: 6
Kolor boku a: czerwony
Kolor boku b: zielony
Pole: 30.00

--- Prostokąt #4 ---
Bok a: 2
Bok b: 8
Kolor boku a: niebieski
Kolor boku b: żółty
Pole: 16.00
```


## ⚙️ System Requirements

*   **Operating System**: Any OS supporting a standard C++ compiler (e.g., Windows, Linux, macOS). For correct display of Polish characters in output (if used, e.g., "żółty"), the terminal must support the encoding used by the source file and potentially the system locale.
*   **C++ Compiler**: A C++ compiler (e.g., g++, clang++, MSVC). C++11 or later is good practice.
*   **Standard C++ Libraries**: `<iostream>` (for console I/O), `<string>` (for color attributes), `<iomanip>` (for `std::fixed`, `std::setprecision` if used for area formatting).

## 🛠️ Installation and Setup

1.  **Clone the Repository (if applicable)**:
    ```bash
    git clone <repository-url>
    cd <repository-directory>
    ```
    *(Replace `<repository-url>` and `<repository-directory>` if this code is part of a larger repository).*

2.  **Save Main Code**:
    Ensure your C++ source code (containing the `Prostokat` class definition and implementation, and the `main` function) is saved as `rectangle.cpp` (or your chosen file name, e.g., `prostokat_duocolor.cpp`) in your project directory.

3.  **Compile the Program**:
    Open a terminal (Command Prompt, PowerShell, Bash, etc.) in the project directory.
    **Example using g++:**
    ```bash
    g++ rectangle.cpp -o rectangle -std=c++11
    ```
    *(Add `-static-libgcc -static-libstdc++` on Windows with MinGW if desired for standalone executables. If using Polish diacritics extensively in string literals, ensure your source file is saved with UTF-8 encoding and your compiler handles it correctly, possibly requiring specific compiler flags like `-finput-charset=UTF-8 -fexec-charset=UTF-8` with g++ on some systems).*

4.  **Run the Program**:
    *   On Windows: `.\rectangle.exe` or `rectangle.exe`
    *   On Linux/macOS: `./rectangle` (ensure execute permissions: `chmod +x rectangle`)
    *   *Ensure your terminal is configured to display the character encoding used by your program (e.g., UTF-8 for Polish characters).*

## 💡 Usage Guide

1.  Compile `rectangle.cpp` as detailed in the "Installation and Setup" section.
2.  Run the compiled executable (`rectangle` or `rectangle.exe`).
3.  **Output**:
    *   The program will directly print the details for each of the four `Prostokat` objects created and initialized in the `main` function. This includes their side lengths (`Bok a`, `Bok b`), the color of each side (`Kolor boku a`, `Kolor boku b`), and the calculated area (`Pole`), all in Polish.
4.  **Actions**:
    *   Observe the console output to verify the properties of each rectangle, including the individual side colors.
    *   The program runs a fixed sequence and then terminates. There are no interactive prompts for the user.
    *   To experiment, modify the parameters (side lengths, colors) used when initializing the `Prostokat` objects in the `main` function's array and recompile.

## 🗂️ File Structure

*   `rectangle.cpp` (or `prostokat_duocolor.cpp`): The main (and likely only) C++ source file containing the `Prostokat` class definition and implementation, and the `main()` demonstration function.
*   `README.md`: This documentation file.

*(No external data files, log files, or user-provided header files beyond standard libraries are indicated for this specific program as described.)*

## 📝 Technical Notes

*   **Polish Language Focus**: A defining characteristic is the consistent use of Polish for internal variable names (e.g., `Prostokat`, `kolor_a`, `pole`) and for all console output text.
*   **Individual Side Colors**: The class design allows for assigning different colors to side `a` and side `b`, which is a specific feature of this version.
*   **Locale for Polish Characters**: If Polish diacritics (e.g., "żółty") are used in string literals for colors or output messages, calling `setlocale(LC_ALL, "");` or `setlocale(LC_ALL, "pl_PL.UTF-8");` (or similar) at the beginning of `main()` would be necessary for their correct display on many systems. The terminal must also support the encoding. The current description does not explicitly mention `setlocale` but implies Polish output.
*   **Encapsulation & Constructors**: Demonstrates good OOP principles with private attributes and multiple constructors for object initialization.
*   **Area Calculation**: `pole` (area) is calculated as `a * b`.
*   **Fixed Demonstration**: The `main` function runs a predefined set of operations without runtime user input.

## 🤝 Contributing

Contributions to this **Prostokąt DuoColor Class Demo** are welcome, especially if they aim to:

*   Add more methods (e.g., `obliczObwod()` for perimeter, setters for properties).
*   Implement more robust handling or input for Polish characters/locales.
*   Introduce user input for creating `Prostokat` objects dynamically.
*   Add visual ASCII art representation in the `show()` method.

1.  Fork the repository.
2.  Create a new branch for your feature (`git checkout -b feature/ProstokatEnhancements`).
3.  Make your changes and commit them (`git commit -m 'Feature: Add perimeter method'`).
4.  Push to the branch (`git push origin feature/ProstokatEnhancements`).
5.  Open a Pull Request.

Please ensure your code is well-commented and adheres to good C++ OOP practices.

## 📃 License

This project is licensed under the **MIT License**.
(If you have a `LICENSE` file in your repository, refer to it: `See the LICENSE file for details.`)

## 📧 Contact

Created by **Adrian Lesniak**.
For questions, feedback, or issues related to this OOP and localization demonstration, please open an issue on the GitHub repository or contact the repository owner.

---
🇵🇱 _Demonstracja klasy `Prostokat` w C++ z indywidualnymi kolorami boków i polskim interfejsem!_
_(Demonstrating a `Prostokat` class in C++ with individual side colors and a Polish interface!)_
