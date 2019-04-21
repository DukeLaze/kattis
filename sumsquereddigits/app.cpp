#include <iostream>

int main(){
    int cases;
    std::cin >> cases;

    for(int i = 0; i < cases; i++){
        int caseC, b, p;
        std::cin >> caseC >> b >> p;

        int ans = 0;
        while(p){
            int b_n = p%b;
            ans += b_n*b_n;
            p/=b;
        }

        std::cout << caseC << " " << ans << std::endl;
    }
}