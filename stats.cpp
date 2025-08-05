#include "stats.h"
#include <vector>
#include <cfloat>
#include <cmath>

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& data) {
        Stats stats;
        if (data.empty()) {
            stats.average = NAN;
            stats.min = NAN;
            stats.max = NAN;
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
