#include <iostream>
#include <cstring>
using namespace std;

struct student {
    char name[100];
    char father[100];
    char enrollment[100];
    char specialization[100];
    char major[100];
    char minor[100];
    char category[100];
    char bhawan[100];
    char roomNo[100];
    char homeAddress[100];
    char houseNo[100];
    char street[100];
    char city[100];
    char state[100];
    char bloodGroup[100];
    int pinCode;
    int gateScore;

    student(
        const char* name, const char* father, const char* enrollment,
        const char* specialization, const char* major, const char* minor,
        const char* category, const char* bhawan, const char* roomNo,
        const char* homeAddress, const char* houseNo, const char* street,
        const char* city, const char* state, const char* bloodGroup,
        int pinCode, int gateScore
    ) {
        strcpy(this->name, name);
        strcpy(this->father, father);
        strcpy(this->enrollment, enrollment);
        strcpy(this->specialization, specialization);
        strcpy(this->major, major);
        strcpy(this->minor, minor);
        strcpy(this->category, category);
        strcpy(this->bhawan, bhawan);
        strcpy(this->roomNo, roomNo);
        strcpy(this->homeAddress, homeAddress);
        strcpy(this->houseNo, houseNo);
        strcpy(this->street, street);
        strcpy(this->city, city);
        strcpy(this->state, state);
        strcpy(this->bloodGroup, bloodGroup);
        this->pinCode = pinCode;
        this->gateScore = gateScore;
    }
};

int main() {
    const int totalStudents = 1;  // change to 15 if inserting 15 students
    student** std = new student*[totalStudents];

    for (int i = 0; i < totalStudents; i++) {
        char name[100];
        char father[100];
        char enrollment[100];
        char specialization[100];
        char major[100];
        char minor[100];
        char category[100];
        char bhawan[100];
        char roomNo[100];
        char homeAddress[100];
        char houseNo[100];
        char street[100];
        char city[100];
        char state[100];
        char bloodGroup[100];
        int pinCode;
        int gateScore;

        cin >> name >> father >> enrollment >> specialization >> major >> minor;
        cin >> category >> bhawan >> roomNo >> homeAddress >> houseNo >> street;
        cin >> city >> state >> bloodGroup >> pinCode >> gateScore;

        std[i] = new student(name, father, enrollment, specialization, major, minor, category,
                             bhawan, roomNo, homeAddress, houseNo, street, city, state,
                             bloodGroup, pinCode, gateScore);
    }

    for (int i = 0; i < totalStudents; i++) {
        cout << std[i]->name << " " << std[i]->father << " " << std[i]->enrollment << " "
             << std[i]->specialization << " " << std[i]->major << " " << std[i]->minor << " "
             << std[i]->category << " " << std[i]->bhawan << " " << std[i]->roomNo << " "
             << std[i]->homeAddress << " " << std[i]->houseNo << " " << std[i]->street << " "
             << std[i]->city << " " << std[i]->state << " " << std[i]->bloodGroup << " "
             << std[i]->pinCode << " " << std[i]->gateScore << endl;
    }

    for (int i = 0; i < totalStudents; i++) {
        delete std[i];
    }
    delete[] std;

    return 0;
}
