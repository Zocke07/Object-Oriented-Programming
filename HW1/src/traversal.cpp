#include <iostream>
#include <vector>

#include "../include/traversal.hpp"

bool traversal(std::size_t n, int arr[]) {
    std::vector<bool> visited(n, false);
    std::size_t current = 0;

    for (std::size_t i = 0; i < n; i++) {
        if (current >= n || visited[current]) {
            return false;
        }
        visited[current] = true;
        current = arr[current];
    }
    return true;
}