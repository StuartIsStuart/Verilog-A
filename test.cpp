#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Create an input file stream object and open the file
    ifstream file("C:\\Users\\Stuart\\Documents\\VA\\myDevice1.va");
    string line;

    // Check if the file was opened successfully
    if (file.is_open()) {
        // Read the file line by line until the end
        while (getline(file, line)) {
            // Print each line to the standard output
            cout << line << endl;
        }
        // Close the file stream
        file.close();
    } else {
        // Print an error message if the file could not be opened
        cerr << "Unable to open file!" << endl;
        return 1;
    }
    return 0;
}