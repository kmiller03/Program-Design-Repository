#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1;
    char x, y;
    cout << "Enter a word: "; 
    cin >> s1;
    cout << "Enter old character: ";
    cin >> x;
    cout << "Enter new character: ";
    cin >> y;

    string::size_type i = 0;
    for (i = 0; i<s1.length(); i++) {
        if (s1[i] == x)
            s1[i] = y;
    }
    cout << s1 << endl;
    return 0;
}