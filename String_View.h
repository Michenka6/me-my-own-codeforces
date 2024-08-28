#ifndef STRING_VIEW_H
#define STRING_VIEW_H

typedef struct {
    char*  data;
    size_t length;
} String_View;

typedef struct {
    char*  data;
    size_t length;
    size_t capacity;
} String_Builder;

#endif // STRING_VIEW_H

#ifdef STRING_VIEW_IMPLEMENTATION

#endif // STRING_VIEW_IMPLEMENTATION
