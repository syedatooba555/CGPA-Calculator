#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int semesters;
    cout << "Enter number of semesters: ";
    cin >> semesters;

    double totalPoints = 0, totalCredits = 0;

    for (int s = 1; s <= semesters; s++) {
        int subjects;
        cout << "\n--- Semester " << s << " ---\n";
        cout << "Enter number of subjects: ";
        cin >> subjects;

        double semPoints = 0, semCredits = 0;

        for (int i = 1; i <= subjects; i++) {
            double grade, credit;
            cout << "\nSubject " << i << " grade point (0.0 - 4.0): ";
            cin >> grade;
            cout << "Credit hours: ";
            cin >> credit;

            semPoints += grade * credit;
            semCredits += credit;
        }

        double gpa = semPoints / semCredits;
        cout << fixed << setprecision(2);
        cout << "GPA of Semester " << s << " = " << gpa << endl;

        totalPoints += semPoints;
        totalCredits += semCredits;
    }

    double cgpa = totalPoints / totalCredits;
    cout << "\n=============================\n";
    cout << "Final CGPA = " << cgpa << endl;
    cout << "=============================\n";

    return 0;
}