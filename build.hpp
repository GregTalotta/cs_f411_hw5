// build.hpp
// Greg Talotta
// 15 Nov 2020
//
// For CS 411 Fall 2020
// Used in Assignment 5
#ifndef FILE_BUILD_HPP_INCLUDED
#define FILE_BUILD_HPP_INCLUDED
#include <vector>
#include <algorithm>
using Bridge = std::vector<int>;

int build(int height, int width, const std::vector<Bridge> &bridges);
#endif //#ifndef FILE_BUILD_HPP_INCLUDED