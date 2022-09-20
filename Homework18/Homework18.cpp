#include <iostream>

//Задача 18.1
inline int sr(int num1, int num2, int num3) {
	return (num1 + num2 + num3) / 3;
}

//Задача 18.2
int max(int num1, int num2, int num3) {
	std::cout << "INT\n";
	return num1 > (num2 > num3 ? num2: num3) ?
			num1 : (num2 > num3 ? num2 : num3);
}
short max(short num1, short num2, short num3) {
	std::cout << "SHORT\n";
	return num1 > (num2 > num3 ? num2 : num3) ?
			num1 : (num2 > num3 ? num2 : num3);
}
double max(double num1, double num2, double num3) {
	std::cout << "DOUBLE\n";
	return num1 > (num2 > num3 ? num2 : num3) ?
			num1 : (num2 > num3 ? num2 : num3);
}

//Задача 18.3
//template <typename T>
//T min(T num, const int N) {
//	int imin = 0;
//	for (int i = 0; i < N; i++)
//		if (num[i] < num[imin])
//		imin = i;
//	return imin;
//}


template <typename T>
T min_arr(T arr[], const int length){
	int imin = 0;
	for(int i = 0; i < length; i++) {
		if (arr[i] > arr[imin])
			imin = arr[i];
	}
	return imin;
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, l;
	//Задача 18.1
	std::cout << "Введите три числа: \n";
	std::cin >> n >> m >> l;
	std::cout <<"Среднее арифметическое введённых чисел: " << sr(n, m, l) << "\n\n";

	//Задача 18.2
	std::cout << max(354, 5963, 723) << "\n";
	std::cout << max((short)6, (short)2, (short)9) << "\n";
	std::cout << max(10.1, 10.5, 10.7) << "\n";
	std::cout << "\n";

	//Задача 18.3
	const int size = 5;
	int arr[] = { 7, 5, 9, 2, 8 };
	std::cout << "Минимальный элемент массива c типом данных INT: " << min_arr(arr, 5) << "\n";

	double arr1[] = {25.2, 18.8, 25.3, 96.1, 15.7};
	std::cout << "Минимальный элемент массива с типом данных DOUBLE: " << min_arr(arr1, 5) << "\n";

	float arr2[] = {11.2f, 7.8f, 9.8f, 12.7f, 3.6f};
	std::cout << "Минимальный элемент массива с типом данных FLOAT: " << min_arr(arr2, 5) << "\n";

	short arr3[] = { (short)7, (short)3, (short)9, (short)6, (short)2 };
	std::cout << "Минимальный элемент массива с типом данных SHORT: " << min_arr(arr3, 5) << "\n";

	
	return 0;
}