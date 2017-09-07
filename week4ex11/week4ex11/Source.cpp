#include <iostream>
#include <exception>
#include <string>
using namespace std;
string AskTimeServer() {
	string s="01:01:02";
	throw system_error(error_code());
	return s;
}
class TimeServer {
public:
	string GetCurrentTime() {
		try {
			LastFetchedTime = AskTimeServer();
		}
		catch (system_error& ex) {
			return LastFetchedTime;
		}		
		return LastFetchedTime;
	}
private:
	string LastFetchedTime = "00:00:00";
};

//int main() {
//
//	TimeServer time_server;
//	time_server.GetCurrentTime();
//	return 0;
//}