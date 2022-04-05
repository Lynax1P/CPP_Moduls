#include <iostream>
#include <fstream>

int	replace(std::string file_name, std::string s1, std::string s2)
{
	if (s1.empty() || s2.empty()) 
	{
		std::cout << "Erorr! String is empty.\n"; 
		return (1);
	}
	std::fstream fd(file_name.c_str(), std::ios::in);
	if (!fd)
	{
		std::cerr << "Error! File!\n";
		return (1);
	}
	std::ofstream outfile(file_name + ".rep");
	if (!outfile)
	{
		std::cerr << "Error! Output file.\n";
		return (1);
	}
	std::string line;
	int		i;

	while(getline(fd, line, '\n')){
		if (!fd.eof())
			line += '\n';
		while ((i = line.find(s1)) != -1)
		{
			line.erase(i, s1.size());
			line.insert(i, s2);
		}
		outfile << line;
	}
	outfile.close();
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4 || !argv[1] || !argv[2] || !argv[3])
	{
		std::cout << "Error arguments.\n";
		return (1);
	}
	else
		if(!replace(std::string (argv[1]),
				std::string (argv[2]),
				std::string (argv[3])))
			std::cout << "Complete!";
		else
			return (1);	
	return (0);
}