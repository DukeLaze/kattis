#include <iostream>
#include <cmath>

int main(){
    int n;
    std::cin >> n;
    unsigned long sum = 0;
    for(int i = 0; i < n; i++){
        int mangled;
        std::cin >> mangled;
        //remove last digit, use last digit
        sum += std::pow(mangled/10, mangled%10);
    }

    std::cout << sum << std::endl;
}