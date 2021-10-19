#include "checker.h"

int		getPrecision(const char* str)
{
	std::string s = str;
	int i = 1;

	if (s.find('.') != std::string::npos)
	{
		std::string res = s.substr(s.find('.'));
		while (res[i] && std::isdigit(res[i]))
			i++;
		if (i - 1 <= 0)
			return 0;
		return i - 1;
	}
	return 1;
}