#include "../incl/ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    AForm::execute(executor);
    std::string filename = _target + "_shrubbery";
    std::ofstream ofs(filename);

    ofs << "      /\\      " << std::endl;
    ofs << "     /\\*\\     " << std::endl;
    ofs << "    /\\O\\*\\    " << std::endl;
    ofs << "   /*/\\/\\/\\   " << std::endl;
    ofs << "  /\\O\\/\\*\\/\\  " << std::endl;
    ofs << " /\\*\\/\\*\\/\\/\\ " << std::endl;
    ofs << "/\\O\\/\\/*/\\/O/\\" << std::endl;
    ofs << "      ||      " << std::endl;
    ofs << "      ||      " << std::endl;
    ofs << "      ||      " << std::endl;
    
}