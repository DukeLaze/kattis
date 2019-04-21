#include <iostream>
#include <vector>

int main(){
    int stars;
    std::cin >> stars;
    std::cout << stars << ":" << std::endl;
    //2 stars first row minimum, up to half stars +1 (rule 3)
    for(int i = 2; i <= (stars/2) + 1; i++){
        //Row 2 rule 2
        for(int j = i-1; j < i+1; j++){
            //Check if the sums following the rules equals the number of stars
            int sum, row;
            sum = row = 0;
            while(sum < stars){
                if(row % 2 == 0){
                    sum += i;
                }
                else{
                    sum += j;
                }
                row++;
            }
            if(sum == stars){
                std::cout << i << "," << j << std::endl;
            }
        }
    }
}