#include<utils.h>
#include<string>
#include<algorithm>
#include<vector>
//#include<stdexcept>
#include<sstream>
namespace eml
{
double to_double(const std::string &str)
{
if(str.length()==0) throw std::invalid_argument(std::string("cannot convert empty string to double value"));
double value;
size_t index;
try
{
value=stod(str,&index);
if(str.c_str()[index]!='\0') throw std::invalid_argument(std::string("bad double value : ")+str);
}catch(std::invalid_argument i)
{
throw std::invalid_argument(std::string("bad double value : ")+str);
}
return value;
}
void trim(std::string &str)
{
str.erase(remove(str.begin(),str.end(),' '),str.end());
}
std::vector<std::string> split(const std::string &str,const char delimiter,uint32_t &delimiter_count)
{
std::vector<std::string> strings;
if(str.length()==0) return strings;
std::stringstream strm(str);
std::string part;
delimiter_count=0;
while(std::getline(strm,part,delimiter))
{
delimiter_count++;
strings.push_back(part);
}
if(str.c_str()[str.length()-1]!=delimiter) delimiter_count--;
return strings;
}
std::vector<double> split(const std::string &str,const char delimiter)
{
vector<double> doubles;
if(str.length()==0) return strings;
std::stringstream strm(str);
std::string part;
while(std::getline(strm,part,delimiter))
{
doubles.push_back(eml::to_double(part));
}
return doubles;
}
}