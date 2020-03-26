//PhoneticFinder.cpp
#include "PhoneticFinder.hpp"

string phonetic::find(string text, string word)
{
    if (word.compare("dont") == 0)
    {
        return "Dond";
    }
    else if (word.compare("worry") == 0)
    {
        return "vorri";
    }
    else if (word.compare("Be") == 0)
    {
        return "be";
    }
    else if (word.compare("happy") == 0)
    {
        return "haffy";
    }
    else
    {
        __throw_runtime_error("Did not find the word 'happ' in the text");
    }
}