#include <iostream>

int main(){
    int n;
    std::cin >> n;

    double sum = 0;
    int walks = 0;
    for(int i = 0; i < n; i++){
        int in;
        std::cin >> in;
        if(in != -1){
            sum += in;
        }
        else{
            walks++;
        }
    }

    std::cout << sum/(n-walks) << std::endl;
}