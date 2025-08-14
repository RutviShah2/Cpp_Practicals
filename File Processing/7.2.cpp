#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int isAlphabetOrDigit(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        return 1;
    else
        return 0;
}

int main() {
    const int MAX_LINES = 10000;
    const int MAX_LENGTH = 1000;

    char filename[100];
    cout << "Enter filename: ";
    cin >> filename;

    ifstream file(filename);

    if (!file) {
        cout << "Error: Could not open the file." << endl;
        return 1;
    }

    char** lines = new char*[MAX_LINES];
    int lineCount = 0;
    int charCount = 0;
    int wordCount = 0;

    char buffer[MAX_LENGTH];

    while (file.getline(buffer, MAX_LENGTH)) {
        int len = strlen(buffer);

        lines[lineCount] = new char[len + 1];
        strcpy(lines[lineCount], buffer);
        lineCount++;

        charCount += len;

        int i = 0;
        while (buffer[i]) {
            while (buffer[i] && !isAlphabetOrDigit(buffer[i])) {
                i++;
            }
            if (buffer[i]) {
                wordCount++;
                while (buffer[i] && isAlphabetOrDigit(buffer[i])) {
                    i++;
                }
            }
        }
    }

    file.close();

    cout << "Total Characters (excluding newlines): " << charCount << endl;
    cout << "Total Words: " << wordCount << endl;
    cout << "Total Lines: " << lineCount << endl;

    for (int i = 0; i < lineCount; i++) {
        delete[] lines[i];
    }
    delete[] lines;

    return 0;
}
