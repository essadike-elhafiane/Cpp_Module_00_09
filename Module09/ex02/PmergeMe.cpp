#include "PmergeMe.hpp"

void    PmergeMe::addNumber(std::string s)
{
    for (size_t i = 0; i < s.size(); i++)
        if (!isdigit(s[i]) && s[i] != ' ')
            throw "Error: is not digit !";
    double value = atof(s.c_str());
    if (INT_MAX < value)
        throw "Error number to large";
    vect.push_back((int)value);
    deq.push_back((int)value);
}

PmergeMe::PmergeMe(/* args */)
{

}

PmergeMe::~PmergeMe()
{
}
PmergeMe::PmergeMe(const PmergeMe* Pm)
{
    *this = Pm;
}
PmergeMe& PmergeMe::operator = (const PmergeMe& Pm)
{
    vect = Pm.vect;
    deq = Pm.deq;
    return *this;
}


void    PmergeMe::binary_insertion(int key)
{
    if (key == 0)
    {
        for (size_t i = 0; i < s2.size(); i++)
        {
            std::vector<int>::iterator itr = std::lower_bound(s1.begin(), s1.end(), s2[i]);
            s1.insert(itr, s2[i]);
        }
        if (vect.size() % 2 != 0)
        {
            std::vector<int>::iterator itr = std::lower_bound(s1.begin(), s1.end(), vect[vect.size() - 1]);
            s1.insert(itr, vect[vect.size() - 1]);
        }
    }
    else
    {
        for (size_t i = 0; i < s2.size(); i++)
        {
            std::deque<int>::iterator itr = std::lower_bound(s11.begin(), s11.end(), s22[i]);
            s11.insert(itr, s22[i]);
        }
        if (deq.size() % 2 != 0)
        {
            std::deque<int>::iterator itr = std::lower_bound(s11.begin(), s11.end(), deq[deq.size() - 1]);
            s11.insert(itr, deq[deq.size() - 1]);
        }
    }
    
}

void PmergeMe::merge()
{
    std::cout << "Before:  " ;
    for (size_t i = 0; i < vect.size(); i++)
        std::cout << vect[i] << " ";
    std::cout << std::endl;
    clock_t start = clock();
    this->make_pairr(0);
    sort_pair(vect_pair);
    creat_2_container(vect_pair, 0);
    binary_insertion(0);
    clock_t end = clock();
    std::cout << "After:   " ;
    for (size_t i = 0; i < s1.size(); i++)
        std::cout << s1[i] << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of 3000 elements with std::vector : " << static_cast<double>(end - start) << std::endl;
    start = clock();
    this->make_pairr(1);
    sort_pair(deq_pair);
    creat_2_container(vect_pair, 1);
    binary_insertion(1);
    end = clock();
    std::cout << "Time to process a range of 3000 elements with std::deque  : " << static_cast<double>(end - start) << std::endl;
    // for (size_t i = 0; i < s1.size() - 1; i++)
    // {
    //     if (s1[i] > s1[i + 1])
    //         exit(1);
    // }
    // for (size_t i = 0; i < s11.size() - 1; i++)
    // {
    //     if (s11[i] > s11[i + 1])
    //         exit(1);
    // }
    // print_pair();
}

void PmergeMe::make_pairr(int key)
{
    if (key == 0)
    {
        size_t count = vect.size();
        if (count % 2 != 0)
            count--;
        for (size_t i = 0; i < count; i += 2)
            vect_pair.push_back(std::make_pair(vect[i], vect[i + 1]));
    }
    else
    {
        size_t count = deq.size();
        if (count % 2 != 0)
            count--;
        for (size_t i = 0; i < count; i += 2)
            deq_pair.push_back(std::make_pair(deq[i], deq[i + 1]));
    }
}
template <typename T>
void PmergeMe::creat_2_container(T& container, int key)
{
    if (key == 0)
    {   
        for (size_t i = 0; i < container.size(); i++)
        {
            s1.push_back(container[i].first);
            s2.push_back(container[i].second);
        }
    }
    else
    {
        for (size_t i = 0; i < container.size(); i++)
        {
            s11.push_back(container[i].first);
            s22.push_back(container[i].second);
        }
    } 
}

template<typename T>
void PmergeMe::sort_all_pairs(T& container)
{
    size_t i = 0;
    if (container.size() <= 1)
        return;
    while(i < container.size() - 1)
    {
        if (container[i].first > container[i + 1].first)
        {
            int fisrt = container[i].first;
            int second = container[i].second;
            container[i] = container[i + 1];
            container[i + 1].first = fisrt;
            container[i + 1].second = second;
            i = 0;
            continue;
        }
        i++;
    }
}

template <typename T>
void PmergeMe::sort_pair(T& container)
{
    for (size_t i = 0; i < container.size(); i++)
    {
        if(container[i].first < container[i].second)
        {
            int tmp = container[i].first;
            container[i].first = container[i].second;
            container[i].second = tmp;
        }
    }
    sort_all_pairs(container);
}
