#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
