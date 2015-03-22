#include <iostream>
#include <cstring>
using namespace std;

const char VOWEL[5]={'a','e','i','o','u'};

char c;
int vowel(0), consonant(0),  space(0), digit(0), others(0);

inline bool isVowel(const char& c) 
{ 
    char lowerc=tolower(c);
    for (int i=0;i<5;++i)
      if (lowerc == VOWEL[i])
        return true;
    return false;
}

inline bool isConsonant(const char& c) { return isalpha(c) && !isVowel(c); }
inline bool isSpace(const char& c) { return c==' '; }
inline bool isOthers(const char& c) { return !isalnum(c) && !isSpace(c); }

int main()
{
    while (1)
    {
        cin.get(c);
        if (isVowel(c)) ++vowel;
        else
          if (isConsonant(c)) ++consonant;
          else
            if (isSpace(c)) ++space;
            else
              if (isdigit(c)) ++digit;
              else
                ++others;
        if (c=='.') break;
    }
    
    cout<<vowel<<' '<<consonant<<' '<<space<<' '<<digit<<' '<<others<<endl;

    return 0;
}
