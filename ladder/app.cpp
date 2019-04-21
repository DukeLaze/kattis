#include <iostream>
#include <cmath>

int main(){
    int h, a;
    std::cin >> h >> a;
    std::cout << ceil(h/sin((a*3.1415926535)/180));
}