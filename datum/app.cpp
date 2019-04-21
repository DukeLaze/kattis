#include <iostream>
#include <ctime>
#include <string>

int main(){
    std::string days[] {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    std::tm time = {};
    std::cin >> time.tm_mday;
    std::cin >> time.tm_mon;
    time.tm_mon--;
    time.tm_year = 2009-1900;

    mktime(&time);
    std::cout << days[time.tm_wday] << std::endl;
}