#include <iostream>
#include <tuple>
#include <string>

int main(){
    int gold, silver, copper;
    std::cin >> gold >> silver >> copper;
    int buyingPower = gold*3+silver*2+copper;
    std::tuple<int, std::string> victoryCards[] {{8, "Province"}, {5, "Duchy"}, {2, "Estate"}};
    std::tuple<int, std::string> treasureCards[] {{6, "Gold"}, {3, "Silver"}, {0, "Copper"}};
    std::string vicOut = "";
    std::string treOut = "";

    for(size_t i = 0; i < 3; i++)
    {
        if(buyingPower >= std::get<0>(victoryCards[i])){
            vicOut = std::get<1>(victoryCards[i]);
            break;
        }
    }

    for(size_t i = 0; i < 3; i++)
    {
        if(buyingPower >= std::get<0>(treasureCards[i])){
            treOut = std::get<1>(treasureCards[i]);
            break;
        }
    }

    if(vicOut == ""){
        std::cout << treOut << std::endl;
    }
    else{
    std::cout << vicOut << " or " << treOut << std::endl;
    }
}