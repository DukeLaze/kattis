#include <iostream>
#include <string>

int main(){
    std::string a;
    std::string b;

    std::cin >> a >> b;

    if(a.length() >= b.length())
        std::cout << "go" << std::endl;
    else
        std::cout << "no" << std::endl;
}