#include <thrust/execution_policy.h>
#include <thrust/universal_vector.h>
#include <thrust/transform.h>
#include <cstdio>

int main()
{
    float k = 0.5;
    float am_temp = 20;
    thrust::univesal_vector<float> temp{42, 24, 50};
    auto transformation = [=] __host__ __device__ (float temp) {return temp + k * (am_temp - temp);}
    printf("step temp[0] temp[1] temp[2]\n");

    

}