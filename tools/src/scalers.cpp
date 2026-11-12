#include<scalers.h>
namespace eml
{
double min_max_scaler(double value,double min,double max)
{
return (value-min)/(max-min);
}
}