string pigLatin(string word)
{
    string a = "way", b = "ay";
    if( word[0] == 'u' || word[0] == 'e' || word[0] == 'o' || word[0] == 'a' || word[0] == 'i' ) 
        return ( word + a );
    else {
        word += word[0] + b;
        string s = "";
        for( int i = 1; i < word.size(); ++i )
            s += word[i];
        return s;
    }
}
