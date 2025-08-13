#include <iostream>
#include <string>
#include <functional>

void print(const char *str,  int num) {
    std::cout << str << num << std::endl;
}

int main()
{
    //print("nihao", 10);
    auto func = std::bind(print, "nihao", std::placeholders::_1);
    print("nihao", 10);
    func(23);
    return 0;
}