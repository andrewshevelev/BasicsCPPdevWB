/*
¬ первой строке файла input.txt записаны два числа N и M. 
ƒалее в файле находитс€ таблица из N строк и M столбцов, 
представленна€ в формате CSV (comma-separated values). 
“акой формат часто используетс€ дл€ текстового представлени€ 
таблиц с данными: в файле несколько строк, значени€ из разных 
€чеек внутри строки отделены друг от друга зап€тыми. 
¬аша задача Ч вывести данные на экран в виде таблицы, 
размер €чейки которой равен 10, соседние €чейки отделены 
друг от друга пробелом. ѕосле последней €чейки пробела 
быть не должно. √арантируетс€, что в таблице будет ровно 
N строк и M столбцов, значение каждой из €чеек Ч целое число.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	ifstream input("input.txt");
	int n, m, x;
	string line;

	input >> n >> m;
	input.ignore(1);
	for (int i = n; i > 0; --i) {
		for (int j = m; j > 1; --j) {
			getline(input, line, ',');
			cout << setw(10) << line << " ";
		}
		getline(input, line);
		cout << setw(10) << line << endl;
	}
	return 0;
}