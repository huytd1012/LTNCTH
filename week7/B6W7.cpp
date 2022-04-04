int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2)
{
    int* merge = new int[lenArr1 + lenArr2];
    for( int i = 0; i < lenArr1; ++i )
        merge[i] = firstArr[i];
    for( int i = lenArr1; i < lenArr1 + lenArr2; ++i )
        merge[i] = secondArr[i-lenArr1];
    if( firstArr[1] > firstArr[2] ) sort( merge , merge + lenArr1 + lenArr2 , greater<int>() );
    else sort( merge , merge + lenArr1 + lenArr2 );
    return merge;
}
