/*
–еализуйте справочник столиц стран.

Ќа вход программе поступают следующие запросы:
CHANGE_CAPITAL country new_capital Ч изменение столицы
страны country на new_capital, либо добавление такой 
страны с такой столицей, если раньше еЄ не было.
RENAME old_country_name new_country_name Ч переименование 
страны из old_country_name в new_country_name.
ABOUT country Ч вывод столицы страны country.
DUMP Ч вывод столиц всех стран.
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int q, i, k;
	string command, s1, s2, tmp;
	map<string, string> list;

	cin >> q;
	for (i = 0; i < q; ++i) {
		cin >> command;
		if (command == "CHANGE_CAPITAL") {
			cin >> s1 >> s2;
			if (!list.count(s1)) {
				list[s1] = s2;
				cout << "Introduce new country " << s1 << " with capital " << s2;
			}
			else if (list[s1] == s2) {
				cout << "Country " << s1 << " hasn't changed its capital";
			}
			else {
				cout << "Country " << s1 << " has changed its capital from "
					<< list[s1] << " to " << s2;
				list[s1] = s2;;
			}
			cout << endl;
		}
		else if (command == "RENAME") {
			cin >> s1 >> s2;
			if (!list.count(s1) || list.count(s2) || list[s1] == s2 ) {
				cout << "Incorrect rename, skip";
			}
			else {
				cout << "Country " << s1 << " with capital "
					<< list[s1] << " has been renamed to " << s2;
				tmp = list[s1];
				list[s2] = tmp;
				list.erase(s1);
			}			
			cout << endl;
		}
		else if (command == "ABOUT") {
			cin >> s1;
			if (!list.count(s1)) {
				cout << "Country " << s1 << " doesn't exist";
			}
			else {
				cout << "Country " << s1 << " has capital " << list[s1];
			}			
			cout << endl;
		}
		else if (command == "DUMP") {
			if (!list.size()) {
				cout << "There are no countries in the world" << endl;
			}
			else {
				for (const auto& c : list) {
					cout << c.first << '/' << c.second << ' ';
				}
				cout << endl;
			}
		}
	}
	return 0;
}