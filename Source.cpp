#include <iostream>

using namespace std;
int main() {
	/*Boolean4◦
. Даны два целых числа: A, B. Проверить истинность высказывания:
«Справедливы неравенства A > 2 и B ≤ 3»*/
/*
bool c;
int a, b;
cin >> a >> b;
c = a > 2 and b <= 3;
cout << boolalpha << c << endl;*/

/*Boolean5◦
. Даны два целых числа: A, B. Проверить истинность высказывания:
«Справедливы неравенства A ≥ 0 или B < −2»*/
	/*
	bool c;
	int a, b;
	cin >> a >> b;
	c = a >= 0 || b < -2;
	cout << boolalpha << c << endl;*/

	/*Boolean6◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».*/
	/*
	int a, b, c;
	bool d;
	cin >> a >> b >> c;
	d = a < b && b < c;
	cout << boolalpha << d << endl;*/

	/*
	int a, c, b;
	bool d;
	cin >> a >> b >> c;
	d = a < b&& b >c || c < b&& b < a;
	cout << boolalpha << d;
	*/
	/*Boolean8◦
. Даны два целых числа: A, B. Проверить истинность высказывания:
«Каждое из чисел A и B нечетное».
*/
	/*
	int a, b;
	bool d;
	cin >> a >> b;
	d = a % 2 == 0 and b % 2 == 0;
	cout << boolalpha << d << endl;*/

	/*Boolean9◦
. Даны два целых числа: A, B. Проверить истинность высказывания:
«Хотя бы одно из чисел A и B нечетное».
*/
	/*
	int a, b;
	bool d;
	cin >> a >> b;
	d = a % 2 != 0 or b % 2 != 0;
	cout << boolalpha << d << endl;*/

	/*Boolean10◦
. Даны два целых числа: A, B. Проверить истинность высказывания: «Ровно одно из чисел A и B нечетное».*/
	/*
	int a, b;
	bool d;
	cin>> a >> b;
	d = (a % 2 == 0 and b % 2 != 0) or (a % 2 != 0 && b % 2 == 0);
	cout << boolalpha << d << endl;*/

	/*Boolean11◦
. Даны два целых числа: A, B. Проверить истинность высказывания: «Числа A и B имеют одинаковую четность».*/
	/*
	int a, b;
	bool d;
	cin >> a >> b;
	d = (a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0);
	cout << boolalpha << d << endl;
	return 0;*/

	/*Boolean13◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Хотя бы одно из чисел A, B, C положительное».*/
	/*
	int a, b, c;
	bool d;
	cin >> a >> b >> c;
	d = a > 0 || b > 0 || c > 0;
	cout << boolalpha << d << endl;*/

	/*Boolean14◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Ровно одно из чисел A, B, C положительное».

	int a, b, c;
	bool d;
	cin >> a >> b >> c;
	d = (a > 0 % %b < 0 % %c < 0) || (a < 0 && b > 0 && c < 0) || (c > 0 && a < 0 && b < 0);
	cout << boolalpha << d << endl;*/

	/*Boolean15◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Ровно два из чисел A, B, C являются положительными».
*/
	/*
	int a, b, c;
	bool d;
	cin >> a >> b >> c;
	d = a * b * c < 0;
	cout << boolalpha << d << endl;*/

/*Boolean12◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Каждое из чисел A, B, C положительное».
*/
int a, b, c;
bool d;
cin >> a >> b >> c;
d = a * b > 0 && b * c > 0;
cout << boolalpha << d << endl;
}