//дан массив размера n. сформировать новый массив, в котором элементы исходного массива располагаются в обратном порядке.
//dinamichesky
#include <iostream>
#include <clocale>
using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");
    
    int*a,*b,  n;
    int i;

    cout << "Введите размер массива";
    cin >> n;
    a = new int[n];
    b = new int[n];
    
    for (i = 0; i < n; ++i) {
        cout << "a[" << i << "]";
        cin >> b[i];
    }
    for (i = n - 1; i >= 0; i--) {
        cout << "a[" << i << "]=" << b[i] << endl;
    }

    delete[] b;
    delete[] a;
}
