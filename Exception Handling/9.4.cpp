#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;
bool isNumeric(const string& str) {
    istringstream iss(str);
    double temp;
    char c;
    if (!(iss >> temp)) return false;
    if (iss >> c) return false; 
    return true;
}
void processFile(const string& filePath) {
    ifstream file(filePath);
    if (!file.is_open()) {
        throw runtime_error("File not found or could not be opened.");
    }
    string line;
    int lineNumber = 1;
    while (getline(file, line)) {
        cout << "Processing line " << lineNumber << ": \"" << line << "\"\n";
        if (!isNumeric(line)) {
            throw runtime_error("Corrupted data found at line " + to_string(lineNumber) + ": " + line);
        }
        double value = stod(line); 
        cout << "Value = " << value << " (Squared = " << value * value << ")\n";
        lineNumber++;
    }
    file.close();
}

int main() {
    string path;
    bool success = false;
    while (!success) {
        cout << "Enter the path to the data file: ";
        getline(cin, path);
        try {
            processFile(path);
            success = true; 
        } catch (const runtime_error& e) {
            cout << "Exception: " << e.what() << endl;
            cout << "Please try again.\n";
        }
    }
    cout << "File processed successfully. Program ending.\n";
    return 0;
}

