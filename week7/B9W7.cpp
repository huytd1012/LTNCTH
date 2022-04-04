void reverse(char *s) {
    char* tmp = new char[50];
    for( int i = 0; i < strlen(s); ++i )
        tmp[strlen(s)-i-1] = s[i];
    for( int i = 0; i < strlen(s); ++i )
    	s[i] = tmp[i];
}
