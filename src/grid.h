#pragma once 
#include <vector>
#include <raylib.h>

class Grid
{
public:
    Grid();

    void Initialize();
    bool IsCellOutside(int row, int column);
    bool IsCellEmpty(int row, int column);
    void Print();
    void Draw();
    int grid[20][10];
    int ClearFullRows();
private:
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows);
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;
};