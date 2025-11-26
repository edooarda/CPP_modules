#include "PmergeMe.hpp"

// https://dev.to/emuminov/human-explanation-and-step-by-step-visualisation-of-the-ford-johnson-algorithm-5g91

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cout << "Wrong amount of arguments" << std::endl;
        return 1;
    }

    try {
        PmergeMe input(argv);

        std::vector<int> vec_container = input.parseNumbers<std::vector<int> >(argc, argv);
        input.printFunction("Before Vector", vec_container);

        std::deque<int> deq_container = input.parseNumbers<std::deque<int> >(argc, argv);
        input.printFunction("Before Deque", deq_container);

        std::chrono::microseconds duration_v = input.vecFordJohnsonAlgo(vec_container);
        std::chrono::microseconds duration_l = input.deqFordJohnsonAlgo(deq_container);

        input.printFunction("After Vector", vec_container);
        input.printFunction("After Deque", deq_container);
        std::cout << "Time to process a range of " << (argc - 1) << " elements with std::vector: " << duration_v.count() << "µs" << std::endl;;
        std::cout << "Time to process a range of " << (argc - 1) << " elements with std::deque: " << duration_l.count() << "µs" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

}