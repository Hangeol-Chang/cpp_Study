#include<iostream>

using namespace std;

struct Person {
    int age;
    int height;
    int weight;
    
    string name;
    string job;

    // 생성자
    Person(string namein) : name(namein) {
        age = 0;
        height = 0;
        weight = 0;
        job = "NONE";
    }
    Person(string namein, string jobin) : name(namein), job(jobin) {
        age = 0;
        height = 0;
        weight = 0;
    }
    Person(string namein, string jobin, int agein, int heightin, int weightin) :
        name(namein), job(jobin), age(agein), height(heightin), weight(weightin) {}

    Person() {}

    void PrintPerson() {
        cout << "name : " << name << "\njob  : " << job 
             << "\nage : " << age << "\nheight : " << height << "\nweight : " << weight << endl;
    }
};

int main() {
    cout << "Program start";

    Person p1("Hangeol Chang", "Talking potato");
    p1.PrintPerson();
}