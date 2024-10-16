#include <iostream>
using namespace std;
int main(){
    int n[10000];
    int a = 0;
    int x;
    while (cin >> n[a])     
    {
        x = n[a];
        for (int i = 0; i <= a; i++){
            if (x <= n[i]){
                for (int j = a + 1; j > i; j--){
                    n[j] = n[j - 1]; 
                }
                n[i] = x;    
                break;
            }
        }
        if (a % 2 == 0)            
            cout << n[a / 2] << endl;
        else
            cout << (n[a / 2] + n[a / 2 + 1]) / 2 << endl;
        a++;
    }
    return 0;
}