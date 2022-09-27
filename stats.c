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
 * @brief This file completes statistical analysis for an array.
 *
 * Given an array of 40 unsigned characters, this program sorts the values
 * from smallest to largest and prints statistics including mean, median,
 * maximum value, and minimum value. 
 * 
 * @author Jose Gomez
 * @date 09/27/22
 *
 */


//Include standard input and output library
#include <stdio.h>

//Include header file with statistical functions
#include "stats.h"

//Size of the Data Set
#define SIZE (40)

int main() {
  // Initialize unsigned character array, Storage size of 1 byte, Value range of 0 to 255
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
 
  // Sort Array to continue data processing.
  sort_array(test, SIZE);
  
  // Print sorted array
  print_array(test, SIZE);
  
  // Print array statistics
  print_statistics(test, SIZE);
 
    
  return 0;

}

