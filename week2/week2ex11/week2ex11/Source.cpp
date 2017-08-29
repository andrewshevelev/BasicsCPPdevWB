#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

map<char, int> BuildCharCounters(const string& s) {
	map<char, int> m1;
	for (const char& c : s) {
		m1[c]++;
	}
	return m1;
}

int main() {
	int n, i;
	string s1, s2;

	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> s1 >> s2;
		if ((s1.size() == s2.size()) && (BuildCharCounters(s1) == BuildCharCounters(s2))) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}