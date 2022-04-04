void rFilter(char *s) {
    int i = strlen(s) - 1;
    while( tolower(s[i]) <= 'a' || tolower(s[i]) >= 'z' )
    {
        s[i] = '_';
        i--;
    }
}
