#include <iostream>

int main(){
    int n;
    std::cin >> n;
    std::cout << std::fixed; //set floating point precision to fixed
    std::cout.precision(4); //4 decimals precision
    for(int i = 0; i < n; i++){
        double b,p;
        std::cin >> b >> p;
        double ABPM = 60/p;
        double BPM = (60*b)/p;
        std::cout << (BPM-ABPM) << " " << BPM << " " << BPM+ABPM << std::endl;
    }
}