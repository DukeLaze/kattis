#include <iostream>

int main(){
    int x,y;
    std::cin >> x >> y;

    std::cout << (y%2 == 0 ? "possible" : "impossible") << std::endl;
}