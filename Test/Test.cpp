#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    std::cout << 1 + 2;
    std::cout << "\n";
    int ossz = 0;
    for (int i = 0; i < 5; i++) {
        ossz += i;
    }
    std::cout << ossz;
}
