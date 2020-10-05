#include <iostream>
#include <conio.h>

char grid[10][10];

char uppercase(char input) {
    char character = toupper(input);
    return character;
}

void drawGrid() {
    for (int i{ 0 }; i < 10; i++) {
        for (int j{ 0 }; j < 10; j++) {
            if (j == 0 && i != 0) {
                std::cout << '\n';
            }
            std::cout << grid[i][j] << ' ';
        }
    }
}

int main()
{
    //char input{ 0 };
    int currentX = 0;
    int currentY = 0;

    for (int i{ 0 }; i < 10; i++) {
        for (int j{ 0 }; j < 10; j++) {
            grid[i][j] = '+';
        }
    }
    grid[currentY][currentX] = 'X';
    drawGrid();
    
    do {
        char input = _getch();
        system("cls");
        grid[currentY][currentX] = '+';
        if (uppercase(input) == 'S' && currentY != 9) {
            currentY += 1;
        }
        else if (uppercase(input) == 'W' && currentY != 0) {
            currentY -= 1;
        }
        else if (uppercase(input) == 'A' && currentX != 0) {
            currentX -= 1;
        }
        else if (uppercase(input) == 'D' && currentX != 9) {
            currentX += 1;
        }
        grid[currentY][currentX] = 'X';
        drawGrid();
    } while (true);
}
