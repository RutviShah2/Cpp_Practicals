#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
ostream& currency(ostream& os) {
    return os << "₹ ";  
}
int main() {
    ifstream file("student_data.txt"); 

    if (!file) {  
        cerr << "Error: File could not be opened!" << endl;
        return 1;
    }
    string name;
    int marks;
    cout << "Student Report\n";
    while (file >> name >> marks) {
        cout << left << setw(20) << name << setw(10) << marks << endl;
    }
    double fee = 15000.75;  
    cout << "\nTuition Fees\n";
    cout << setw(15) << currency << fixed << setprecision(2) << fee << endl;
    file.close();  
    return 0;
}

