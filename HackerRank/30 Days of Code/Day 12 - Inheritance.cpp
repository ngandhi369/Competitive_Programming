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
        Student(string fname,string lname,int id,vector<int> scores
                ):Person(fname,lname,id),
                    testScores(scores)
                    {}
        char calculate(void)
        {
            float sum=0;
            for(int i=0;i<testScores.size();i++)
                sum=sum+testScores[i];
            sum=sum/testScores.size();
            if(sum>=90 && sum<=100)
                return 'O';
            else if(sum>=80 && sum<90)
                return 'E';
            else if(sum>=70 && sum<80)
                return 'A';
            else if(sum>=55 && sum<70)
                return 'P';
            else if(sum>=40 && sum<55)
                return 'D';
            else
                return 'T';
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
