#include <iostream>
#include <string>
#include <vector>

bool contains(const std::vector<char> array, char toTest);
int main(){
    double whitespace, lowercase, uppercase, symbol;
    whitespace = lowercase = uppercase = symbol = 0;
    std::string input;
    std::cin >> input;

    std::vector<char> whitespaces {'_'};
    std::vector<char> lowercases {'a', 'b', 'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    std::vector<char> uppercases {'A', 'B', 'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};


    for(int i = 0; i < input.length(); i++){
        if(contains(whitespaces, input.at(i)))
            whitespace++;
        else if(contains(lowercases, input.at(i)))
            lowercase++;
        else if(contains(uppercases, input.at(i)))
            uppercase++;
        else
            symbol++;
    }

    std::cout << std::fixed;
    std::cout.precision(6);

    std::cout << (double)((double)whitespace/(double)input.length()) << std::endl;
    std::cout << (double)(lowercase/input.length()) << std::endl;
    std::cout << (double)(uppercase/input.length()) << std::endl;
    std::cout << (double)(symbol/input.length()) << std::endl;
}

bool contains(const std::vector<char> array, char toTest){
    for(int i = 0; i < array.size(); i++){
        if(array[i] == toTest)
            return true;
    }
    return false;
}