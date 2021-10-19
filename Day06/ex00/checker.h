#ifndef CHECKER_H
# define CHECKER_H

# include "Convertion.hpp"

void	checkChar(Convertion convert, double d);
void	checkInt(Convertion convert, double d);
void	checkFloat(Convertion convert, double d, int precision);
void	checkDouble(Convertion convert, double d, int precision);
int		getPrecision(const char *str);

#endif