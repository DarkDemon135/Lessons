#include<iostream>
using namespace std;
 
int main()
{
    srand(time(NULL));
    int N, M, F;
    int sum=0;
    cout<<"Введите размер массива: ";
    cin >> N >> M;
    int ** A = new int * [N];
    for (int i = 0; i < N; i++)
        A [i] = new int [M];
 
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            A [i][j] = ((rand() % 10));
                        
        
 cout << "Вот ваш массив:" << endl << endl;
 for (int i = 0; i < N; i++)
 {
     for(int j = 0; j < M; j++){
         cout << A[i][j] << " ";
         sum += A[i][j];
     }
     cout << endl;
 }
    cout << "\nsr = " << (double)sum / (N * M);

    cout << endl;
    for (int i = 0; i < N; i++)
       delete [] A[i];
    delete [] A;
    return 0;
}