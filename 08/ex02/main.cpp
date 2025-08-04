#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "This on top: " << mstack.top() << std::endl;
    mstack.pop(); // remove 17
    std::cout << "This is the size of: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "\nThis is the last one add: " << s.top() << std::endl;

    std::cout << "\n ========================= CONST TEST =============" << std::endl;
    MutantStack<int> temp;
    temp.push(5);
    temp.push(17);
    temp.pop(); 
    temp.push(3);
    temp.push(5);
    temp.push(737);
    temp.push(0);

    const MutantStack<int> cmstack(temp);
    std::cout << "This on top: " << cmstack.top() << std::endl;
    std::cout << "This is the size of: " << cmstack.size() << std::endl;
    MutantStack<int>::const_iterator cit = cmstack.begin();
    MutantStack<int>::const_iterator cite = cmstack.end();
    ++cit;
    --cit;
    while (cit != cite)
    {
        std::cout << *cit << std::endl;
        ++cit;
    }

    std::cout << "===================LIST====================" << std::endl;

    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << lst.back() << std::endl;
    lst.pop_back();
    std::cout << lst.size() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::list<int>::iterator it1 = lst.begin();
    std::list<int>::iterator ite1 = lst.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }

    return 0;
}