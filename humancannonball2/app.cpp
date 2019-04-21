#include <iostream>
#include <cmath>
int main(){
    int testcases;
    std::cin >> testcases;

    double distanceToWall, lowerHeight, higherHeight, angle, velocity;
    
    for(int i = 0; i < testcases; i++){
        std::cin >> velocity >> angle >> distanceToWall >> lowerHeight >> higherHeight;

        //x(t)
        double timeAtDistToWall = distanceToWall/(velocity*cos((3.14519*angle)/180));
        //y(t)
        double heightAtDistToWall = velocity*timeAtDistToWall*sin((3.14159*angle)/180)
            -0.5*9.81*(timeAtDistToWall*timeAtDistToWall);
        
        if((heightAtDistToWall > lowerHeight+1) && (heightAtDistToWall < higherHeight-1)){
            std::cout << "Safe" << std::endl;
        }
        else{
            std::cout << "Not Safe" << std::endl;
        }
    }
}