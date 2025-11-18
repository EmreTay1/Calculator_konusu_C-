#include <iostream>
using namespace std;

int main() {
    char islem;
    int a, b;

    do {
        cout << "\n----- MENU -----\n";
        cout << "+ : Toplama\n";
        cout << "- : Cikarma\n";
        cout << "* : Carpma\n";
        cout << "q : Cikis\n";
        cout << "Islem seciniz: ";
        cin >> islem;

        if (islem == 'q')
            break;

        cout << "Iki sayi giriniz: ";
        cin >> a >> b;

        switch (islem) {
            case '+':
                cout << "Sonuc: " << a + b << endl;
                break;

            case '-':
                cout << "Sonuc: " << a - b << endl;
                break;

            case '*':
                cout << "Sonuc: " << a * b << endl;
                break;

            default:
                cout << "Gecersiz islem!" << endl;
        }

    } while (islem != 'q');

    cout << "Program sonlandi.\n";
    return 0;
}

