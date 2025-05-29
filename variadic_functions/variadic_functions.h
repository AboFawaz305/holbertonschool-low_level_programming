#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct formats - represent a formating with its print function
 * @fmt: the format character
 * @print_function: the print functino for this format
 */
struct formater
{
  char fmt;
  void (*print_function)(va_list ap, char *sep);
};

/**
 * format_t - typedef for struct format
 */
typedef struct formater formater_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
