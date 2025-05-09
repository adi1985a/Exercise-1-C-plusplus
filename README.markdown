# Rectangle Class Program

## Overview
This C++ program defines a `Prostokat` (Rectangle) class to manage rectangle properties: sides `a` and `b`, their colors (`kolor_a`, `kolor_b`), and area (`pole`). It includes multiple constructors and a `show` method to display details. The program creates an array of four rectangles with varying attributes and prints their properties.

## Features
- **Prostokat Class**:
  - Private attributes: `a`, `b` (side lengths), `kolor_a`, `kolor_b` (side colors), `pole` (area).
  - Constructors: Empty, with sides `a` and `b`, and with sides plus colors.
  - `show` method: Displays side lengths, colors, and area.
- **Main Program**:
  - Creates an array of four `Prostokat` objects.
  - Initializes objects with different constructors (default, sides only, sides with colors).
  - Iterates through the array to display each rectangle’s details using `show`.

## Requirements
- C++ compiler (e.g., g++, clang++)
- Standard C++ libraries: `<iostream>`, `<string>`
- Operating system: Any supporting a C++ compiler (e.g., Windows, Linux, macOS)

## Setup
1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd <repository-directory>
   ```
2. Save the provided code as `rectangle.cpp`.
3. Compile the program:
   ```bash
   g++ rectangle.cpp -o rectangle
   ```
4. Run the program:
   ```bash
   ./rectangle
   ```

## Usage
1. Compile and run the program using the steps above.
2. **Output**:
   - Displays details for four rectangles:
     - Rectangle #1: Default (0x0, black colors, area 0).
     - Rectangle #2: 3x4, black colors, area 12.
     - Rectangle #3: 5x6, red/green colors, area 30.
     - Rectangle #4: 2x8, blue/yellow colors, area 16.
3. **Actions**:
   - Observe the console output for rectangle properties.
   - Modify constructor parameters in `main` to test different rectangle configurations.

## File Structure
- `rectangle.cpp`: Main C++ source file with `Prostokat` class and program logic.
- `README.md`: This file, providing project documentation.

## Notes
- The program uses Polish variable names (e.g., `Prostokat`, `kolor_a`) but is fully functional in any C++ environment.
- Output is in Polish (e.g., "Bok a", "Pole") for consistency with the code.
- The `pole` (area) is calculated as `a * b` in constructors; no setter methods are provided.
- Extend the class by adding methods (e.g., setters, perimeter calculation) for more functionality.
- No external dependencies; uses only standard C++ libraries.
- Test with different side lengths and colors by editing the array initialization in `main`.

## Contributing
Contributions are welcome! To contribute:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make changes and commit (`git commit -m "Add feature"`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact
For questions or feedback, open an issue on GitHub or contact the repository owner.