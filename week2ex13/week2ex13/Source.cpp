/*
–еализуйте систему хранени€ автобусных маршрутов. ¬ам нужно обрабатывать
следующие запросы:

NEW_BUS bus stop_count stop1 stop2 ... Ч добавить маршрут автобуса с
названием bus и stop_count остановками с названи€ми stop1, stop2, ...
BUSES_FOR_STOP stop Ч вывести названи€ всех маршрутов автобуса, проход€щих 
через остановку stop.
STOPS_FOR_BUS bus Ч вывести названи€ всех остановок маршрута bus со списком 
автобусов, на которые можно пересесть на каждой из остановок.
ALL_BUSES Ч вывести список всех маршрутов с остановками.
*/
#include <iostream>
#include <map>
#include <string>
#include <vector>
//#include <fstream>
using namespace std;

//ifstream cin;
//ofstream cout;


void AllBuses(const map<string, vector<string>>& busmap) {
	if (!busmap.size()) {
		cout << "No buses" << endl;
	}
	else {
		for (const auto& bus : busmap) {
			cout << "Bus " << bus.first << ": ";
			for (const auto& busstop : bus.second) {
				cout << busstop << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}
}

void StopForBus(map<string, vector<string>>& busmap,  const string& bus) {
	if (!busmap.count(bus)) {
		cout << "No bus" << endl;
	}
	else {
		for (const auto& busstop : busmap[bus]) {
			cout << "Stop " << busstop << ": ";
			int n = 0;
			for (const auto& i : busmap) {
				if (i.first != bus) {				
					for (const auto& j : i.second) {
						if (j == busstop) {
							cout << i.first << ' ';
							n++;
						}
					}
				}
			}
			if (!n) {
				cout << "no interchange";
			}
			cout << endl;
		}
	}
}

void BusForStop(const map<string, vector<string>>& busmap, const string& busstop) {
	int f = 0;
	for (const auto& bus : busmap) {
		for (const auto& bstop : bus.second) {
			if (busstop == bstop) {
				cout << bus.first << ' ';
				f++;
				break;
			}
		}
	}
	if (!f) {
		cout << "No stop";
	}
	cout << endl;
}

int main() {
	int q, i, k;
	string command, s1, s2;
	map<string, vector<string>> busmap;
	
	/*cin.open("test1.txt");
	cout.open("output.txt");*/
	
	cin >> q;
	for (q; q > 0; --q) {
		cin >> command;
		if (command == "NEW_BUS") {
			cin >> s1;
			cin >> k;
			for (k; k > 0; --k) {
				cin >> s2;
				busmap[s1].push_back(s2);
			}
		}
		else if (command == "BUSES_FOR_STOP") {
			cin >> s1;
			BusForStop(busmap, s1);
		}
		else if (command == "STOPS_FOR_BUS") {
			cin >> s1;
			StopForBus(busmap, s1);
		}
		else if (command == "ALL_BUSES") {
			AllBuses(busmap);
		}
	}

	/*cin.close();
	cout.close();*/

	return 0;
}
