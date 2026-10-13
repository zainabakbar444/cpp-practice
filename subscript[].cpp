#include <iostream>
using namespace std;
class test
{
    private:
    int arr[10];
    public:
    test()
    {
        for(int i = 0; i<=9; i++)
        {
            arr[i] = i+2;
        }
    }
    int &operator [](int index)
    {
        if(index > 9)
            cout<<"index is out of boundary" << endl;
       else 
             return arr[index];
    }
};


int main()
{
    test T1;
    cout<< "T1[0] ->  "<< T1[0] << endl;
     cout<< "T1[6] ->  "<< T1[6] << endl;
      cout<< "T1[4] ->  "<< T1[4] << endl;
       cout<< "T1[11] ->  "<< T1[11] << endl;
    
    return 0;
}