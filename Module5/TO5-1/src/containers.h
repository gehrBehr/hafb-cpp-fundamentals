#ifndef CONTAINERS_H_
#define CONTAINERS_H_

#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <string>

// TODO: Structure for data from file
struct Data
{
    int id;
    std::string gender, school, state;
};

// TODO: Define other functions for data analytics
//
void Display_by_State(std::map<std::string, int> &st_count);

void LoadData(std::vector<Data>& data, const std::string& input_file);


#endif /* !CONTAINERS_H_ */
