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
        void make_pairr(int key)
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

        void print_pair()
        {
            std::cout << "vector_pair : ";
            for (size_t i = 0; i < vect_pair.size(); i++)
            {
                std::cout << vect_pair[i].first << " " << vect_pair[i].second << " ";
            }
            std::cout << std::endl;
            std::cout << "vector_par_s1 : ";
            for (size_t i = 0; i < s1.size(); i++)
            {
               std::cout << s1[i] << " ";
            }
            std::cout << std::endl;
            std::cout << "vector_par_s2 : ";
            for (size_t i = 0; i < s2.size(); i++)
            {
               std::cout << s2[i] << " ";
            }
            std::cout << std::endl;
            
            std::cout << "deque_pair : ";
            for (size_t i = 0; i < deq_pair.size(); i++)
            {
                 std::cout << deq_pair[i].first << " " << deq_pair[i].second << " ";
            }
            std::cout << std::endl;
            std::cout << "deque_par_s1 : ";
            for (size_t i = 0; i < s11.size(); i++)
            {
               std::cout << s11[i] << " ";
            }
            std::cout << std::endl;
            std::cout << "deque_par_s2 : ";
            for (size_t i = 0; i < s22.size(); i++)
            {
               std::cout << s22[i] << " ";
            }
            std::cout << std::endl;

        }

        template<typename T>
        void sort_all_pairs(T& container)
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
        void sort_pair(T& container)
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

        template <typename T>
        void creat_2_container(T& container, int key)
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

        void    binary_insertion(int key)
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

        void merge()
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
            for (size_t i = 0; i < s1.size() - 1; i++)
            {
                if (s1[i] > s1[i + 1])
                    exit(1);
            }
            for (size_t i = 0; i < s11.size() - 1; i++)
            {
                if (s11[i] > s11[i + 1])
                    exit(1);
            }
            // print_pair();
        }
        void print();
};

#endif