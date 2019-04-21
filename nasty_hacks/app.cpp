#include <iostream>
#include <cmath>

int main(){
    int n;
    std::cin >> n;
   
    for(int i = 0; i < n; i++){
        int noAdvertise, r, a;
        std::cin >> noAdvertise >> r >> a;

        if(r-a == noAdvertise){
            std::cout << "does not matter" << std::endl;
        }
        else if(noAdvertise > r-a){
            std::cout << "do not advertise" << std::endl;
        }
        else{
            std::cout << "advertise" << std::endl;
        }
    }
}