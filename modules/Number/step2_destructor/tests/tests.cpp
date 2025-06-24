#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

namespace local
{
#include "../exercise/main.cpp"
}

namespace Test
{
    TEST(MyNumberTest, Step2CheckConstructors)
    {
        std::stringstream buffer;
        std::streambuf *oldCout = std::cout.rdbuf(buffer.rdbuf()); // Redirect cout

        local::main();

        std::cout.rdbuf(oldCout); // Restore original cout
        std::string output = buffer.str();
        auto mn1_pos = output.find("mn1: 0");
        auto mn2_pos = output.find("mn2: 12");
        auto mn3_pos = output.find("mn3: 12");
        ASSERT_NE(mn1_pos, std::string::npos)
            << "Program output should contain 'mn1: 0'. Actual output:\n"
            << output;
        ASSERT_NE(mn2_pos, std::string::npos)
            << "Program output should contain 'mn2: 12'. Actual output:\n"
            << output;
        ASSERT_NE(mn3_pos, std::string::npos)
            << "Program output should contain 'mn3: 12'. Actual output:\n"
            << output;
    }
    TEST(MyNumberTest, Step2NotTriviallyDestructable)
    {
        ASSERT_TRUE(!std::is_trivially_destructible_v<local::MyNumber>);
    }
    TEST(MyNumberTest, Step2NotTriviallyCopyConstructible)
    {
        ASSERT_TRUE(!std::is_trivially_copy_constructible_v<local::MyNumber>);
    }
}