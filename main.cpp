#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	
	int distance = 15;
	int result = 15;

	int all_days;
	cout << "������� ���� ������ ��������� ������: ";
	cin >> all_days;

	for (int i = 2;i <= all_days;i++) {
		
		distance += 2;
		result += distance;

	}
		
	cout << "������ ��������� " << result;

	return 0;
} 


/* � ������ ���� ������ ��������� 15 ��. ������ ��������� ���� ��� ���������� �� 2 �� ������. ���������� ����� ����� ���������� ��������� ������ ����� N ����.
����������. ��������, ������������ ���� ����� 4. �������������, ������ ������ 4 ���, ������� ��������� ���� �������� 72 ��.*/