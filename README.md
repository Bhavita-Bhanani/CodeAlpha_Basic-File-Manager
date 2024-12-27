# Basic File Manager 📁

## Description
The Basic File Manager is a lightweight C++ program that provides simple file management functionality. It allows users to:
- List all files in the current directory.
- Create new files.
- Delete existing files.

The program uses a `dir.txt` file to maintain a record of available files, ensuring an easy and efficient way to keep track of file operations.

---

## Features ✨✨
- **List Files:** Displays all files currently in the directory as recorded in `dir.txt`.
- **Create Files:** Allows users to create a new file by specifying a filename.
- **Delete Files:** Removes a file from the directory and updates the file record.
- **Exit Command:** Ends the program gracefully.

---

## 🌟Commands🌟
1. `ls`: Lists all files in the directory.
2. `create`: Prompts the user to enter a filename and creates the file.
3. `delete`: Prompts the user to enter a filename and deletes the specified file.
4. `exit`: Exits the program.

---

## How to Compile and Run
1. Save the code to a file, e.g., `Basic_File_Manager.cpp`.
2. Compile the code using a C++ compiler:
   ```bash
   g++ Basic_File_Manager.cpp -o Basic_File_Manager
3. Run the compiled program:
   ./Basic_File_Manager


# Example Usage
Enter command (ls, create, delete, exit): ls
Files in current directory:
example.txt
testfile.txt

Enter command (ls, create, delete, exit): create
Enter filename: newfile.txt
File 'newfile.txt' created.

Enter command (ls, create, delete, exit): delete
Enter filename: newfile.txt
File 'newfile.txt' deleted.

Enter command (ls, create, delete, exit): exit


# File Tracking
 The program uses a dir.txt file to keep track of all file operations.
 Each time a file is created or deleted, dir.txt is updated automatically.


# Limitations
 The program assumes the existence of a writable dir.txt file in the same directory.
 Does not handle advanced file management features like subdirectories or file editing.


# Author 🎗️
Bhavita Bhanani
For queries or suggestions, feel free to reach out at:
Email: bhavitabhanani22@gmail.com


# License
This project is open-source and available under the MIT License.
