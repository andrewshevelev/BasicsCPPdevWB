/*
ќпределите структуру Ђ—тудентї со следующими пол€ми:
им€, фамили€, день, мес€ц и год рождени€. —оздайте вектор
из таких структур, заполните его из входных данных и затем 
по запросам выведите нужные пол€.

‘ормат ввода

ѕерва€ строка содержит одно целое число N от 0 до 10000 Ч число студентов.

ƒалее идут N строк, кажда€ из которых содержит две строки длиной от 1 до 15 
символов Ч им€ и фамилию очередного студента, и три целых числа 
от 0 до 1000000000 Ч день, мес€ц и год рождени€.

—ледующа€ строка содержит одно целое число M от 0 до 10000 Ч число запросов.

—ледующие M строк содержат строку длиной от 1 до 15 символов Ч
запрос, и целое число от 0 до 1000000000 Ч номер студента (нумераци€ начинаетс€ с 1).

‘ормат вывода

ƒл€ запроса вида name K, где K от 1 до N, выведите через
пробел им€ и фамилию K-го студента.

ƒл€ запроса вида date K, где K от 1 до N, выведите через 
точку день, мес€ц и год рождени€ K-го студента.

ƒл€ остальных запросов выведите bad request.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
	string first_name;
	string last_name;
	long int day;
	long int month;
	long int year;
};

int main() {
	long int n;
	cin >> n;
	vector<Student> students(n);

	for (int i = 0; i < n; i++) {
		cin >> students[i].first_name >> students[i].last_name;
		cin >> students[i].day >> students[i].month >> students[i].year;
	}

	long int m, k;
	cin >> m;
	string command;
	for (int i = 0; i < m; i++) {
		cin >> command >> k;
		if (command == "name") {			
			if (k <= n && k > 0) {
				cout << students[k - 1].first_name << ' ' 
					<< students[k - 1].last_name << endl;
			}
			else {
				cout << "bad request" << endl;
			}
		}
		else if (command == "date") {			
			if (k <= n && k > 0) {
				cout << students[k - 1].day << "."
					<< students[k - 1].month << "."
					<< students[k - 1].year << endl;
			}
			else {
				cout << "bad request" << endl;
			}
		}
		else {
			cout << "bad request" << endl;
		}
	}
	return 0;
}