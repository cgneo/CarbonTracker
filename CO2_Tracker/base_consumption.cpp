#include "base_consumption.h"

Base_Consumption::Base_Consumption( int userId)
{
    this->userId = userId;
    base_consumptionId = userId;
    consumptionId = userId;
    base_consumption = calculate_base_consumption();//Args missing

}
