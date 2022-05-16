#include <iostream>
using namespace std;

template <typename T> void fillArr(T arr[], int length, int min, int max); 
template <typename T> void showArr(T arr[], int length);

int main() {
	setlocale(LC_ALL, "Russian");


	//Динамические переменные
	/*/int* pn = new int;
	*pn = 10;
	cout << *pn << endl;
	cout << pn << "\n\n";

	delete pn;
	pn = nullptr;

	if (pn != nullptr) {
		*pn = 15;
		cout << *pn << endl;
		cout << pn << endl;
		delete pn;
	}
	else
		cout << "Указатель не инициализирован.\n";*/
	
	//Динамические массивы
	int size;
	cout << "Введите размер массива: ";
	cin >> size;
	int* dArr = new int[5];
	fillArr(dArr, size, 10, 31);
	showArr(dArr, size);
	delete[] dArr;

	return 0;
}

template <typename T> void fillArr(T arr[], int length, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (max - min) + min;
}

template <typename T> void showArr(T arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}				