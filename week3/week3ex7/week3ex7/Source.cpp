#include <string>
#include <iostream>
#include <vector>

#include <map>

using namespace std;

struct FullName {
	string first_name;
	string last_name;
};

class Person {
public:
	Person(const string& first_name, const string& last_name, const int& year) {
		full_name[year] = { first_name, last_name };
	}
	void ChangeFirstName(int year, const string& first_name) {
		// добавить факт изменения имени на first_name в год year
		full_name[year].first_name = first_name;
	}
	void ChangeLastName(int year, const string& last_name) {
		// добавить факт изменения фамилии на last_name в год year
		full_name[year].last_name = last_name;
	}
	string GetFullName(int year) const{
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
				s_out = "No person";
			}
			else if (first_name.size() && !last_name.size()) {
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
	string GetFullNameWithHistory(int year) const {
		// получить имя и фамилию по состоянию на конец года year
		string s_out;
		vector<string> first_name, last_name;
		//let's find first name
		for (auto it = rbegin(full_name); it != rend(full_name); it++) {
			if (it->first <= year && it->second.first_name.size()) {
				if (first_name.size())
				{
					if (it->second.first_name != first_name[first_name.size() - 1]) {
						first_name.push_back(it->second.first_name);
					}
				}
				else {
					first_name.push_back(it->second.first_name);
				}
			}
		}
		//Now find last name
		for (auto it = rbegin(full_name); it != rend(full_name); it++) {
			if (it->first <= year && it->second.last_name.size()) {
				if (last_name.size()) {
					if (it->second.last_name != last_name[last_name.size() - 1]) {
						last_name.push_back(it->second.last_name);
					}
				}
				else {
					last_name.push_back(it->second.last_name);
				}

			}
		}
		if (!first_name.size() && !last_name.size()) {
			s_out = "No person";
		}
		else if (first_name.size() && !last_name.size()) {
			if (first_name.size() == 1) {
				s_out = first_name[0];
			}
			else {
				s_out = first_name[0] + " (" + first_name[1] + ", ";
				for (int i = 2; i < first_name.size(); ++i) {
					s_out += first_name[i] + ", ";
				}
				s_out.resize(s_out.size() - 2);
				s_out += ")";
			}
			s_out += " with unknown last name";
		}
		else if (!first_name.size() && last_name.size()) {
			if (last_name.size() == 1) {
				s_out = last_name[0];
			}
			else {
				s_out = last_name[0] + " (" + last_name[1] + ", ";
				for (int i = 2; i < last_name.size(); ++i) {
					s_out += last_name[i] + ", ";
				}
				s_out.resize(s_out.size() - 2);
				s_out += ")";
			}
			s_out += " with unknown first name";
		}
		else {
			if (first_name.size() == 1) {
				s_out = first_name[0];
			}
			else {
				s_out = first_name[0] + " (" + first_name[1] + ", ";
				for (int i = 2; i < first_name.size(); ++i) {
					s_out += first_name[i] + ", ";
				}
				s_out.resize(s_out.size() - 2);
				s_out += ")";
			}
			s_out += " ";
			if (last_name.size() == 1) {
				s_out += last_name[0];
			}
			else {
				s_out += last_name[0] + " (" + last_name[1] + ", ";
				for (int i = 2; i < last_name.size(); ++i) {
					s_out += last_name[i] + ", ";
				}
				s_out.resize(s_out.size() - 2);
				s_out += ")";
			}
		}
		return s_out;
	}
private:
	// приватные поля
	map<int, FullName> full_name;
};
//
//int main() {
//	Person person("Polina", "Sergeeva", 1960);
//	for (int year : {1959, 1960}) {
//		cout << person.GetFullNameWithHistory(year) << endl;
//	}
//
//	person.ChangeFirstName(1965, "Appolinaria");
//	person.ChangeLastName(1967, "Ivanova");
//	for (int year : {1965, 1967}) {
//		cout << person.GetFullNameWithHistory(year) << endl;
//	}
//
//	return 0;
//}