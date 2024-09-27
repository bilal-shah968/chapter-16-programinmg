#include <iostream>
using namespace std;

class Test 
{
private:
    int n;

public:
    void in()
     {
        cout << "Enter number: ";
        cin >> n;
    }

    void out() 
    {
        cout << "The value of n = " << n << endl;
    }
};

int main()
 {
    Test *ptr;
    ptr = new Test;
    ptr->in();
    ptr->out();
    delete ptr; 
    cin.get(); 
    return 0;
}
