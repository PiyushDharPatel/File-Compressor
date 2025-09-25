// main.cpp : Main file for Huffman compression and decompression
#include <iostream>
#include <fstream>
#include <ctime>
#include "FrequencyCounter.h"
#include "Huffman.h"

using namespace std;

// Function to get the size of a file
ifstream::pos_type filesize(const char *filename);

int main()
{
    FrequencyCounter frequencyCounter;
    Huffman huffman;
    string workingMode;

    // Input working mode: either "compress" or "decompress"
    cin >> workingMode;

    if (workingMode == "compress")
    {
        clock_t tStart = clock();

        // Read frequencies from input file
        frequencyCounter.readFile("../input.txt");

        // Build Huffman Tree and compress the file
        huffman.huffer(frequencyCounter.getFrequencyMap());
        huffman.compressTofile("../input.txt", "../output.txt");

        // Output compression statistics
        cout << "Time taken: " << (1.0 * (clock() - tStart) / CLOCKS_PER_SEC) << " sec" << endl;
        cout << "Input File Size: " << filesize("../input.txt") << " bytes." << endl;
        cout << "Compressed File Size: " << filesize("../output.txt") << " bytes." << endl;
        cout << "Compression Ratio: " << (1.0 * filesize("../output.txt") / filesize("../input.txt")) << endl;
    }
    else if (workingMode == "decompress")
    {
        clock_t tStart = clock();

        // Decompress the file using Huffman Tree
        huffman.deHuffer("../output.txt", "../output2.txt");

        // Output decompression statistics
        cout << "Time taken: " << (1.0 * (clock() - tStart) / CLOCKS_PER_SEC) << " sec" << endl;
        cout << "Input File (Compressed) Size: " << filesize("../output.txt") << " bytes." << endl;
        cout << "Decompressed File Size: " << filesize("../output2.txt") << " bytes." << endl;
    }

    return 0;
}

// Function to get the size of a file
ifstream::pos_type filesize(const char *filename)
{
    ifstream in(filename, ifstream::ate | ifstream::binary);
    return in.tellg();
}
