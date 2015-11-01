#include <iostream>
#include <string>

int main() {
    std::string input;
    int count = 1;
    while(std::cin >> input) {
        std::cout << count++ << ": " << input << std::endl; 
    }
    return 0;
}
