#ifndef __SYMBOL_TBALE_H
#define __SYMBOL_TBALE_H

#ifdef __cplusplus
extern "C"
{
#endif
    void create();
    int lookup(const char *_token);

    void dump();
    void insert(const char *_token);

#ifdef __cplusplus
}
#endif

#endif