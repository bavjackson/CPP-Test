#include <iostream>
class MyNumber
{
    int *_p_val;

public:
    MyNumber(int n = 0) : _p_val{new int{n}} {}
    MyNumber(const MyNumber& mn):_p_val{new int{*mn._p_val}}{}
    ~MyNumber(){delete _p_val;}

    int get_val() const { return *_p_val; }
};
int main()
{
    {
        MyNumber mn1, mn2{12}, mn3{mn2};

        // mn1 = mn2;

        std::cout << "mn1: " << mn1.get_val() << std::endl;
        std::cout << "mn2: " << mn2.get_val() << std::endl;
        std::cout << "mn3: " << mn3.get_val() << std::endl;
    }

    return 0;
}