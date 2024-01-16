# C-Programming
introduction to c programming language 

To run a C file, you need to follow these general steps:

1. **Install a C Compiler:**
   Make sure you have a C compiler installed on your system. Commonly used C compilers include GCC (GNU Compiler Collection) for Unix-like systems and MinGW for Windows.

   - For Linux:
     ```bash
     sudo apt-get install gcc
     ```

   - For macOS:
     ```bash
     xcode-select --install
     ```

   - For Windows (using MinGW):
     Download and install MinGW from https://mingw-w64.org/doku.php.

2. **Write a C Program:**
   Create a C source code file using a text editor. Save the file with a `.c` extension.

   Example (hello.c):
   ```c
   #include <stdio.h>

   int main() {
       printf("Hello, World!\n");
       return 0;
   }
   ```

3. **Compile the C Program:**
   Open a terminal or command prompt and navigate to the directory where your C file is located. Use the following command to compile the C program.

   ```bash
   gcc -o output_filename input_filename.c
   ```

   Replace `output_filename` with the desired name for the executable and `input_filename.c` with the name of your C file.

   Example:
   ```bash
   gcc -o hello hello.c
   ```

4. **Run the Executable:**
   After compilation, you'll get an executable file. Run it using the following command:

   ```bash
   ./output_filename
   ```

   Example:
   ```bash
   ./hello
   ```

This will execute your C program, and you should see the output on the screen. Make sure to adjust the commands based on your operating system and compiler.
