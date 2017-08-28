/*
В этой задаче вам нужно присваивать номера автобусным маршрутам.
А именно, для каждого маршрута, заданного набором названий остановок,
нужно либо выдать новый номер (первому маршруту — 1, второму — 2 и т. д.),
либо вернуть номер существующего маршрута, которому соответствует такой набор остановок.
Наборы остановок, полученные друг из друга перестановкой остановок,
считаются различными (см. пример).
*/

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	map<vector<string>, int> busmap;
	string s1;
	int q, n;
	cin >> q;
	
	for (q; q > 0; --q) {
		cin >> n;
		vector<string> v(n);
		for (auto& stop : v) {
			cin >> stop;
		}
		if (busmap.count(v)) {
			cout << "Already exists for " << busmap[v] << endl;
		}
		else {
			int t = busmap.size() + 1;
			busmap[v] = t;
			cout << "New bus " << busmap[v] << endl;
		}
		v.clear();
	}

	return 0;
}

