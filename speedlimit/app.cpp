#include <iostream>
#include <vector>

int main(){
    int cases;
    std::cin >> cases;

    while(cases != -1){
        std::vector<int> data(cases*2, 0);
        int sum = 0;

        for(int i = 2; i <= cases*2; i+=2){
            std::cin >> data[i-2] >> data[i-1];

            if(i > 2){
                sum += data[i-2]*(data[i-1]-data[i-3]);
            }
            else{
                sum += data[i-2]*data[i-1];
            }
        }
        std::cout << sum << " miles" << std::endl;
        std::cin >> cases;
    }
}