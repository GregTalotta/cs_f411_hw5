// build.cpp
// Greg Talotta
// 15 Nov 2020
//
// For CS 411 Fall 2020
// Used in Assignment 5
#include "build.h"
using std::max;
using std::vector;

int build(int, int, const vector<Bridge> &bridges)
{
    int height = 0;
    for (auto i : bridges)
    {
        height = max(height, max(i[0], i[1]));
    }
    vector<vector<int>> toll_maxes(height + 1, std::vector<int>(height + 1, 0));
    vector<vector<int>> bridge_tolls(height + 1, std::vector<int>(height + 1, 0));
    for (auto i : bridges)
    {
        bridge_tolls[i[0]][i[1]] = max(bridge_tolls[i[0]][i[1]], i[2]);
    }
    toll_maxes[0][0] = bridge_tolls[0][0];
    for (int j = 1; j <= height; ++j)
    {
        toll_maxes[0][j] = max(toll_maxes[0][j - 1], bridge_tolls[0][j]);
    }
    for (int i = 1; i <= height; ++i)
    {
        toll_maxes[i][0] = max(toll_maxes[i - 1][0], bridge_tolls[i][0]);
        for (int j = 1; j <= height; ++j)
        {
            toll_maxes[i][j] = max(toll_maxes[i - 1][j - 1] + bridge_tolls[i][j], max(toll_maxes[i - 1][j], toll_maxes[i][j - 1]));
        }
    }
    return toll_maxes[height][height];
}
