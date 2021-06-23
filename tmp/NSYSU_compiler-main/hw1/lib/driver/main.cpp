#include "../symbol_table.h"
#include <string>
#include <iostream>

int main()
{
    for (int i = 0; i < 1000; i++)
    {
        std::string s(1, char(i));
        insert(s.c_str());
    }
    dump();
    return 0;
}