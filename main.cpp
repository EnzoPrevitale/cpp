#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        float salary;

    public:
        string name;
        int age;

        Person(string name, int age, float salary) {
            this->name = name;
            this->age = age;
            this->salary = salary;
        }
        
        void greet() {
            cout << "Hello, my name is " << name << ". I am " << age << " years old." << endl;
        }

        friend void displaySalary(Person p);
};

void displaySalary(Person p) {
    cout << "Salary: " << p.salary;
}

int main() {
    string name;
    int age;
    float salary;

    cout << "Type your name: ";
    getline(cin, name);
    cout << "Type your age: ";
    cin >> age;
    cout << "Type your salary: ";
    cin >> salary;

    Person person(name, age, salary);
    person.greet();

    displaySalary(person);
    
    return 0;
}
