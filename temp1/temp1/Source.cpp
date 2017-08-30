#include <iostream>
#include <map>
#include <string>
#include <set>
#include <vector>

using namespace std;

string GetPositivity(int x) {
	return x > 0 ? "positive"
		: (x == 0 ? "zero" : "negative");
}

int main() {

	{
		vector<string> w;
		w.push_back("One");
		{
			w.push_back("Two");
			{
				w.push_back("Three");
			}
		}
		for (auto s : w) {
			cout << s;
		}
	}
	
	return 0;
}