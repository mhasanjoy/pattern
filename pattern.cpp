#include <iostream>
using namespace std;

void printPattern(int N, char T) {
    // Create the alphabet array
    char alphabet[26];
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'a' + i;
    }

    // Print the pattern
    if (T == 'a') {
        // Print the first row
        for (int i = 0; i < N; i++) {
            cout << alphabet[i];
        }
        cout << endl;

        // Print the middle rows
        for (int i = 1; i < N - 1; i++) {
            cout << alphabet[i];
            for (int j = 1; j < N - 1; j++) {
                cout << ' ';
            }
            cout << alphabet[N - 1 - i];
            cout << endl;
        }

        // Print the last row
        for (int i = N - 1; i >= 0; i--) {
            cout << alphabet[i];
        }
        
        cout << endl;
    } else if (T == '1') {
        // Print the first row
        for (int i = 1; i <= N; i++) {
            cout << i;
        }
        cout << endl;

        // Print the middle rows
        for (int i = 2; i < N; i++) {
            cout << i;
            for (int j = 2; j < N; j++) {
                cout << ' ';
            }
            cout << N + 1 - i;
            cout << endl;
        }

        // Print the last row
        for (int i = N; i >= 1; i--) {
            cout << i;
        }
        
        cout << endl;
    }
}

int main() {
    int N;
    char T;

    cin >> N;
    cin >> T;

    printPattern(N, T);

    return 0;
}
