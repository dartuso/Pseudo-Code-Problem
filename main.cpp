#include <iostream>
using namespace std;

/**
 Created by Artem and Daniel
*/

void problem() {
    int count1 = 0;
    int count2 = 0;
    int num = 0;
    while (true) {
        cin >> num;
        if (num % 2 == 0) {
            count1++;
        } else if (num / 7 == 0) {
            count2++;
        } else {
            cout << "7 is here" << endl;
        }
        if (cin.fail()){
            break;
        }
        cout << count1 << endl;
        cout << count2 << endl;
    }
}

int main() {
    problem();
    return (0);
}
