#include "Bureaucrat.hpp"

int main()
{
    // Valid
    Bureaucrat arlindo("Arlindo", 15);

    // Promotion
    std::cout << arlindo << std::endl;

    arlindo.increment_grade();

    std::cout << arlindo << std::endl;

    // Demotion
    std::cout << arlindo << std::endl;

    arlindo.decrement_grade();

    std::cout << arlindo << std::endl;

    // Almost fired
    try{
        arlindo.setGrade(158);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << arlindo << std::endl;

    // More than the CTO
    try{
        arlindo.setGrade(-100);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << arlindo << std::endl;

    // To Heaven to Hell
    try{
        for (int i = 0; i < 150; ++i)
            arlindo.decrement_grade();
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << arlindo << std::endl;

// -----------------
    // Invalid 
    // try to create a lower Bureaucrat
    try {
        Bureaucrat gino("Gino", 164);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

// -----------------
    // try to create a Highier Bureaucrat
    try {
        Bureaucrat glenda("Glenda", -1);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    // testing get and set
    std::cout << "  This is " << arlindo.getName() << " and it has the grade: " << arlindo.getGrade() << std::endl;
}