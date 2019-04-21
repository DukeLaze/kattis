#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> x;
    std::vector<int> y;

    for(int i = 0; i < 3; i++){
        int X;
        std::cin >> X;
        auto itrX = std::find(x.begin(), x.end(), X);
        if(itrX != x.end()){
            x.erase(itrX);
        }
        else{
            x.push_back(X);
        }

        int Y;
        std::cin >> Y;
        auto itrY = std::find(y.begin(), y.end(), Y);
        if(itrY != y.end()){
            y.erase(itrY);
        }
        else{
            y.push_back(Y);
        }
    }
    std::cout << x.at(0) << " " << y.at(0) << std::endl; 
}

