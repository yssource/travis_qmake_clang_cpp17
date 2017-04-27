#include <iostream>

int main()
{
  std::cout << __clang_version__ << '\n';
  static_assert("C++17"); //C++17 has a default message
}
