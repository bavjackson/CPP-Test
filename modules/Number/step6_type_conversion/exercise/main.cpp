#include <iostream>
class MyNumber
{
    int *_p_val;
    void swap(MyNumber &mn)
    {
        std::swap(_p_val, mn._p_val);
    }

public:
    MyNumber(int n = 0) : _p_val{new int{n}} {}
    MyNumber(const MyNumber &mn) : _p_val{new int{*mn._p_val}} {}
    MyNumber(MyNumber &&mn) noexcept : _p_val{nullptr}
    {
        swap(mn);
    }
    ~MyNumber() { delete _p_val; }
    MyNumber &operator=(const MyNumber &mn)
    {
        MyNumber temp{mn};
        swap(temp);
        return *this;
    }
    MyNumber &operator=(MyNumber &&mn) noexcept
    {
        swap(mn);
        return *this;
    }
    int get_val() const { return *_p_val; }
    MyNumber add(const MyNumber &mn) const
    {
        return *_p_val + *mn._p_val;
    }
};
MyNumber operator+(const MyNumber &lhs, const MyNumber &rhs)
{
    return lhs.add(rhs);
}
int main()
{
    {
        MyNumber mn1, mn2{12}, mn3{mn2};

        mn1 = mn2;

        mn1 = mn2 + mn3; // Here for illustration
        mn1 = mn2 + 30;  // Here for illustration
        mn1 = 30 + mn3;

        // int val = static_cast<int>(mn3);
        std::cout << "mn1: " << mn1.get_val() << std::endl;
        std::cout << "mn2: " << mn2.get_val() << std::endl;
        std::cout << "mn3: " << mn3.get_val() << std::endl;
        // std::cout << "val: " << val << std::endl;
        
    }

    return 0;
}