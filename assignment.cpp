#include <iostream>
using namespace std;

int main() {
    float mark1, mark2, mark3, mark4, mark5;
    cout << "Enter your marks: " << endl;
    
    cout << "Mark1: ";
    cin >> mark1;
    
    cout << "Mark2: ";
    cin >> mark2;
    
    cout << "Mark3: ";
    cin >> mark3;
    
    cout << "Mark4: ";
    cin >> mark4;
    
    cout << "Mark5: ";
    cin >> mark5;

    float total = mark1 + mark2 + mark3 + mark4 + mark5;
    float percentage = total / 5;
    
    cout << "You got " << percentage << "% percentage" << endl;

    if (percentage >= 90) {
        cout << "Grade A" << endl;
    } else if (percentage >= 80) {
        cout << "Grade B" << endl;
    } else if (percentage >= 70) {
        cout << "Grade C" << endl;
    } else if (percentage >= 60) {
        cout << "Grade D" << endl;
    } else if (percentage >= 50) {
        cout << "Grade E" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}
