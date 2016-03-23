/*
 * comp_template.h
 * Copyright (C) 2016 blueyi <blueyi@debian>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef COMP_TEMPLATE_H
#define COMP_TEMPLATE_H
#include <string>
#include <cstring>
#include <functional>

template <typename T> int compare(const T& v1, const T& v2)
{
    if (std::less<T>()(v1, v2)) return -1;
    else if (std::less<T>()(v2, v1)) return 1;
    else return 0;
}

template<unsigned N, unsigned M> int compare(const char (&v1)[N], const char (&v2)[M])
{
    return strcmp(v1, v2);
}


#endif /* !COMP_TEMPLATE_H */
