#include <iostream>
#include <string>
#include <climits>
using namespace std;
 
// Función para encontrar la mejor manera de cortar una varilla de longitud `n`
// donde la barra de longitud `i` tiene un costo `price[i-1]`
int rodCut(int price[], int n)
{
    // caso base
    if (n == 0) {
        return 0;
    }
 
    int maxValue = INT_MIN;
 
    // uno por uno, divide la barra dada de longitud `n` en dos partes
    // de longitud (1, n-1), (2, n-2), (3, n-3), … ,(n-1, 1), (n, 0)
    // y tomar el máximo
    for (int i = 1; i <= n; i++)
    {
        // la barra de longitud `i` tiene un costo `price[i-1]`
        int cost = price[i - 1] + rodCut(price, n - i);
 
        if (cost > maxValue) {
            maxValue = cost;
        }
    }
 
    return maxValue;
}
 
int main()
{
    int price[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
 
    // longitud de la varilla
    int n = 4;
 
    cout << "Profit is " << rodCut(price, n);
 
    return 0;
}
