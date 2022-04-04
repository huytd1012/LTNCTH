int* getPointerToArray(int n)
{
    int *a;
    a = new int[n];
    for( int i = 0; i < n; ++i )
        cin >> a[i];
    return a;
}
