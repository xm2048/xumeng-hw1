/*
 * @Author: xumeng xm_2048@qq.com
 * @Date: 2024-05-13 22:22:23
 * @LastEditors: xumeng xm_2048@qq.com
 * @LastEditTime: 2024-05-14 15:14:03
 * @FilePath: \xumeng-hw1\src\algebra.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "algebra.h"
#include <stdio.h>
#include <math.h>

Matrix create_matrix(int row, int col)
{
    Matrix m;
    m.rows = row;
    m.cols = col;
    return m;
}

Matrix add_matrix(Matrix a, Matrix b)
{
   if(a.rows != b.rows || a.cols != b.cols){
    printf("Error: Matrix a and b must have the same rows and cols.\n");
       return create_matrix(0,0);
    }

   Matrix result = create_matrix(a.rows, a.cols);
   for (int i = 0; i < a.rows; i++)
   {
       for (int j = 0; j < a.cols; j++)
       {
           result.data[i][j] = a.data[i][j] + b.data[i][j];
       }
   }
   return result;
}

Matrix sub_matrix(Matrix a, Matrix b)
{
    if(a.rows != b.rows || a.cols != b.cols)
        printf("Error: Matrix a and b must have the same rows and cols.\n");
        return create_matrix(0,0);
        
    Matrix result = create_matrix(a.rows, a.cols);
    for (int i = 0; i < a.rows; i++)
    {
        for (int j = 0; j < a.cols; j++){
            result.data[i][j] = a.data[i][j] - b.data[i][j];
        }    
    }
    return result;
}

Matrix mul_matrix(Matrix a, Matrix b)
{
    // ToDo
    return create_matrix(0, 0);
}

Matrix scale_matrix(Matrix a, double k)
{
    // ToDo
    return create_matrix(0, 0);
}

Matrix transpose_matrix(Matrix a)
{
    // ToDo
    return create_matrix(0, 0);
}

double det_matrix(Matrix a)
{
    // ToDo
    return 0;
}

Matrix inv_matrix(Matrix a)
{
    // ToDo
    return create_matrix(0, 0);
}

int rank_matrix(Matrix a)
{
    // ToDo
    return 0;
}

double trace_matrix(Matrix a)
{
    // ToDo
    return 0;
}

void print_matrix(Matrix a)
{
    for (int i = 0; i < a.rows; i++)
    {
        for (int j = 0; j < a.cols; j++)
        {
            // 按行打印，每个元素占8个字符的宽度，小数点后保留2位，左对齐
            printf("%-8.2f", a.data[i][j]);
        }
        printf("\n");
    }
}
