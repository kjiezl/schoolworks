#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

/*
    TO FIX OR ADD:
    - restarting game will not reset the coords of player, resulting in instant collision
    - make snake faster every time a food is eaten
    - difficulty level not making any changes?
    - extreme difficulty level (200 or 250)
    - custom diffculty level (player puts in snake speed)
    - store in scores and names in leaderboard when restarting game
    - custom snakes (head and tail char)
    - custom table width and height or option for map size
    - weird loop lines
*/

const int width = 50;
const int height = 20;

int x, y;
int foodX, foodY;
int score;
int tailX[100], tailY[100];
int tailLength;

enum direction{
    STOP = 0, LEFT, RIGHT, UP, DOWN
};

direction dir;

bool gameOver;

void game(){
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    foodX = rand() % width;
    foodY = rand() % height;
    score = 0;
}

void startGame(string name){
    system("CLS");

    for(int i = 0; i < width + 2; i++){
        cout << "-";
    }

    cout << endl;

    for(int i = 0; i < height; i++){
        for(int j = 0; j <= width; j++){
            if(j == 0 || j == width){
                cout << "|";
            }
            if(i == y && j == x){
                cout << "O";
            } else if(i == foodY && j == foodX){
                cout << "#";
            } else{
                bool prTail = false;
                for(int k = 0; k < tailLength; k++){
                    if(tailX[k] == j && tailY[k] == i){
                        cout << "o";
                        prTail = true;
                    }
                }
                
                if(!prTail){
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    for(int i = 0; i < width + 2; i++){
        cout << "-";
    }

    cout << endl;

    cout << name << "'s Score: " << score << endl;
}

void updateGame(){

    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for(int i = 1; i < tailLength; i++){
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch(dir){
        
        case LEFT:
            x--;
            break;
        
        case RIGHT:
            x++;
            break;
        
        case UP:
            y--;
            break;

        case DOWN:
            y++;
            break;
    }

    if(x >= width || x < 0 || y >= height || y < 0){
        gameOver = true;
    }

    for(int i = 0; i < tailLength; i++){
        if(tailX[i] == x && tailY[i] == y){
            gameOver = true;
        }
    }

    if(x == foodX && y == foodY){
        score += 10;
        foodX = rand() % width;
        foodY = rand() % height;
        tailLength++;
    }
}

int setDiff(){
    
    int diff, num;

    cout << endl << "SET DIFFICULTY (Default: Normal):\n";
    cout << "1 - EASY\n2 - NORMAL\n3 - HARD" << endl;
    cout << "\nEnter difficulty: ";
    cin >> num;

    switch(num){
        case '1':
            diff = 100;
            break;
        
        case '2':
            diff = 200;
            break;
        
        case '3':
            diff = 350;
            break;
        
        default:
            diff = 200;
    }

    return diff;
}

void controls(){

    //_kbhit keyboard hit, checks if a key is pressed

    if(_kbhit()){

        switch(_getch()){
            case 'a':
                dir = LEFT;
                break;
            
            case 'd':
                dir = RIGHT;
                break;
            
            case 'w':
                dir = UP;
                break;
            
            case 's':
                dir = DOWN;
                break;
            
            case 'x':
                gameOver = true;
                break;
        }
    }
}

int main(){
    
    string playerName;

    cout << "Enter name: ";
    cin >> playerName;

    int difficulty = setDiff();

    game();

    while(!gameOver){
        startGame(playerName);
        controls();
        updateGame();
        Sleep(difficulty);
    }

    while(gameOver){
        string inp;
        system("CLS");
        cout << playerName << "'s Final Score: " << score << endl;
        cout << "\nGAME OVER!\n\n";
        
        cout << "Play again? (Y/N): ";
		cin >> inp;

		if(inp == "Y" || inp == "y" || inp == "yes" || inp == "YES"){
			// restart game
		} else if(inp == "N" || inp == "n" || inp == "no" || inp == "NO"){
			system("CLS");
			cout << "Thanks for playing, " << playerName << "!\n\n";
			getch();
            //system("PAUSE");
			return 0;
		}
    }
}