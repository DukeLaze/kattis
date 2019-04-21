#include <iostream>
#include <vector>
void move(std::vector<std::vector<int>> board, int move);

int main(){
    std::vector<std::vector<int>> board(4, std::vector<int>(4, 0));
    int m;
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            std::cin >> board[i][j];
        }
    }
    std::cin >> m;

    move(board, m);
}

void move(std::vector<std::vector<int>> board, int move){
    std::vector<std::vector<bool>> merged(4, std::vector<bool>(4, false));
    switch (move)
    {
        //Left
        case 0:
            {
                for(int i = 0; i < 4; i++){
                    int j = 1;
                    while(j < 4){
                        int tmpJ = j;
                        while(tmpJ >= 1 ){
                            if(board[i][tmpJ-1] == 0){
                                board[i][tmpJ-1] = board[i][tmpJ];
                                board[i][tmpJ] = 0;
                            }
                            else if(board[i][tmpJ-1] == board[i][tmpJ] && !merged[i][tmpJ-1] && !merged[i][tmpJ]){
                                board[i][tmpJ-1] += board[i][tmpJ-1];
                                board[i][tmpJ] = 0;
                                merged[i][tmpJ-1] = true;
                            }
                            tmpJ--;
                        }
                        j++;
                    }        
                }
            }
            break;
        //Up
        case 1:
            {
                for(int j = 0; j < 4; j++){
                    int i = 1;
                    while(i < 4){
                        int tmpI = i;
                        while(tmpI >= 1 ){ 
                            if(board[tmpI-1][j] == 0){
                                board[tmpI-1][j] = board[tmpI][j];
                                board[tmpI][j] = 0;
                            }
                            else if(board[tmpI-1][j] == board[tmpI][j] && !merged[tmpI-1][j] && !merged[tmpI][j]){
                                board[tmpI-1][j] += board[tmpI-1][j];
                                board[tmpI][j] = 0;
                                merged[tmpI-1][j] = true;
                            }
                            tmpI--;
                        }
                        i++;
                    }        
                }
            }
            break;

        //Right
        case 2:
            {
                for(int i = 0; i < 4; i++){
                    int j = 2;
                    while(j >= 0){
                        int tmpJ = j;
                        while(tmpJ <=2 ){
                            if(board[i][tmpJ+1] == 0){
                                board[i][tmpJ+1] = board[i][tmpJ];
                                board[i][tmpJ] = 0;
                            }
                            else if(board[i][tmpJ+1] == board[i][tmpJ] && !merged[i][tmpJ+1] && !merged[i][tmpJ]){
                                board[i][tmpJ+1] += board[i][tmpJ+1];
                                board[i][tmpJ] = 0;
                                merged[i][tmpJ+1] = true;
                            }
                            tmpJ++;
                        }
                        j--;
                    }        
                }
            }
            break;

        //Down
        case 3:
            {
                for(int j = 0; j < 4; j++){
                    int i = 2;
                    while(i >= 0){
                        int tmpI = i;
                        while(tmpI <= 2 ){ 
                            if(board[tmpI+1][j] == 0){
                                board[tmpI+1][j] = board[tmpI][j];
                                board[tmpI][j] = 0;
                            }
                            else if(board[tmpI+1][j] == board[tmpI][j] && !merged[tmpI+1][j] && !merged[tmpI][j]){
                                board[tmpI+1][j] += board[tmpI+1][j];
                                board[tmpI][j] = 0;
                                merged[tmpI+1][j] = true;
                            }
                            tmpI++;
                        }
                        i--;
                    }        
                }
            }
            break;
        default:
            break;
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}