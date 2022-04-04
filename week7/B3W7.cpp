void swap(int* a, int* b)
{
    int* tmp;
    tmp = new int;
    *tmp = *a;
    *a = *b;
    *b = *tmp;
}
