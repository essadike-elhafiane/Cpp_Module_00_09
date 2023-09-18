#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    std::deque<int> f;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl << std::endl;
    mstack.pop();
    std::cout << mstack.top() << std::endl << std::endl;
    // std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.rbegin();
    MutantStack<int>::iterator ite = mstack.end();
    MutantStack<int>::const_iterator cite = mstack.end();
    std::cout << *cite ;
    // ++it;
    // --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        it++;
    }
    std::stack<int> s(mstack);
    MutantStack<int> m = mstack;
    std::cout << "gd" << *(m.begin()) ;
    return 0;
}
