/*
** EPITECH PROJECT, 2019
** str_to_word_array.h
** File description:
** for str_to_word_array function
*/

#ifndef STR_TO_WORD_ARRAY_H_
#define STR_TO_WORD_ARRAY_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int count_c_in_str(char *str, char c);
int count_before_c_in_str(char *str, char c);
char *my_strndup(char *str, int size);
char **str_to_word_array(char *str, char c);

#endif
