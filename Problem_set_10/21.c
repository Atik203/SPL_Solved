#include <stdio.h>
#include <math.h>

void TakeInput(double array[], int num_of_elem)
{
    for (int i = 0; i < num_of_elem; i++)
    {
        scanf("%lf", &array[i]);
    }
}

double CalcMean(double array[], int num_of_elem)
{
    double sum = 0.0;
    for (int i = 0; i < num_of_elem; i++)
    {
        sum += array[i];
    }
    return sum / num_of_elem;
}

double CalcStdDeviation(double array[], int num_of_elem, double mean)
{
    double sum_of_squares = 0.0;
    for (int i = 0; i < num_of_elem; i++)
    {
        sum_of_squares += pow(array[i] - mean, 2);
    }
    return sqrt(sum_of_squares / num_of_elem);
}

int main()
{
    int num_of_elem;
    scanf("%d", &num_of_elem);

    double array[num_of_elem];
    TakeInput(array, num_of_elem);

    double mean = CalcMean(array, num_of_elem);
    double std_deviation = CalcStdDeviation(array, num_of_elem, mean);

    printf("%.2lf\n", std_deviation);

    return 0;
}
