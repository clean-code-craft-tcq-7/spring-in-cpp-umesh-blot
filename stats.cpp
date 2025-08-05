#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& ) 
{
    //Implement statistics here
    ComputeStatistics(const std::vector<float>& data) {
    Stats stats;
    if (data.empty()) {
        stats.min = 0.0f;
        stats.max = 0.0f;
        stats.mean = 0.0f;
        stats.stddev = 0.0f;
        return stats;
    }
    else {
        float sum = 0.0f;
        float sum_squared = 0.0f;
        stats.min = data[0];
        stats.max = data[0];

        for (const auto& value : data) {
            if (value < stats.min) {
                stats.min = value;
            }
            if (value > stats.max) {
                stats.max = value;
            }
            sum += value;
            sum_squared += value * value;
        }

        stats.mean = sum / data.size();
    }
}

    
}
