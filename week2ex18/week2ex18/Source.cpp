/*
¬ этой задаче вам нужно присваивать номера автобусным маршрутам.
ј именно, дл€ каждого маршрута, заданного множеством названий остановок, 
нужно либо выдать новый номер (первому маршруту Ч 1, второму Ч 2 и т. д.), 
либо вернуть номер существующего маршрута, которому соответствует такое множество 
остановок.
¬ отличие от задачи Ђјвтобусные остановки Ч 2ї, наборы остановок, 
которые можно получить друг из друга перестановкой элементов или 
добавлением/удалением повтор€ющихс€, следует считать одинаковыми.
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {
	int q;
	cin >> q;

	map<set<string>, int> buses;
	string s;
	for (int i = 0; i < q; ++i) {
		int n;
		cin >> n;
		set<string> stops;
		for (n; n > 0; --n) {
			cin >> s;
			stops.insert(s);
		}

		if (!buses.count(stops)) {
			const int new_number = buses.size() + 1;
			buses[stops] = new_number;
			cout << "New bus " << new_number << endl;
		}
		else {
			cout << "Already exists for " << buses[stops] << endl;
		}
	}

	return 0;
}