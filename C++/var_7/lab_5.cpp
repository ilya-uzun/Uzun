#include <iostream>
#include <iomanip>

#include <time.h>
using namespace std;


void FillArrey(int **matrix_1, int nR, int nC)
{
    // Создаём рандомный массив с числами от 0 до 5, что-бы чаще совпадали первые элементы 
	srand(time(0)); //позволяет запускать программу несколько раз, иначе одинаковые значения
   	for (int  i= 0; i < nR; i++)
	 {
		for (int j = 0; j < nC; j++)
		{
			matrix_1[i][j] = rand() % 5;	
		}
	 }
}

void ShowArray(int **matrix_1, int nR, int nC)
{
    // Выводим массив
	for (int  i= 0; i < nR; i++)
	 {
		for (int j = 0; j < nC; j++)
		{
			cout << matrix_1[i][j] << " ";
		}
		cout << endl;
	 }  
}
void ChangeArrey(int **matrix_1, int nR, int nC)
  {
	 cout << endl;

	 int n = 1;
	 int *a1 = new int[n];
	 int *a2 = new int[n];

	//создаём новый массив для запеси заменны
	int **matrix_2= new int* [nR];// указатель на указатель типа int, память под массив указателей на строки массива
	int i,j,ch;
	// Цикл для выделение памяти под каждую строку
	matrix_2[i] = new int[nC];
	// for (i=0; i<nR; i++)
	//   {
	// 	 // каждому элементу указателей на сроку присваиваим адрес начала участка памяти
	//   }
	
    // Выводим массив
	// for (int  i= 0; i < nR; i++)
	//  {
	// 	for (int j = 0; j < nC; j++)
	// 	{
	// 		matrix_2[i][j] = matrix_1[i][j];			
	// 	}
	//  }  
/*  если условие выполняется  вкаждом цыкле ошибки сигментации нет, 
при попытке несколько раз прописать -ошибка  */ 

	 	// for (int  i= 0; i < nR; i++)
	 	//  {
		// 	  for (int  j= 0; j < nC; j++)
	 	// 		 {
		// 	//  if (matrix_1[i][j] == matrix_1[i+1][j]) 
	    //     //    {
		//  	// 	 a1[i] = matrix_1[i][1];
		//  	// 	 a2[i] = matrix_1[i][2];

		//   	// 	 matrix_1[i][1] = a2[i];
		//   	// 	 matrix_1[i][2] = a1[i];
		// 	//   } else
		// 	//   {
		// 	// 	cout << "Матрица не имеет одинаковых первых элементов" << endl;
		// 	// 	 matrix_1[i][j] = matrix_1[i][j];
		// 	//   }
		// 	 		 matrix_2[i][j] = matrix_1[i][j];
		// 		  }
	   	//  }
	  
// незаписвает в новую матрицу
	for (int  i= 0; i < nR; i++)
	 {
		for (int j = 0; j < nC; j++)
		{
			matrix_2[i][j] = matrix_1[i][j];			
		}
	 }  

	delete[] a1;
	delete[] a2;
	delete[] matrix_2;
  }


int main()
{
	const int nRow = 5;// строки
	const int nCol = 5;// столбцы
	int **matrix_1= new int* [nRow];// указатель на указатель типа int, память под массив указателей на строки массива
	int i,j;
	// Цикл для выделение памяти под каждую строку
	for (i=0; i<nRow; i++)
	  {
		matrix_1[i] = new int[nCol]; // каждому элементу указателей на сроку присваиваим адрес начала участка памяти
	  }

	FillArrey(matrix_1, nRow, nCol); // вызываем функцию для создания массива
    ShowArray(matrix_1, nRow, nCol); // вывод на экран
	ChangeArrey(matrix_1, nRow, nCol); // изменяем массив
    ShowArray(matrix_1, nRow, nCol); // вывод на экран
	delete[] matrix_1;
	return 0;
}


/* вроде рабочий код

const int n = 3;
const int m = 3;
int mass[n][m];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        mass[i][j] = rand() % 5;
        std::cout << mass[i][j] << " ";
    }
    std::cout << std::endl;
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        for (int s = i; s < n; s++)
        {
            for (int t = j + 1; t < m; t++)
                if (mass[i][j] == mass[s][t])
                {
                    std::cout << "mass[" << i << "][ " << j <<
                        "] == mass[ " << s << "][" << t << "]" << std::endl;
                }
        }
    }
*/