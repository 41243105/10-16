#include<iostream>
#include<string>
using namespace std;
int main() {
    int a, i, j,e=0;
    int count[100] = { 0 };
    char z;
    cin >> a;
    cin.ignore();
    while (a--) {
        string s;
        getline(cin, s);
        for (i = 0; i < s.length(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') ||( s[i] >= 'A' && s[i] <= 'Z')) {
                e++;
                count[toupper(s[i])]++;
            }
        }
    }
    for (j = e; j > 0; j--) {
        for (char i = 'A'; i <= 'Z'; i++) {
            if (count[i] == j) {
                cout << i << " " << count[i]<<endl;
            }
        }
    }
    return 0;
}

