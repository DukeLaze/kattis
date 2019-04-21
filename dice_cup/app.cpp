#include <iostream>

int main(){
    int largest,smallest;
    std::cin >> largest >> smallest;
    if(largest < smallest){
        int temp = smallest;
        smallest = largest;
        largest = temp;
    }

    if(smallest == largest){
        std::cout << smallest+1 << std::endl;
    }
    else{
        for(int i = smallest; smallest <= largest; smallest++){
            std::cout << smallest+1 << std::endl;
        }
    }
}