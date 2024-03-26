#include <iostream>
using namespace std;

int bilangan1, bilangan2;

int penjumlahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
}

int perkalian(int a, int b)
{
    return a * b;
}

float pembagian(int a, int b)
{
    return a / b;
}

void inputData()
{
    cout << "n\Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilang kedua: ";
    cin >> bilangan2;
}

int main()
{
    int pilihan;
    do
    {
        system("CLS");
        cout << "Menu kalkulator sederhana" << endl;
        cout << "1.Penjumlahan" << endl;
        cout << "2.pengurangan" << endl;
        cout << "3.Perkalian" << endl;
        cout << "4.Pembagian" << endl;
        cout << "5.Keluar" << endl;
        cout << "Masukkan pilhan" << " :";
        cin >> pilihan;

        switch (pilihan) 
        {
        case 1:
            inputData();
            cout << "n\Hasil penjumlahan: " << penjumlahan(bilangan1, bilangan2) << endl;
            system("pause");
            break;

        case 2:
            inputData();
            cout << "n\Hasil pengurangan: " << pengurangan(bilangan1, bilangan2) << endl;
            system("pause");
            break;

        case 3:
            inputData();
            cout << "n\Hasil perkalian: " << perkalian(bilangan1, bilangan2) << endl;
            system("pause");
            break;

        case 4:
            inputData();
            cout << "n\Hasil pembagian: " << pembagian(bilangan1, bilangan2) << endl;
            system("pause");
            break;

        case 5:
            break;

        default:
            cout << "Pilihan tidak valid" << endl;
            system("pause");
            break;
        }

    } while (pilihan != 5);         //!= adalah tidak sama dengan
    return 0;
}

