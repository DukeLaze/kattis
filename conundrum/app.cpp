#include <iostream>
#include <string>

int main(){
    std::string input;
    std::cin >> input;
    int days = 0;
    for(int i = 0; i < input.length(); i++){
        if(i % 3 == 0 && (input.at(i) != 'P')){
            days++;
        }
        else if(i % 3 == 1 && (input.at(i) != 'E')){
            days++;
        }
        else if(i % 3 == 2 && (input.at(i) != 'R')){
            days++;
        }
    }
    std::cout << days << std::endl;
}