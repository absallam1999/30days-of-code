#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public: 
    /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
    Student(string f, string l, int s_id, vector<int> scores): Person(f, l, s_id){
        
        for(int i = 0; i < scores.size(); i++) {
            testScores.push_back(scores[i]);
        }
    }
       
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate() {
            char result;
            int grade = 0;
            for(int i = 0; i < testScores.size(); i++){
                grade += testScores[i];
            }
                grade /= testScores.size();
                
            if(grade >= 90 && grade <= 100) {
                result =  'O';
            } else if(grade >= 80 && grade < 90) {
                result = 'E';
            } else if(grade >= 70 && grade < 80) {
                result = 'A';
            } else if(grade >= 55 && grade < 70) {
                result = 'P';
            } else if(grade >= 40 && grade < 55) {
                result = 'D';
            } else if(grade < 40) {
                result = 'T';
            }
            return result;
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}