#include <iostream>
#include <string>

int main(){
    int x, y, n;
    std::cin >> x >> y >> n;
    for(int i = 1; i <= n; i ++){
        std::string out = "";
        if(i%x == 0){
            out += "Fizz";
        }
        if(i%y == 0){
            out += "Buzz";
        }

        if(out == ""){
            std::cout << i << std::endl;
        }
        else{
        std::cout << out << std::endl;
        }
    }
}