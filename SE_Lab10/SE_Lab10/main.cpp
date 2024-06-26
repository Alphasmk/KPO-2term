#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int target1 = 3;
	int num_items1 = count(v.begin(), v.end(), target1);
	cout << "Число: " << target1 << " Количество: " << num_items1 << "\n";

	int num_items3 = count_if(v.begin(), v.end(), [](int i) {return i % 3 == 0; });
	cout << endl << "Лямбда, захват переменных" << endl;
	for (auto i : v)
		[i]() {if (i % 3 == 0) cout << i << " "; }();

	cout << endl << "Лямбда с параметрами" << endl;
	for (auto i : v) [](auto i) {if (i % 3 == 0) cout << i << " "; }(i);

	cout << endl << "Лямбда без параметров" << endl;
	for (auto i : v) [i] {if (i % 3 == 0) cout << i << " "; }();

	int x;
	bool is = false;
	cout << endl << "Введите число на проверку: ";
	cin >> x;

	is = [x]() mutable {if (x > 0) return true; else return false; }();
	if (is)
	{
		cout << "Число положительное" << endl;
	}
	else
	{
		cout << "Число отрицательное" << endl;
	}
}