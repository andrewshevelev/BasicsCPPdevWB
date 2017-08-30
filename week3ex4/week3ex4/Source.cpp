//#include <iostream>
//#include <string>
#include <map>

//using namespace std;

struct FullName {
	string first_name;
	string last_name;
};

class Person {
public:
	void ChangeFirstName(int year, const string& first_name) {
		// добавить факт изменения имени на first_name в год year
		full_name[year].first_name = first_name;
	}
	void ChangeLastName(int year, const string& last_name) {
		// добавить факт изменения фамилии на last_name в год year
		full_name[year].last_name = last_name;
	}
	string GetFullName(int year) {
		// получить имя и фамилию по состоянию на конец года year
		string s_out, first_name, last_name;
		if (full_name.size()) {
			//let's find first name
			for (auto it = rbegin(full_name); it != rend(full_name); it++) {
				if (it->first <= year && it->second.first_name.size()) {
					first_name = it->second.first_name;
					break;
				}
			}
			//Now find last name
			for (auto it = rbegin(full_name); it != rend(full_name); it++) {
				if (it->first <= year && it->second.last_name.size()) {
					last_name = it->second.last_name;
					break;
				}
			}	
			if (!first_name.size() && !last_name.size()) {
				s_out = "Incognito";
			}
			else if(first_name.size() && !last_name.size()) {
				s_out = first_name + " with unknown last name";
			}
			else if (!first_name.size() && last_name.size()) {
				s_out = last_name + " with unknown first name";
			}
			else {
				s_out = first_name + ' ' + last_name;
			}
		}
		else {
			s_out = "Incognito";
		}
		return s_out;
	}
private:
	// приватные поля
	map<int, FullName> full_name;
};

//int main() {
//	Person person;
//
//	person.ChangeFirstName(1965, "Polina");
//	person.ChangeLastName(1967, "Sergeeva");
//	for (int year : {1900, 1965, 1990}) {
//		cout << person.GetFullName(year) << endl;
//	}
//
//	person.ChangeFirstName(1970, "Appolinaria");
//	for (int year : {1969, 1970}) {
//		cout << person.GetFullName(year) << endl;
//	}
//
//	person.ChangeLastName(1968, "Volkova");
//	for (int year : {1969, 1970}) {
//		cout << person.GetFullName(year) << endl;
//	}
//
//	return 0;
//}