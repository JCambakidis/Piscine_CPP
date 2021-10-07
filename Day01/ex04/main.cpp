#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>  

void replace_strings(std::ifstream &file, std::string newfile_name, std::string to_find, std::string replace_by)
{
	std::string line;
	std::string new_text;
	int	found = -1;
	
	if (file.is_open())
	{
		std::ofstream outfile (newfile_name.append(".replace"));
		while (getline(file, line))
		{
			while (1)
			{
				found = line.find(to_find, found + 1);
				if (found == -1)
					break ;
				line.erase(found, to_find.length());
				line.insert(found, replace_by);
			}
			new_text.append(line);
			outfile << line << std::endl;
		}
		outfile.close();
	}
}

int main(int argc, char const *argv[])
{
	if (argc == 4)
	{
		std::ifstream file;
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string newfile_name = argv[1];
		file.open(argv[1]);
		if (file.fail())
		{
			std::cout << "This file doesn't exist" << std::endl;
			return 0;
		}
		replace_strings(file, newfile_name, s1, s2);
		file.close();
	}
	else
		std::cout << "Invalid arguments : ./replace filename s1 s2" << std::endl;
	return 0;
}