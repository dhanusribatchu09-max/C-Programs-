#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    
    friend void display(Number);
};


void display(Number n)
{
    cout << "The entered number is: " << n.num << endl;
}

int main()
{
    Number obj;

    obj.getData();
    display(obj);

    return 0;
}