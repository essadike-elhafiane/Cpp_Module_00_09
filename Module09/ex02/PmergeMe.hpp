#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <iostream>
#include <utility>
#include <vector>
#include <stdio.h>
#include <deque>
#include <sys/time.h>

class PmergeMe
{
    private:
        std::vector<std::pair<int, int> > vect_pair;
        std::vector<int> vect;
        std::vector<int> s1;
        std::vector<int> s2;
        std::deque<int> deq;
        std::deque<int> s11;
        std::deque<int> s22;
        std::deque<std::pair<int, int> > deq_pair;
    public:
        PmergeMe(/* args */);
        ~PmergeMe();
        PmergeMe(const PmergeMe* Pm);
        PmergeMe& operator = (const PmergeMe& Pm);
        void    addNumber(std::string s);
        void make_pairr(int key);
        template<typename T>
        void sort_all_pairs(T& container);
        template <typename T>
        void sort_pair(T& container);
        template <typename T>
        void creat_2_container(T& container, int key);
        void binary_insertion(int key);
        void merge();
};

#endif

// void print_pair()
// {
//     std::cout << "vector_pair : ";
//     for (size_t i = 0; i < vect_pair.size(); i++)
//     {
//         std::cout << vect_pair[i].first << " " << vect_pair[i].second << " ";
//     }
//     std::cout << std::endl;
//     std::cout << "vector_par_s1 : ";
//     for (size_t i = 0; i < s1.size(); i++)
//     {
//        std::cout << s1[i] << " ";
//     }
//     std::cout << std::endl;
//     std::cout << "vector_par_s2 : ";
//     for (size_t i = 0; i < s2.size(); i++)
//     {
//        std::cout << s2[i] << " ";
//     }
//     std::cout << std::endl;
    
//     std::cout << "deque_pair : ";
//     for (size_t i = 0; i < deq_pair.size(); i++)
//     {
//          std::cout << deq_pair[i].first << " " << deq_pair[i].second << " ";
//     }
//     std::cout << std::endl;
//     std::cout << "deque_par_s1 : ";
//     for (size_t i = 0; i < s11.size(); i++)
//     {
//        std::cout << s11[i] << " ";
//     }
//     std::cout << std::endl;
//     std::cout << "deque_par_s2 : ";
//     for (size_t i = 0; i < s22.size(); i++)
//     {
//        std::cout << s22[i] << " ";
//     }
//     std::cout << std::endl;

// }