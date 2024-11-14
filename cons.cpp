#include <conio.h>
#include <iostream>
#include <ctime>
#include "Header.h"
int main()
{
    bool debug = false;
    char simbol = '-';
    std::srand(static_cast<unsigned>(std::time(0)));
    int blocks = 10;
    int coinx;
    int coiny;
    int coin = 0;
    char input;
    int tc = 0;
    char array[22][48] = {
    {simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',simbol},
    {simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol,simbol}
    };
    coinx = randomn(1, 47);
    coiny = randomn(1, 21);
    int playerx = 20;
    int playery = 20;
    while (true) {
        array[coiny][coinx] = 'O';
        array[playery][playerx] = '#';
        for (int y = 0; y < 22; y++) {
            for (int x = 0; x < 48; x++) {
                std::cout << array[y][x];
            }
            std::cout << '\n';
        }
       

        std::cout << "coins: " << coin << '\n';
        std::cout << "total coins: " << tc << '\n';
        std::cout << "blocks: " << blocks << '\n';
        if (debug) {
            std::cout << "coin at: " << coinx << ", " << coiny;
        }
        
        input = _getch();
        if (coinx == playerx and coiny == playery and input == 'e') {
            coin++;
            tc++;
            array[coiny][coinx] = ' ';
            coinx = randomn(1, 46);
            coiny = randomn(1, 20);
        }
        array[playery][playerx] = ' ';
        array[coiny][coinx] = ' ';
        if (input == 'w' && playery > 1 && array[playery - 1][playerx] != '@') { playery--; }
        else if (input == 'a' && playerx > 1 && array[playery][playerx - 1] != '@') playerx--;
        else if (input == 's' && playery < 20 && array[playery + 1][playerx] != '@') playery++;
        else if (input == 'd' && playerx < 46 && array[playery][playerx + 1] != '@') playerx++;
        else if (input == 'r' && array[playery + 1][playerx] == '@') { blocks++;
        array[playery + 1][playerx] = ' '; }
        else if (input == 'q' && array[playery + 1][playerx] == ' ' && blocks > 0) {
            array[playery + 1][playerx] = '@';
            blocks--;
        }
        else if (input == 'f') {
            blocks += coin;
            coin = 0;
        }
        else if (input == 'b') {
            debug = true;
        }
        else if (debug) {
            if (input == 't') {
                playerx = coinx;
                playery = coiny;
            }
            else if (input == 'g') {
                blocks++;
                coin++;
            }
            else if (input == 'k') {
                myFunction();
            }
        }
        array[playery][playerx] = '#';
        system("cls");
    };
}