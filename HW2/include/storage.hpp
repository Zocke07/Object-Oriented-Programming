#ifndef STORAGE_HPP
#define STORAGE_HPP

#include <string>
#include <vector>

class Storage {
public:
    std::vector<std::string> storage;
    Storage(int n, std::string snacks[]);
    Storage(std::vector<std::string> snacks);
    void Add(std::string snack);
    void Set(size_t index, std::string snack);
    std::string Get(size_t index);
    void Eat(size_t index);
    size_t Size();
};

#endif
