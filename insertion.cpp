#include<iostream>
using namespace std;
class complex
{
    public:
    int age;
    complex()
    {
        age = 18;
    }
    friend ostream &operator <<(ostream &output, complex &c)
    {
        output << "your age is: " << c.age;
        return output;
    }
};
int main()
{
    complex c1;
    cout<<c1;
    return 0;
}