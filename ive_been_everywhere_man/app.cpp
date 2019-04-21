#include <iostream>
#include <cmath>
#include <vector>
#include <string>

int main(){
    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        std::cin >> n;
        std::vector<std::string> towns;
        for(int j = 0; j < n; j++){
            std::string in;
            std::cin >> in;
            bool exists = false;
            for(int k = 0; k < towns.size(); k++){
                if(in == towns[k]){
                    exists = true;
                    break;
                }
            }
            if(!exists){
                towns.push_back(in);
            }
        }
        std::cout << towns.size() << std::endl;
    }
}