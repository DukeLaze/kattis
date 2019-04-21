#include <iostream>

int main(){
    int numInputs;
    std::cin >> numInputs;
    double sum = 0.0;
    for(size_t i = 0; i < numInputs; i++)
    {
        double x,y;
        std::cin >> x >> y;
        sum += x*y;
    }
    std::cout << sum << std::endl;
}