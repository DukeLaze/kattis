#include <iostream>

int sumOfDigits(int i){
    int sum = 0;
    while(i){
        sum += (i%10);
        i /= 10;
    }
    return sum;
}

int main(){
    int input;
    std::cin >> input;
    while(input){
        int i = 11;
        while(sumOfDigits(input) != sumOfDigits(i*input)){
            i++;
        }
        std::cout << i << std::endl;
        std::cin >> input;
    }
}