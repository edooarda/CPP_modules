#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>{
    public:
        MutantStack() = default;
        MutantStack(const MutantStack& other) = default;
        MutantStack& operator=(MutantStack& other) = default;
        ~MutantStack() = default;

        typedef typename std::deque<T>::iterator iterator;

        iterator begin()
        {
            return this->c.begin();
        }

        iterator end()
        {
            return this->c.end();
        }

        typedef typename std::deque<T>::const_iterator const_iterator;

        const_iterator begin() const
        {
            return this->c.begin();
        }

        const_iterator end() const
        {
            return this->c.end();
        }
};

#endif