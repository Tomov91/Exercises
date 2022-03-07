#include<string>
#include <iostream>
#include<vector>

using namespace std;

class Student {
private:
    string name;
    string surename;
    int age;
    double vote;

public:
    
    Student(string name, string surename, int age, double vote) :
        name(name),
        surename(surename),
        age(age),
        vote(vote) {
    }
    double getVote() {
        return vote;
    }
    void getData() {
        cout << "Name->" << name << endl;
        cout << "Surename->" << surename << endl;
        cout << "Age->" << age << endl;
        cout << "Vote->" << vote << endl;
    }
};
int main()
{
    cout << "How many students you want to input ? " << endl;
    int howManyStuds;
    cin >> howManyStuds;
    string name;
    string surename;
    int age;
    double vote;
    vector<Student> myVec;
    while (howManyStuds--)
    {
        cout << "Enter name " << endl;
        cin >> name;
        cout << "Enter surename " << endl;
        cin >> surename;
        cout << "Enter age " << endl;
        cin >> age;
        cout << "Enter vote " << endl;
        cin >> vote;
        myVec.push_back(Student(name, surename, age, vote));
    }

    double minVote;
    cout << "Which is the minimal vote that you would like to filter?" << endl;
    cin >> minVote;

    cout << "The students with MIN vote -> " << minVote << " are:" << endl;
    for (vector<Student>::iterator it = myVec.begin(); it != myVec.end(); it++) {
        if (it->getVote() >= minVote) {
            it->getData();
        }
    }
    
}

