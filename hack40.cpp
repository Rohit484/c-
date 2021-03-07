#include<iostream>
using namespace std;
class Student : public Person{
	private:
    vector<int> testScores;

	public:
    // Write your constructor
    Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id) {
        this->testScores = scores;
    }

    // Write char calculate()
    char calculate() {
        int sumScore = 0;
        for (int i = 0; i < testScores.size(); i++) {
            sumScore += testScores[i];
        }
        int averageScore = sumScore / testScores.size();

        if (averageScore <= 100 && averageScore >= 90) {
            return 'O';
        } else if (averageScore < 90 && averageScore >= 80) {
            return 'E';
        } else if (averageScore < 80 && averageScore >= 70) {
            return 'A';
        } else if (averageScore < 70 && averageScore >= 55) {
            return 'P';
        } else if (averageScore < 55 && averageScore >= 40) {
            return 'D';
        }
        return 'T';
    }
};
