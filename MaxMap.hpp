#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    auto it = data.find(search_term);
    if(it == data.end())
        return -1;
    float max = it->second.at(0);
    for(const auto& num : it->second) {
        if(num > max)
            max = num;
    }
    return max;
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    //implement your function here
    std::map<std::string, float> out_map;
    for(auto it : in_map) {
        float max = it.second.at(0);
        for(auto num : it.second) {
            if(num > max)
                max = num;
        }
        out_map.emplace(it.first, max);
    }
    return out_map;
}