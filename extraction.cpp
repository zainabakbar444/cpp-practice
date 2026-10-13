#include <iostream>
using namespace std;

class icomplex
{
public:
    int age;
    string name;

    friend istream &operator>>(istream &input, icomplex &in)
    {
        input >> in.age;
        input >> in.name;
        return input;
    }

    friend ostream &operator<<(ostream &output, icomplex &o)
    {
        output << "Age: " << o.age << endl;
        output << "Name: " << o.name << endl;
        return output;
    }
};

int main()
{
    icomplex ic1;

    cout << "Enter age: ";
    cout << "Enter name: "; 
    cin >> ic1;

    cout << ic1;

    return 0;
}