#include <iostream>
using namespace std;

class Time {
private:
	int seconds;
	int minutes;
	int hours;
public:
	Time() : seconds(0), minutes(0), hours(0){ }

	Time(int h, int m, int s) : seconds(s), minutes(m), hours(h) { }

	void printTime() const {
		cout << hours << ':';
		if (minutes < 10) {
			cout << '0' << minutes << ':';
		}
		else {
			cout << minutes << ':';
		}
		if (seconds < 10) {
			cout << '0' << seconds;
		}
		else {
			cout << seconds << endl;
		}
	}
	Time addTime(Time&, Time&);
};

Time Time::addTime(Time& t1, Time& t2) {
	Time temp;
	int seconds = 0, minutes = 0, hours = 0;

	seconds = t1.seconds + t2.seconds;
	while (seconds >= 60) {
		minutes += 1;
		seconds -= 60;
	}

	minutes = t1.minutes + t2.minutes;
	while (minutes >= 60) {
		hours += 1;
		minutes -= 60;
	}

	hours = t1.hours + t2.hours;
	temp = {hours, minutes, seconds};
	return temp;
}

int main() {
	Time emptyTime{};
	Time t1{ 7, 43, 41 }, t2{11, 22, 33};
	Time t3 = t3.addTime(t1, t2);

	cout << "Time 1: ";	  t1.printTime();
	cout << "\nTime 2: "; t2.printTime();
	cout << "\nTime 3: "; t3.printTime();
	cout << endl;
}