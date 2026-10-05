#include<iostream>
#include<fstream>
using namespace std;
int main(){

    int start, end;
    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    ofstream oddFile("odd.txt");
    ofstream evenFile("even.txt");

    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            cout << "\nTable of " << i << " (Odd):\n";
            oddFile << "\nTable of " << i << " (Odd):\n";

            for (int j = 1; j <= 10; j++) {

                cout << i << " x " << j << " = "
                     << i * j << endl;
                oddFile << i << " x " << j << " = "
                        << i * j << endl;
            }
        }

        else {

            cout << "\nTable of " << i << " (Even):\n";
            evenFile << "\nTable of " << i << " (Even):\n";

            for (int j = 1; j <= 10; j++) {

                cout << i << " x " << j << " = "
                     << i * j << endl;

                evenFile << i << " x " << j << " = "
                         << i * j << endl;
            }
        }
    }

    oddFile.close();
    evenFile.close();

    cout << "\nTables successfully stored in files.";

    return 0;
}