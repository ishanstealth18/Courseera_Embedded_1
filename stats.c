/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief This file contains implementation of statistical functions.
 *
 * This file contains implementation of all statistical functions mentioned in 
 * 'stats.h'. It also has main() function.
 *
 * @author Ishan Kansara
 * @date 22/10/2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/**
 * @brief Prints the array as it is, which was originially
 * provided. 
 *	
 * This function takes array of unsigned characters as parameters.
 * It will print array using for loop.
 *
 * @param unsigned char prArr[]: Array to be printed. 
 * @return void
 *
 */
void printArray(unsigned char prArr[])
{
	printf("\nContents in the original array: \n");
	for(int i = 0; i<40; i++)
	{
		printf("%d\t", prArr[i]);
	}

}

/**
 * @brief Calculates mean of numbers provided in the original array.
 *	
 * This function takes array of unsigned characters and array length as parameters.
 * It will add all the numbers in the array and divide it by total array length.
 *
 * @param meanArr[], arr_length:  To calculate mean of all numbers in the array. 
 * @return double : Calculated mean
 *
 */

double findMean(unsigned char meanArr[], int arr_length)
{
	double tempSum = 0;
	double arrayMean = 0;
	for(int i=0;i<40;i++)
	{
		tempSum = meanArr[i] + tempSum;
	}
	arrayMean = tempSum/40.0000;
return arrayMean;
}

/**
 * @brief Sorts array from highest to lowest. First index of an array is highest 
 *	and last index(n-1) is lowest.
 * 
 * This function takes array of unsigned characters and array length as parameters.
 * It will sort the array in descending order.It uses 2-d array to sort the array.
 *
 * @param inputArr[], arrSize  
 * @return void
 *
 */

void sortArray(unsigned char inputArr[], double arrSize)
{
	int swapVar = 0;
	for(int i=0;i<40;i++)
	{
		for (int j = i+1; j < 40; j++)
		{
			if(inputArr[j] > inputArr[i])
			{
				swapVar = inputArr[i];
				inputArr[i] = inputArr[j];
				inputArr[j] = swapVar;
			}
		}
	}
}

/**
 * @brief Finds maximum number from the array of numbers.
 * 
 * This function takes array of unsigned characters and array length as parameters.
 * It will find the maximum number from all the numbers in the array. It uses 
 * sortArray function to sort the array first and then returning 1st element of 
 * array, as sorting is done in descending order.
 *
 * @param inpArr[], arrLen  
 * @return integer
 *
 */

int find_Maximum(unsigned char inpArr[], double arrLen)
{
	sortArray(inpArr,arrLen);
	return inpArr[0];
}

/**
 * @brief Finds minimum number from the array of numbers.
 * 
 * This function takes array of unsigned characters and array length as parameters.
 * It will find the minimum number from all the numbers in the array. It uses 
 * sortArray function to sort the array first and then returning last(n-1) element of 
 * array, as sorting is done in descending order.
 *
 * @param inpArr[], arrLen  
 * @return integer
 *
 */
int find_Minimum(unsigned char inpArrMin[], double arrLenMin)
{
	//sortArray(inpArrMin,arrLen);
	return inpArrMin[(int)arrLenMin-1];
}

/**
 * @brief Finds median number from the array of numbers.
 * 
 * This function takes array of unsigned characters and array length as parameters.
 * It will find the median from all the numbers in the array. It divides array length by 2
 * and finds middle values. For odd number of elements in array, median is value of the middle number
 * but for even number of elements, mean of middle 2 numbers is taken.
 *
 * @param inpArrMedian[], arrLenMedian  
 * @return double
 *
 */
double find_Median(unsigned char inpArrMedian[], int arrLenMedian)
{
	int middleValue = (arrLenMedian/2);
	//printf("Middle value is : %d\n",middleValue );
	//printf("1st value : %d 	2nd Value : %d\n",inpArrMedian[middleValue-1],inpArrMedian[middleValue]);
	double medianValue = (inpArrMedian[middleValue-1] + inpArrMedian[middleValue]) / 2.0000;
	return medianValue;
}

/**
 * @brief Prints all the function like median , mean , maximum and minimum.
 * 
 * This function takes array of unsigned characters, array length, mean value, mdian value, max value and 
 * min value as parameters. It just prints the final calculated value of all statistical functions.
 *
 * @param print_Arr[], print_Length, print_Mean, print_Max, print_Min, print_Median
 * @return void
 *
 */
void print_Statistics(unsigned char print_Arr[], double print_Length, double print_Mean, int print_Max, int print_Min, double print_Median)
{
	printf("\nMean of the array: %.5f\n", print_Mean);
	printf("\n");
	printf("***Sorted Array: ***\n");
	sortArray(print_Arr,print_Length);
	printArray(print_Arr);
	printf("\n");
	printf("****Maximum number****\n");
	printf("%d\n",print_Max);
	printf("\n");
	printf("***Minimum Number***\n");
	printf("%d\n",print_Min);
	printf("\n");
	printf("***Median Value***\n");
	printf("%.5f\n",print_Median);
	printf("\n");
}

/**
 * @brief This is Main function. It calls all statistical functions.
 * 
 * This function has no parameters. Main function calls all statistical functions to
 * calculate statistics value. Also, it declares and intitializes variables to be 
 * passed as parameters.
 *
 * @return int
 *
 */
int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
double arrLength = 40;
double median = 0.00;
double mean = 0.00;
int Max = 0;
int Min = 0;
  /* Statistics and Printing Functions Go Here */
printArray(test);
mean = findMean(test,40);
Max = find_Maximum(test,arrLength);
Min = find_Minimum(test,arrLength);
median = find_Median(test,40);
printf("\n***Statistics***\n");
print_Statistics(test,arrLength,mean,Max,Min,median);

return 0;
}

/* Add other Implementation File Code Here */
