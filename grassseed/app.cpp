#include <iostream>

int main(){

    double p;
    int n;
    std::cin >> p >> n;
    std::cout << std::fixed; //set floating point precision to fixed
    std::cout.precision(6); //4 decimals precision
    double sum = 0.000000;
    for(int i = 0; i < n; i++){
        double h, v;
        std::cin >> h >> v;
        sum += (h*v)*p;
    }

    std::cout << sum << std::endl;
}