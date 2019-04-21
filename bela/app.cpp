#include <iostream>
#include <tuple>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    std::vector<std::tuple<int, int, char>> values = {{11, 11, 'A'}, {4, 4, 'K'}, 
        {3, 3, 'Q'}, {20, 2, 'J'}, {10, 10, 'T'}, {14, 0, '9'}, {0, 0, '8'}, {0, 0, '7'}};

    char dominant;
    int hands;

    std::cin >> hands >> dominant;

    int sum = 0;
    for(int i = 0; i < hands*4; i++){
        std::string card;
        std::cin >> card;
        auto itr = std::find_if(values.begin(), values.end(), [card](const std::tuple<int, int, char>& c)
            { return std::get<2>(c) == card.at(0); });
        if(card.at(1) == dominant){
            sum += std::get<0>(*itr);
        }
        else{
            sum += std::get<1>(*itr);
        }
    }

    std::cout << sum << std::endl;
}