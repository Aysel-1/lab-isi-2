#include <iostream>
using namespace std;
int main (){
int ulduz;
cout<<"hundurluyu daxil et;";
cin>>ulduz;

    for (int i = 1; i <=ulduz; i++) {
        for (int j = 1; j <= ulduz - i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
