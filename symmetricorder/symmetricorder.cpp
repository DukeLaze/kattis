#include <iostream>
#include <vector>
#include <string>

int main(){
    int numInputs;
    std::cin >> numInputs;
    int sets = 0;
    while(numInputs){
        sets++;
        std::vector<std::string> inputs(numInputs);
        int tmp = numInputs;
        if(numInputs == 1){
            std::string first;
            std::cin >> first;
            inputs[0] = first;
        }
        else {
            for(int i = 0; i < numInputs/2; i++){
                std::string first;
                std::string second;
                std::cin >> first >> second;

                inputs[i] = first;
                inputs[tmp-1] = second;


                tmp--;
                
            }
            if(numInputs%2 != 0){
                std::cin >> inputs[numInputs/2];
            }
        }
        std::cout << "SET " << sets << std::endl;
        for(auto a : inputs)
        {
            std::cout << a << std::endl;
        }
        std::cin >> numInputs;
    }
}