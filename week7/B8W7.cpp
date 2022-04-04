int** transpose(int** matrix, int nRows, int nCols)
{
    int** tmatrix = new int* [nCols];
    for( int i = 0; i < nCols; ++i )
        tmatrix[i] = new int[nRows];
    for( int i = 0; i < nRows; ++i )
    for( int j = 0; j < nCols; ++j )
        tmatrix[j][i] = matrix[i][j];
    return tmatrix;
}
