#include <iostream>

using namespace std;

int main()
{
    double N, i, P = 1;

    printf("N > "); cin >> N;

    i = N;

    while (i <= 16)
    {
        P *= (i * N) / (pow(i, 2) + pow(N, 2));

        i++;
    }

    printf("P (1) = %f\n", P);

    P = 1; i = N;

    do
    {
        P *= (i * N) / (pow(i, 2) + pow(N, 2));

        i++;
    } while (i <= 16);

    printf("P (2) = %f\n", P);

    P = 1;

    for (i = N; i <= 16; i++)
    {
        P *= (i * N) / (pow(i, 2) + pow(N, 2));
    }

    printf("P (3) = %f\n", P);

    P = 1;

    for (i = 16; i >= N; i--)
    {
        P *= (i * N) / (pow(i, 2) + pow(N, 2));
    }

    printf("P (4) = %f\n", P);

    return 0;
}