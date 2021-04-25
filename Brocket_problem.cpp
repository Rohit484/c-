#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream input("time.txt", ios::in);
	ofstream output("time.txt", ios::out);
	int hours, minutes, seconds;

	char colon;
	input >> hours >> colon >> minutes >> colon >> seconds;

	input.close();
	int n_sec, n_min, n_hour;
	n_sec = seconds * 2;
        n_min = 0;

	if (n_sec > 59)
	{
    	n_min = n_sec/60;
    	n_sec = n_sec - (60*n_min);
	}

	n_min = n_min + (minutes * 2);
	if (new_min>59)
	{
    	n_hour = n_min/60;
    	n_min = n_min - (n_hour*60);
	}

	n_hour = n_hour + (hours * 2);
	if (n_hour > 99)
	{
		n_hour = 99;
   }
	output << n_hour << ":" << n_min << ":" << n_sec << endl;
}
