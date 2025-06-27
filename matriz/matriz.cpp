#include <iostream>

using namespace std; 

int main() {
    int n;           // Tamanho da matriz
    cin >> n;        

    int m1[n][n];    
    int m2[n][n];    
    int r[n][n];     

    // Leitura da Matriz 1
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m1[i][j];

    // Leitura da Matriz 2
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m2[i][j];

    char op;         // Operação
    cin >> op;       // Lê a operação

    // Realiza a Operação
    if (op == 'a') { // Adição
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                r[i][j] = m1[i][j] + m2[i][j];
    } else if (op == 's') { // Subtração
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                r[i][j] = m1[i][j] - m2[i][j];
    } else if (op == 'm') { // Multiplicação
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) {
                r[i][j] = 0; // Inicializa elemento
                for (int k = 0; k < n; k++)
                    r[i][j] += m1[i][k] * m2[k][j];
            }
    } else {
        return 1;
    }

    // Imprime a Matriz Resultante
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << r[i][j] << " ";
        cout << endl;
    }

    return 0;
}