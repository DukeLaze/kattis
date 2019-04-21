#include <iostream>

int main(){
    int t;
    std::cin >> t;

    //For test cases
    for(int i = 0; i < t; i++){
        //input
        int n;
        //answer
        int min = 0;
        std::cin >> n;
        // starts with one turtle
        int k = 1;
        while(k > 0){
            std::cin >> n;
            //If the new amount of turtles exceeds the breeding rate
            if(n > 2*k){
                // Increase min by the difference in immigrant turtels and bred turtles
                min += n-2*k;
            }
            // Update k with the new amount of turtles
            k = n;
        }
        std::cout << min << std::endl;
    }
}