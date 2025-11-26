#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
}

PmergeMe::PmergeMe(char **argv){
    validateInput(argv);
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::validateInput(char **argv)
{
    int i = 1;
    while(argv[i])
    {
        int j = 0;
        while(argv[i][j])
        {
            if(!isdigit(argv[i][j]))
                throw std::invalid_argument("Not a number");
            j++;
        }
        i++;
    }

    i = 1;
    while(argv[i])
    {
        long int number = std::stol(argv[i]);
        if(number > INT_MAX)
            throw std::invalid_argument("Long than MAX_INT");
        i++;
    }
}

static int jacobS(int n)
{
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    
    int previous = 0;
    int current = 1;
    for (int i = 2; i <= n; ++i)
    {
        int next = current + 2 * previous;
        previous = current;
        current = next;
    }
    return (current);
}

static bool compareBySecond(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second;
}

// ************************* Vector *******************************************

static void vecBinaryInsert(std::vector<int>& mainChain, int target_number, size_t start, size_t end)
{
    if(start >= end)
    {
        mainChain.insert(mainChain.begin() + start, target_number);
        return ;
    }

    size_t mid = start + (end - start)/2;

    if (mainChain[mid] < target_number)
    {
        vecBinaryInsert(mainChain, target_number, mid + 1, end);
    }
    else if (mainChain[mid] > target_number)
    {
        vecBinaryInsert(mainChain, target_number, start, mid);
    }
    else
    {
        // duplicates
        mainChain.insert(mainChain.begin() + mid, target_number);
        return ;
    }
}

static void vecInsertAndSort(std::vector<int>& mainChain,std::vector<int>& pendChain)
{
    if(pendChain.empty())
        return ;

    auto min_int = std::min_element(pendChain.begin(), pendChain.end());
    int min_number = *min_int;

    mainChain.insert(mainChain.begin(), min_number);
    pendChain.erase(min_int);

    int jacobindex = 2;
    while(!pendChain.empty())
    {
        size_t len = pendChain.size();
        size_t j = jacobS(jacobindex);
        if (j >= len)
            j = len - 1;

        auto targetit = pendChain.begin();
        std::advance(targetit, j);

        vecBinaryInsert(mainChain, *targetit, 0, mainChain.size());
        pendChain.erase(targetit);
        jacobindex++;
    }
}

static void vecPairAndSort(std::vector<int>& input, std::vector<int>& mainChain, std::vector<int>& pendChain)
{
    std::vector<std::pair<int, int>> group_pairs;
    bool has_leftover = false;
    int leftover_number = 0;

    if (input.size() % 2 == 1)
    {
        has_leftover = true;
        leftover_number = input.back();
        input.pop_back();
    }

    size_t i = 0;
    while(i < input.size())
    {
        int a = input[i];
        int b = input[i + 1];
        if (a > b)
        {
            group_pairs.emplace_back(std::make_pair(b, a));
        }
        else {
            group_pairs.emplace_back(std::make_pair(a, b));
        }
        i+=2;
    }

    std::sort(group_pairs.begin(), group_pairs.end(), compareBySecond);

    for (const auto& pair : group_pairs)
    {
        mainChain.push_back(pair.second);
        pendChain.push_back(pair.first);
    }

    if (has_leftover)
        pendChain.push_back(leftover_number);
}

std::vector<int> PmergeMe::vecSort(std::vector<int> container)
{
    std::vector<int> mainChain;
    std::vector<int> pendChain;

    vecPairAndSort(container, mainChain, pendChain);
    // printFunction(" MAIN CHAIN ", mainChain);
    // printFunction(" PEND CHAIN ", pendChain);
    vecInsertAndSort(mainChain, pendChain);

    return (mainChain);
}

std::chrono::microseconds PmergeMe::vecFordJohnsonAlgo(std::vector<int>& vec)
{
    if (vec.size() <= 1)
        return std::chrono::microseconds(0);
    auto start = std::chrono::high_resolution_clock::now();

    vec = vecSort(vec);

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    return duration;
}

// ****************************** Deque *********************************************

static void deqBinaryInsert(std::deque<int>& mainChain, int target_number, size_t start, size_t end)
{
    if(start >= end)
    {
        mainChain.insert(mainChain.begin() + start, target_number);
        return ;
    }

    size_t mid = start + (end - start)/2;

    if (mainChain[mid] < target_number)
    {
        deqBinaryInsert(mainChain, target_number, mid + 1, end);
    }
    else if (mainChain[mid] > target_number)
    {
        deqBinaryInsert(mainChain, target_number, start, mid);
    }
    else
    {
        // duplicates
        mainChain.insert(mainChain.begin() + mid, target_number);
        return ;
    }
}

static void deqInsertAndSort(std::deque<int>& mainChain,std::deque<int>& pendChain)
{
    if(pendChain.empty())
        return ;

    auto min_int = std::min_element(pendChain.begin(), pendChain.end());
    int min_number = *min_int;

    mainChain.push_front(min_number);
    pendChain.erase(min_int);

    int jacobindex = 2;
    while(!pendChain.empty())
    {
        size_t len = pendChain.size();
        size_t j = jacobS(jacobindex);
        if (j >= len)
            j = len - 1;

        auto targetit = pendChain.begin();
        std::advance(targetit, j);

        deqBinaryInsert(mainChain, *targetit, 0, mainChain.size());
        pendChain.erase(targetit);
        jacobindex++;
    }
}

static void deqPairAndSort(std::deque<int>& input, std::deque<int>& mainChain, std::deque<int>& pendChain)
{
    std::deque<std::pair<int, int>> group_pairs;
    bool has_leftover = false;
    int leftover_number = 0;

    if (input.size() % 2 == 1)
    {
        has_leftover = true;
        leftover_number = input.back();
        input.pop_back();
    }

    size_t i = 0;
    while(i < input.size())
    {
        int a = input[i];
        int b = input[i + 1];
        if (a > b)
        {
            group_pairs.emplace_back(std::make_pair(b, a));
        }
        else {
            group_pairs.emplace_back(std::make_pair(a, b));
        }
        i+=2;
    }

    std::sort(group_pairs.begin(), group_pairs.end(), compareBySecond);

    for (const auto& pair : group_pairs)
    {
        mainChain.push_back(pair.second);
        pendChain.push_back(pair.first);
    }

    if (has_leftover)
        pendChain.push_back(leftover_number);
}

std::deque<int> PmergeMe::deqSort(std::deque<int> container)
{
    std::deque<int> mainChain;
    std::deque<int> pendChain;

    deqPairAndSort(container, mainChain, pendChain);
    // printFunction(" MAIN CHAIN ", mainChain);
    // printFunction(" PEND CHAIN ", pendChain);
    deqInsertAndSort(mainChain, pendChain);

    return (mainChain);
}

std::chrono::microseconds PmergeMe::deqFordJohnsonAlgo(std::deque<int>& deq)
{
    if (deq.size() <= 1)
        return std::chrono::microseconds(0);
    auto start = std::chrono::high_resolution_clock::now();

    deq = deqSort(deq);

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    return duration;
}