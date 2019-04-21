#include <iostream>

int main(){
    int contestant = 0;
    int sum = 0;
    for(int i = 0; i < 5; i++){
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        int newSum = a+b+c+d;
        if(sum < newSum){
            sum = newSum;
            contestant = i+1;
        }
    }
    std::cout << contestant << " " << sum << std::endl;
}