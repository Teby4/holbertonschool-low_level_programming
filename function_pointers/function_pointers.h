#ifndef functions_pointer_h
#define functions_pointer_h

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
