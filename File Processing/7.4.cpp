#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void printStudentRecord(const string& name, int marks, char grade) {
    // Calculate the padding required for formatting
    cout << left << name; // Align name to the left
    cout << "    "; // Space between name and marks (adjust as needed)

    // Print marks (we assume marks will be within a reasonable range, so no need for huge padding)
    cout << marks;

    cout << "    "; // Space between marks and grade (adjust as needed)

    // Print grade
    cout << grade << endl;
}

int main() {
    ifstream file("student_data.txt");  // Open the file

    if (!file) {  // Error handling if the file is not accessible
        cerr << "Error: File could not be opened!" << endl;
        return 1;  // Exit the program with an error code
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);  // Use stringstream to parse the line
        string name;
        int marks;
        char grade;

        // Read name, marks, and grade from the file line
        ss >> name >> marks >> grade;

        // Call function to print each student's data in formatted manner
        printStudentRecord(name, marks, grade);
    }

    file.close();  // Close the file after reading

    return 0;
}
