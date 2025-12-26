#include <iostream>
using namespace std;

int main() {
    int count = 1; คนแรก
    char grade;

    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

    do {
        cout << "Student [" << count << "]: ";
        cin >> grade;

        if (grade == '0') {
            break;  
        }

        if (grade == 'A') {
            countA++;
            count++; 
        } else if (grade == 'B') {
            countB++;
            count++;
        } else if (grade == 'C') {
            countC++;
            count++;
        } else if (grade == 'D') {
            countD++;
            count++;
        } else if (grade == 'F') {
            countF++;
            count++;
        } else {

            cout << "Wrong input. Please input again." << endl;


    } while (true);

    cout << "In total " << count - 1 << " students." << endl;
    cout << "A = " << countA << ", B = " << countB << ", C = " << countC 
         << ", D = " << countD << ", F = " << countF << endl;

    return 0;
}