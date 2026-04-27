# 📂 Assignment-9: File Management in C++

This repository contains solutions to **Assignment-9: File Management**, implemented in **C++**. The assignment focuses on file handling concepts such as text files, binary files, file pointers, and basic input/output operations.

---

## 📘 Assignment Overview

This assignment covers the following file handling operations:

1. Writing numbers to a file
2. Reading from a file and counting alphabets
3. Binary file operations (writing/reading objects)
4. Copying contents between files
5. String input/output with file storage
6. File pointer operations (`seekg()`, `seekp()`, `tellg()`, `tellp()`)

---

## 🧠 Concepts Covered

* File Streams: `ifstream`, `ofstream`, `fstream`
* Text File Handling
* Binary File Handling
* File Pointer Functions:

  * `seekg()` – Move get pointer
  * `seekp()` – Move put pointer
  * `tellg()` – Get current read position
  * `tellp()` – Get current write position
* Character and String I/O
* Class Objects in Files

---

## 📁 Programs Included

### 🔹 1. Write Numbers to File

Writes numbers from **1 to 200** into `NUM.TXT`.

---

### 🔹 2. Count Alphabets in File

Reads `NOTES.TXT` and counts total alphabetic characters using `isalpha()`.

---

### 🔹 3. Binary File Operations

* Writes an object of a class (`Student`) to a binary file
* Reads and displays the stored object

---

### 🔹 4. Copy File Contents

Copies content from `source.txt` to `destination.txt`.

---

### 🔹 5. String I/O Operations

* Takes string input from user
* Calculates string length
* Stores string in file
* Reads and displays stored content

---

### 🔹 6. File Pointer Operations

#### (a) Read 10th Character

Creates file with A–Z and reads the 10th character using `seekg()`.

#### (b) Overwrite Character

Overwrites the 5th character using `seekp()`.

#### (c) Find File Size

Uses `tellg()` to determine file size.

#### (d) Read Last Character

Reads last character using `seekg()`.

#### (e) Pointer Movement in File

* Moves pointer to 10th byte
* Displays position using `tellg()`
* Reads remaining content

#### (f) Random Access & Modification

* Writes `"HelloWorld"`
* Displays pointer position after each write
* Replaces `"World"` with `"C++"`

---

## ▶️ How to Run

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/file-management-cpp.git
   cd file-management-cpp
   ```

2. Compile any program:

   ```bash
   g++ filename.cpp -o output
   ```

3. Run:

   ```bash
   ./output
   ```

---

## 📌 Requirements

* C++ Compiler (GCC / MinGW / Turbo C++)
* Basic understanding of C++ file handling

---

## 📷 Sample Output

Example:

```
Numbers written successfully.
Total alphabets: 120
File copied successfully.
```

---

## 🎯 Learning Outcome

After completing this assignment, you will be able to:

* Work with text and binary files
* Use file pointers effectively
* Perform file-based data storage and retrieval
* Implement real-world file handling programs

---

## 📎 Author

* Parminder Singh

---

## ⭐ Contribution

Feel free to fork this repository and improve the solutions!

---

## 📜 License

This project is for educational purposes only.
