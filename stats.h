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
 * @file stats.h 
 * @brief This file contains all the declaration of functions.
 *
 * This file contains all the declaration part of the functions used in 
 * stats.c file.
 *
 * @author Ishan Kansara
 * @date 22/10/2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
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
void printArray(unsigned char prArr[]);

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

double findMean(unsigned char meanArr[], int arr_length);

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
void sortArray(unsigned char inputArr[], double arrSize);

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
int find_Maximum(unsigned char inpArr[], double arrLen);

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
int find_Minimum(unsigned char inpArrMin[], double arrLenMin);

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
double find_Median(unsigned char inpArrMedian[], int arrLenMedian);

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
void print_Statistics(unsigned char print_Arr[], double print_Length, double print_Mean, int print_Max, int print_Min, double print_Median);

#endif /* __STATS_H__ */
