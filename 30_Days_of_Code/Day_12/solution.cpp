#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person
{
	protected:
		string firstName;
		string lastName;
		int id;

	public:
		Person(string firstName, string lastName, int identification)
		{
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}

		void printPerson()
		{
			cout << "Name: " << lastName << ", " << firstName
				 << "\nID: " << id << endl;
		}
};

class Student : public Person 
{
	private:
		vector<int> testscores;

	public:
		Student(string firstName, string lastName, int id, vector<int> scores):
		Person(firstName, lastName, id),testscores (scores) {}

		char calculate()
		{
			int sum = 0, grade = 0;

			for (int i = 0; i < testscores.size(); i++)
			{
				sum += testscores.at(i);
			}
			grade = sum/testscores.size();
			//cout << "grade = " << grade << endl;

			if ((grade >= 90) && (grade <= 100))
				return 'O';
			else if ((grade >= 80) && (grade < 90))
				return 'E';
			else if ((grade >= 70) && (grade < 80))
				return 'A';
			else if ((grade >= 55) && (grade < 70))
				return 'P';
			else if ((grade >= 40) && (grade < 55))
				return 'D';
			else
				return 'T';

		}
};

int main()
{
	/*Person thePunisher("Frank", "Castle", 123);
	thePunisher.printPerson();*/
	
	string firstName;
  	string lastName;
	
	int id;
  	int numScores;
	
	cin >> firstName >> lastName >> id >> numScores;
  	
  	vector<int> scores;
  	
  	for(int i = 0; i < numScores; i++)
  	{
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	
	return 0;
}