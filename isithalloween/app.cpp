#include <iostream>
#include <cmath>
#include <vector>
#include <string>

int main(){
    std::string s1, s2;
    std::cin >> s1 >> s2;

    if((s1 == "OCT" && s2 == "31") || (s1 == "DEC" && s2 == "25")){
        std::cout << "yup" << std::endl;
    }
    else{
        std::cout << "nope" << std::endl;
    }
}