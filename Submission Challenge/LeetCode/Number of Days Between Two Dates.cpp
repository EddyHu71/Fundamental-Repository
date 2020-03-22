#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	//2019-06-29
    int daysBetweenDates(string date1, string date2) {
        string year1 = date1.substr(0, 4);
        string month1 = date1.substr(5, 2);
        string day1 = date1.substr(8, 2);
        string year2 = date2.substr(0, 4);
        string month2 = date2.substr(5, 2);
        string day2 = date2.substr(8, 2);
        int year_int1 = stoi(year1);
        int month_int1 = stoi(month1);
        int day_int1 = stoi(day1);
    	int year_int2 = stoi(year2);
        int month_int2 = stoi(month2);
        int day_int2 = stoi(day2);
    }
    
    int operateYear(int year1, int year2) {
    	int day_year1 = 365;
		int day_year2 = 365;
		if (year1 == year2) {
			return 0;
		}
    	if (kabisatYear(year1)) {
    		day_year1 = 366;
		} else
		if (kabisatYear(year2)) {
			day_year2 = 366;
		}
		return (day_year2 - day_year1);
	}
	
	int operateMonth(int month1, int year1, int month2, int year2) {
		int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int day_month1 = 0;
		int day_month2 = 0;
		if (month1 == month2) {
			return 0;
		}
		if (kabisatYear(year1) && month1 == 2) {
			day_month1 = 29;
		} else
		if (kabisatYear(year2) && month2 == 2) {
			day_month2 = 29;
		} else {
			day_month1 = months[months-1];
			day_month2 = months[months-1];
		}
		return (day_month2 - day_month1);
	}
	
	int operateDay(int day1, int day2) {
		return abs(day2-day1);
	}
	
    bool kabisatYear(int year) {
    	if (year % 100 == 0) {
			if (year % 400 == 0) {
				return true;
			} else {
				return false;
			}	
		} else  if (year % 4 == 0) {
			return true;
		}
		return false;
	}
};

main () {
	Solution s;
	int date1, date2;
	cin>>date1>>date2;
	cout<<s.kabisatYear(date1)<<endl;
	cout<<s.kabisatYear(date2);
}
