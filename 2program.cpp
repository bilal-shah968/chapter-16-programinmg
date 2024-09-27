#include <iostream>
using namespace std;

class person
 {
private:
    char name[50];

public:
    void get()
     {
        cout << "Enter your name: ";
        cin >> name;
    }

    void show()
     {
        cout << "Name: " << name << endl;
    }
};

int main() 
{
    person* ptr[5];  
    for (int i = 0; i < 5; i++) 
    {
        ptr[i] = new person;
        ptr[i]->get();
    }
    for (int i = 0; i < 5; i++) 
    {
        ptr[i]->show();
    }
    for (int i = 0; i < 5; i++)
     {
        delete ptr[i];
    }
    cin.get();
    return 0;
}
