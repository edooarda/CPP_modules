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
        MutantStack& operator=(const MutantStack& other) = default;
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

        typedef typename std::deque<T>::reverse_iterator reverse_iterator;

        reverse_iterator rbegin()
        {
            return this->c.rbegin();
        }

        reverse_iterator rend()
        {
            return this->c.rend();
        }

        typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

        const_reverse_iterator rbegin() const
        {
            return this->c.rbegin();
        }

        const_reverse_iterator rend() const
        {
            return this->c.rend();
        }
};

#endif