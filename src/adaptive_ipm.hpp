#include <iostream>
#include <string>
#include <vector>
#include <atomic>


class AdaptiveIPM
{
private:
    std::atomic_bool use_imu;
    
public:
    AdaptiveIPM();
    ~AdaptiveIPM();
};

AdaptiveIPM::AdaptiveIPM(/* args */)
{
}

AdaptiveIPM::~AdaptiveIPM()
{
}

