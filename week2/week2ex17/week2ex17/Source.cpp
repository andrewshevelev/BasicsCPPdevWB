/*
ƒва слова называютс€ синонимами друг друга, если они имеют похожие значени€.
–еализуйте следующие операции над словарЄм синонимов:
ADD word1 word2 Ч добавить в словарь пару синонимов (word1, word2).
COUNT word Ч узнать количество синонимов слова word.
CHECK word1 word2 Ч проверить, €вл€ютс€ ли слова word1 и word2 синонимами. 
—лова word1 и word2 считаютс€ синонимами,
если среди запросов ADD был хот€ бы один
запрос ADD word1 word2 или ADD word2 word1.
*/

#include <iostream>
#include <set>
#include <string>
#include <map>

using namespace std;

int main() {
	map<string, set<string>> dic;
	int q;
	string s1, s2, command;
	cin >> q;
	for (q; q > 0; --q) {
		cin >> command;
		if (command == "ADD") {
			cin >> s1;
			cin >> s2;
			dic[s1].insert(s2);
			dic[s2].insert(s1);
		}
		else if (command == "COUNT") {
			cin >> s1;
			if (dic.count(s1)) {
				cout << dic[s1].size() << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (command == "CHECK") {
			cin >> s1 >> s2;
			if (dic.count(s1)) {
				if (dic[s1].count(s2)) {
					cout << "YES" << endl;
				}
				else {
					cout << "NO" << endl;
				}
			}
			else {
				cout << "NO" << endl;
			}
		}
	}



	return 0;
}