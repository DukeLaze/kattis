#include <iostream>
#include <string>

int main(){
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::string s1, s2;
        std::cin >> s1 >> s2;
        std::cout << s1 << std::endl << s2 << std::endl;
        std::string out = "";
        for(int i = 0; i < s1.length(); i++){

            if(s1.at(i) != s2.at(i)){
                out += "*";
            }
            else{
                out += ".";
            }
        }
        std::cout << out << std::endl;
    }
}