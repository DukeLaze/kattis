#include <iostream>
#include <vector>
#include <tuple>

int main(){
    int inputs;
    std::cin >> inputs;

    std::vector<std::tuple<int,double>> data;
    double sum = 0;

    for(int i = 0; i < inputs; i++){
        int time;
        double val;
        std::cin >> time >> val;
        data.push_back(std::tuple<int,double>(time, val));
    }

    for(size_t i = 1; i < data.size(); i++)
    {
        double x = (std::get<1>(data[i])+std::get<1>(data[i-1]))/2;
        sum += (x*(std::get<0>(data[i])-std::get<0>(data[i-1])));
    }

    std::cout << std::fixed;
    std::cout.precision(6);
    std::cout << (sum)/1000 << std::endl;
}