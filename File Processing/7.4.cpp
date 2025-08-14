#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
void printStudentRecord(const string& name, int marks, char grade) {
    cout << left << name; 
    cout << "    ";
    cout << marks;
    cout << "    ";
    cout << grade << endl;
}
int main() {
    ifstream file("student_data.txt"); 
    if (!file) { 
        cerr << "Error: File could not be opened!" << endl;
        return 1;
    }
    string line;
    while (getline(file, line)) {
        stringstream ss(line);  
        string name;
        int marks;
        char grade;
        ss >> name >> marks >> grade;
        printStudentRecord(name, marks, grade);
    }
    file.close();
    return 0;
}

