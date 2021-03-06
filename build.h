// build.h
// Greg Talotta
// 15 Nov 2020
//
// For CS 411 Fall 2020
// Used in Assignment 5
#ifndef FILE_BUILD_H_INCLUDED
#define FILE_BUILD_H_INCLUDED
#include <vector>
#include <algorithm>
using Bridge = std::vector<int>;

int build(int w, int e, const std::vector<Bridge> &bridges);
#endif //#ifndef FILE_BUILD_H_INCLUDED