# Huffman Coding Implementation in C++

This project is a C++ implementation of the Huffman coding algorithm for lossless data compression and decompression.

---

## 📌 Description
Huffman coding is a popular algorithm for **lossless data compression**.  
It works by assigning variable-length codes to input characters based on their frequencies:
- More frequent characters → shorter codes  
- Less frequent characters → longer codes  

This project provides a command-line tool to **compress** and **decompress** text files using this algorithm.

---

## ✨ Features
- **Compression**: Compresses a given input file (`input.txt`) and saves the result to an output file (`output.txt`).
- **Decompression**: Decompresses a previously compressed file (`output.txt`) and saves the original content to a new file (`output2.txt`).
- **Performance Metrics**: Displays the time taken for the operation, the original file size, the compressed file size, and the compression ratio.

---

## ⚙️ Compilation and Usage

### ✅ Prerequisites
- A C++ compiler that supports **C++14** (e.g., `g++`)
- **CMake** (version 3.10 or higher)

### 🔨 Compilation Steps
1. Navigate to the project directory containing the source code and `CMakeLists.txt`.
2. Create a build directory:  
   `mkdir build && cd build`
3. Run CMake to configure the project:  
   `cmake ..`
4. Compile the project:  
   `make`

This will create an executable named **`HuffmanCoding`** inside the `build` directory.

---

## 🚀 Running the Program

The program works in two modes: **compress** and **decompress**.  
It takes one argument entered interactively after execution.

### 🔹 To Compress a File
1. Place your input file named **`input.txt`** in the parent directory of the `build` folder.  
2. Run the executable:  
   `./HuffmanCoding`  
3. When prompted, type:  
   `compress`  
4. The program will read `../input.txt`, compress it, and save the result to **`../output.txt`**.

---

### 🔹 To Decompress a File
1. Ensure the compressed file **`output.txt`** exists in the parent directory.  
2. Run the executable:  
   `./HuffmanCoding`  
3. When prompted, type:  
   `decompress`  
4. The program will read `../output.txt`, decompress it, and save the original content to **`../output2.txt`**.

---

## 📊 Example Workflow
1. Create a text file:  
   `echo "this is a huffman coding example" > input.txt`
2. Build the project (`mkdir build && cd build && cmake .. && make`).
3. Run compression:  
   `./HuffmanCoding` → type `compress` → generates `output.txt`.
4. Run decompression:  
   `./HuffmanCoding` → type `decompress` → generates `output2.txt`.

---

## 📜 License
This project is released under the **MIT License**.
