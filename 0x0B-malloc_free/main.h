#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size,char c);
int _putchar(char c);
char *_strdup(char *str);                
char *str_cocat(char *s1, char *s2);               
int **alloc_grd(int width, int height);               
void free_grid(int **grid, int height);                
char *argstostr(int ac, char **av);

#endif
