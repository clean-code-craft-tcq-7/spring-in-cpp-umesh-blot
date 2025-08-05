#include "stats.h"
#include <vector>
#include <cfloat>
#include <cmath>

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& data) {
        Stats stats;
        if (data.empty()) {
            stats.average = 0.0f;
            stats.min = 0.0f;
            stats.max = 0.0f;
            return stats;
        }
        stats.min = data[0];
        stats.max = data[0];
        float sum = 0.0f;
        for (float value : data) {
            if (value < stats.min) stats.min = value;
            if (value > stats.max) stats.max = value;
            sum += value;
        }
        stats.average = sum / data.size();
        return stats;
    }
}
