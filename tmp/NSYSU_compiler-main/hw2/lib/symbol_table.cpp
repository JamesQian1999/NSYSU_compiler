#include "symbol_table.h"
#include <unordered_set>
#include <string>
#include <vector>
#include <iostream>
namespace
{
    using Hash_map = std::unordered_set<std::string>;
    Hash_map symbol_table;
    std::vector<Hash_map> stack;
    bool debugging = false;
}

int insert(const char *_token)
{
    if (debugging)
        std::cerr << "get " << _token << std::endl;
    auto res = (stack.back().find(_token) == stack.back().end()) - 1;
    if (!res)
        stack.back().insert(_token);
    return res;
}

void pop()
{
    stack.pop_back();
}

void push()
{
    stack.push_back(Hash_map());
}

void set_dbg(int value)
{
    debugging = static_cast<bool>(value);
}