---------------------------------------
Usage
---------------------------------------
1. Upon running the program, the user is prompted to enter a string.
2. The input is dynamically stored using the String data type implemented.
3. The entered string is then displayed on the console.
4. Additionally, the program outputs the length of the entered string.

---------------------------------------
Implementation Details
---------------------------------------
- String Data Type (struct String):
  - `char* val`: Pointer to dynamically allocated memory for storing the string.
  - `char ch`: Variable used to read characters from input.
  - `size_t length`: Current length of the stored string.
  - `size_t msize`: Current allocated memory size for `val`.

- `input` Function:
  - Initializes a String object (`x`) with null values and a small initial memory allocation.
  - Dynamically reallocates memory as needed while reading characters from input until a newline character (`'\n'`) is encountered.
  - Returns the String object with the entered string and its length.

- `display` Function:
  - Prints the stored string (`val`) followed by a newline (`'\n'`) character.

- `main` Function:
  - Demonstrates the usage of the `input` and `display` functions by taking user input, storing it using the String data type, and then displaying the entered string along with its length.

---------------------------------------
Notes
---------------------------------------
- This program uses dynamic memory allocation to handle strings of varying lengths.
- Ensure proper input handling to avoid buffer overflow or memory leaks.

