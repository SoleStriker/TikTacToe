#include <iostream>
#include <ctime>

using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *space);


int main() {

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    int test;
    cout << "test";
    cin >> test;
    drawBoard(spaces);

    while(running) {
        playerMove(spaces, player);
        drawBoard(spaces);
    }

    return 0;
}


void drawBoard(char *spaces) {
    cout << '\n';
    cout << "     |    |     " << '\n';
    cout << "   " << spaces[0] << " |  " << spaces[1] << " |     " << '\n';
    cout << "_____|____|_____" << '\n';
    cout << "     |    |     " << '\n';
    cout << "   " << spaces[2] << " |  " << spaces[3] << " |     " << '\n';
    cout << "_____|____|_____" << '\n';
    cout << "     |    |     " << '\n';
    cout << "   " << spaces[4] << " |  " << spaces[5] << " |     " << '\n';
    cout << "     |    |     " << '\n';
    cout << '\n';
}

void playerMove(char *spaces, char player) {
    int number;
    do {
        cout << "Enter a spot to place X (1-9)";
        cin >> number;
        number--;
        if(spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }

    } while (!number > 0 || !number < 8);

}

void computerMove(char *spaces, char computer) {

}

bool checkWinner(char *spaces, char player, char computer) {

    return 0;
}

bool checkTie(char *space) {

    return 0;
}