#include <iostream>
int main(){
    int numInputs;
    std::cin >> numInputs;
    for(int i = 0; i < numInputs; i++){
        int x;
        std::cin >> x;
        std::cout << x << " is " << ((x%2 == 0) ? "even":"odd") << std::endl;
    }
}