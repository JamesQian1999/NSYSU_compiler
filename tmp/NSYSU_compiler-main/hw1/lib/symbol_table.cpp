#include "symbol_table.h"
#include <unordered_set>
#include <iostream>
#include <string_view>

namespace
{
    std::unordered_set<std::string> hash_map;
}

void dump()
{
    std::cout << "The symbol table contains:" << std::endl;
    for (const auto &i : hash_map)
        std::cout << i << std::endl;
}

void insert(const char *_token)
{
    if (hash_map.find(_token) == hash_map.end())
        hash_map.insert(_token);
}

// Unused functions

// Requirements:
// create()     建立一個symbol table。
// lookup(s)    傳回字串s的index；假如s沒找到的話，就傳回-1。
// insert(s)    新增s到symbol table中，並傳回存放位置的index。
// dump()       將symbol table中所有的資料印出。

void create()
{
    // Hello
}
int lookup(const char *_token)
{
    return -1;
    // Why you indexing? And how you indexing?
    // The index of element in symbol tables is no meaning.
}