#include "storage.hpp"

Storage::Storage(int n, std::string snacks[]) {
    for (int i = 0; i < n; i++) {
        storage.push_back(snacks[i]);
    }
}

Storage::Storage(std::vector<std::string> snacks) {
    storage = snacks;
}

void Storage::Add(std::string snack) {
    storage.push_back(snack);
}

void Storage::Set(size_t index, std::string snack) {
    if (index < storage.size()) {
        storage[index] = snack;
    }
}

std::string Storage::Get(size_t index) {
    if (index < storage.size()) {
        return storage[index];
    }
    else {
        return "";
    }
}

void Storage::Eat(size_t index) {
    if (index < storage.size()) {
        storage[index] = "";
    }
}

size_t Storage::Size() {
    return storage.size();
}