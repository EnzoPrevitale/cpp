#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        int age;
        
        void greet() {
            cout << "Hello, my name is " << name << ". I am " << age << " years old.";
        }
};

int main() {
    Person person;
    
    cout << "Type your name: ";
    getline(cin, person.name);
    cout << "Type your age: ";
    cin >> person.age;
    
    person.greet();
    
    return 0;
}
