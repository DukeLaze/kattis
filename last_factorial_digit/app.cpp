#include <iostream>
#include <cmath>

int main(){
    int n;
    std::cin >> n;
   
    for(int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        if(x < 2){
            std::cout << 1 << std::endl;
        }
        else if(x == 2){
            std::cout << 2 << std::endl;
        }
        else if(x == 3){
            std::cout << 6 << std::endl;
        }
        else if(x == 4){
            std::cout << 4 << std::endl;
        }
        else{
            std::cout << 0 << std::endl;
        }
    }
}