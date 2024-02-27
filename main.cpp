#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	
	int distance = 15;
	int result = 15;

	int all_days;
	cout << "Сколько дней должна проползти улитка: ";
	cin >> all_days;

	for (int i = 2;i <= all_days;i++) {
		
		distance += 2;
		result += distance;

	}
		
	cout << "Улитка проползла " << result;

	return 0;
} 


/* В первый день улитка проползла 15 см. Каждый следующий день она проползала на 2 см дальше. Определить какое общее расстояние проползет улитка через N дней.
Примечание. Например, пользователь ввел число 4. Следовательно, улитка ползла 4 дня, поэтому суммарный путь составит 72 см.*/