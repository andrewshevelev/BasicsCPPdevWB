#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

int main() {
	set<int> s = { 4, 2, 1, 2 };
	s.erase(2);
	s.insert(1);
	cout << s.size();

	return 0;
}