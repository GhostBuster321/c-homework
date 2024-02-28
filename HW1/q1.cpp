#include<iostream> 
using namespace std;

double WeightedAverage(double values[], double weights[]){
    double sumMul = 0;
    double sumweight = 0;
    for(int i = 0; i < 4; i++){
        sumMul += (values[i] * weights[i]);
        sumweight += weights[i];
    }
    return (sumMul / sumweight);
}

int main()
{

    double values[] = {2.0, 3.0, 4.0, 5.0};
    double weights[] = {0.2, 0.3, 0.4, 0.5};
    cout << WeightedAverage(values, weights);

return 0;
}
