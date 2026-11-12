#ifndef __UTILS__
#define __UTILS__
#include<vector>
#include<string>
#include<stdint.h>
namespace eml
{
double to_double(const std::string &str);
void trim(std::string &str);
std::vector<std::string> split(const std::string &str,const char delimiter,uint32_t &delimiter_count);
std::vector<double> split(const std::string &str,const char delimiter);
}
#endif