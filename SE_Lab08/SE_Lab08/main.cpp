#include <iostream>
using namespace std;


int defaultparm(int x1, int x2, int x3, int x4, int x5, int x6 = 6, int x7 = 7)
{
    return (x1 + x2 + x3 + x4 + x5 + x6 + x7) / 7;
}

int main()
{
    setlocale(LC_CTYPE, "Rus");
    int result1 = defaultparm(1, 2, 3, 4, 5);
    int result2 = defaultparm(1, 2, 3, 4, 5, 9, 12);
    cout << "5 параметров: " << result1 << endl;
    cout << "7 параметров: " << result2 << endl;
}