#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    char op;

    cout << "Lutfen yapmak istediginiz islemi seciniz: " << endl;
    cout << "1. Toplama\n2. Cikarma\n3. Carpma\n4. Bolme\n5. Karekok\n6. Ust alma\n7. Faktoriyel\n8. Sinus\n9. Cosinus\n10. Tanjant\n";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Lutfen iki sayi giriniz: " << endl;
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Sonuc: " << result << endl;
            break;

        case 2:
            cout << "Lutfen iki sayi giriniz: " << endl;
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Sonuc: " << result << endl;
            break;

        case 3:
            cout << "Lutfen iki sayi giriniz: " << endl;
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Sonuc: " << result << endl;
            break;

        case 4:
            cout << "Lutfen iki sayi giriniz: " << endl;
            cin >> num1 >> num2;
            result = num1 / num2;
            cout << "Sonuc: " << result << endl;
            break;

        case 5:
            cout << "Lutfen bir sayi giriniz: " << endl;
            cin >> num1;
            result = sqrt(num1);
            cout << "Sonuc: " << result << endl;
            break;

        case 6:
            cout << "Lutfen bir sayi ve ussu giriniz: " << endl;
            cin >> num1 >> num2;
            result = pow(num1, num2);
            cout << "Sonuc: " << result << endl;
            break;

        case 7:
            int n;
            cout << "Lutfen bir sayi giriniz: " << endl;
            cin >> n;
            result = 1;
            for (int i = 1; i <= n; i++) {
                result *= i;
            }
            cout << "Sonuc: " << result << endl;
            break;

        case 8:
            cout << "Lutfen bir aci giriniz (derece cinsinden): " << endl;
            cin >> num1;
            result = sin(num1*M_PI/180);
            cout << "Sonuc: " << result << endl;
            break;

        case 9:
            cout << "Lutfen bir aci giriniz (derece cinsinden): " << endl;
            cin >> num1;
            result = cos(num1*M_PI/180);
            cout << "Sonuc: " << result << endl;
            break;

        case 10:
            cout << "Lutfen bir aci giriniz (derece cinsinden): " << endl;
cin >> num1;
result = tan(num1*M_PI/180);
cout << "Sonuc: " << result << endl;
break;   
default:
        cout << "Gecersiz secim, program sonlandiriliyor." << endl;
}

return 0;
}

