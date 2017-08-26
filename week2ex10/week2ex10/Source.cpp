/*
* У каждого из нас есть ежемесячные дела, каждое из которых
* нужно выполнять в конкретный день каждого месяца:
* оплата счетов за электричество, абонентская плата за связь и пр.
* Вам нужно реализовать работу со списком таких дел, а именно,
* обработку следующих операций:
*
* ADD i s
* Добавить дело с названием s в день i.
* 
* NEXT
* Закончить текущий месяц и начать новый. Если новый месяц имеет больше дней,
* чем текущий, добавленные дни изначально не будут содержать дел.
* Если же в новом месяце меньше дней, дела со всех удаляемых дней
* необходимо будет переместить на последний день нового месяца.
* Обратите внимание, что количество команд этого типа может превышать 11.
*
* DUMP i
* Вывести все дела в день i.
*
* Изначально текущим месяцем считается январь.
* Количества дней в месяцах соответствуют Григорианскому
* календарю с той лишь разницей, что в феврале всегда 28 дней.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int q, i, k, j, num=1;
	string command, s;
	vector<vector<string>> list(31);
	cin >> q;
	for (i = 1; i <= q; ++i) {
		cin >> command;
		if (command == "ADD") {
			cin >> k;
			cin >> s;
			list[k-1].push_back(s);
		}
		else if (command == "NEXT") {
			num++;
			if (num == 13) {
				num = 1;
			}
			switch (num){
				case 2:
					if (list[30].size()) {
						list[27].insert(end(list[27]), begin(list[30]), end(list[30]));
						list[30].clear();
					}
					if (list[29].size()) {
						list[27].insert(end(list[27]), begin(list[29]), end(list[29]));
						list[29].clear();
					}
					if (list[28].size()) {
						list[27].insert(end(list[27]), begin(list[28]), end(list[28]));
						list[28].clear();
					}
					list.resize(28);
					break;
				case 3:
				case 5:
				case 7:
				case 10:
				case 12:
					list.resize(31);
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if (list[30].size()) {
						list[29].insert(end(list[29]), begin(list[30]), end(list[30]));
						list[30].clear();
					}
					list.resize(30);
					break;
				case 1:
				case 8:
					//Nothing to do
					break;
				default:
					break;
			}
		}
		else if (command == "DUMP") {
			cin >> k;
			cout << list[k-1].size() << ' ';
			for (j = 0; j < list[k-1].size(); j++) {
				cout << list[k-1][j] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}