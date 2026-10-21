#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << "STUDENT DATASET" << endl;
    cout << "" << endl;

    cout << left
         << setw(15) << "Student ID"
         << setw(20) << "Department"
         << setw(10) << "Level"
         << setw(15) << "Attendance"
         << setw(15) << "Average Score" << endl;

    cout << "" << endl;

    cout << left << setw(15) << "ST001" << setw(20) << "Computer Science" << setw(10) << 200 << setw(15) << "85%" << setw(15) << 78 << endl;
    cout << left << setw(15) << "ST002" << setw(20) << "Cyber Security" << setw(10) << 200 << setw(15) << "90%" << setw(15) << 82 << endl;
    cout << left << setw(15) << "ST003" << setw(20) << "Computer Science" << setw(10) << 300 << setw(15) << "75%" << setw(15) << 69 << endl;
    cout << left << setw(15) << "ST004" << setw(20) << "Software Engineering" << setw(10) << 300 << setw(15) << "95%" << setw(15) << 88 << endl;
    cout << left << setw(15) << "ST005" << setw(20) << "Cyber Security" << setw(10) << 400 << setw(15) << "80%" << setw(15) << 74 << endl;
    cout << left << setw(15) << "ST006" << setw(20) << "Computer Science" << setw(10) << 400 << setw(15) << "88%" << setw(15) << 91 << endl;
    cout << left << setw(15) << "ST007" << setw(20) << "Software Engineering"  << setw(10) << 200 << setw(15) << "70%" << setw(15) << 65 << endl;
    cout << left << setw(15) << "ST008" << setw(20) << "Cyber Security" << setw(10) << 300 << setw(15) << "92%" << setw(15) << 85 << endl;
    cout << left << setw(15) << "ST009" << setw(20) << "Computer Science" << setw(10) << 200 << setw(15) << "83%" << setw(15) << 76 << endl;
    cout << left << setw(15) << "ST010" << setw(20) << "Software Engineering" << setw(10) << 400 << setw(15) << "89%" << setw(15) << 80 << endl;

    cout << "" << endl;

    return 0;
}