#include <iostream>

int main() {
    int nums[] = {0,0,0};
    char ord[] = {0,0,0};

    std::cin >> nums[0] >> nums[1] >> nums[2] >> ord[0] >> ord[1] >> ord[2];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            if(i == j)
                continue;
            if(nums[i] < nums[j]){
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        
        switch (ord[i])
        {
        case 'A':
            ord[i] = 0;
            break;

        case 'B':
            ord[i] = 1;
            break;
        
        case 'C':
            ord[i] = 2;
            break;
        
        default:
            break;
        }
        std::cout << nums[ord[i]] << " ";
    }
}