#ifndef THEGRID_H
#define THEGRID_H

template <typename T, typename U>
class theGrid
{
public:
    theGrid(int rows = 20, int cols = 20);
    ~theGrid();
    void call(U fptr);
private:
    T **grid;
    int x, y;
};

template <typename T, typename U>
theGrid<T,U>::theGrid(int rows, int cols)
{
    grid = new T*[x = rows];
    for(int i=0; i<x; i++)
        grid[i] = new T[y=cols];
}

template <typename T, typename U>
void theGrid<T,U>::call(U fptr)
{
    for(int i=0; i<x; i++)
        for(int j=0; j<y; j++)
            fptr(grid[i][j]);
}

template <typename T, typename U>
theGrid<T,U>::~theGrid()
{
    for(int i=0; i<x; i++)
        delete [] grid[i];
}

#endif // THEGRID_H
