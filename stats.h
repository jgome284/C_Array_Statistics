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
//Initialize Header Gaurd
#ifndef __STATS_H__
#define __STATS_H__

/* Header gaurds help avoid compilation errors that arise when functions
 * are defined more than once. This is pretty typical when compiling
 * large programs. */ 

/**
 * @brief find_mean: find the average value for numbers in an array
 *
 * @param unsigned char arr[]: 
 * Array pointer for unsigned character values ranging between 0 to 255.
 * Each value is 1 byte of data.
 * 
 * @param int size:
 * Size of array, interager ranging between -32,768 to 32,767. Stored
 * with 2 or bytes of data.
 * 
 * @param int i:
 * For loop counter, interager ranging between -32,768 to 32,767. Stored
 * with 2 or bytes of data.
 * 
 * @param double sum:
 * Total sum of array values stored in 8 bytes of floating point data.
 *
 * @return double avg:
 * 8 byte floating point data type to handle division operation.
 */
 
double find_mean(unsigned char arr[], int size);

double find_mean(unsigned char arr[], int size) {

   int i;
   double avg;
   double sum = 0;

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }

   avg = sum / size;

   return avg;
}


/**
 * @brief find_minimum: 
 * Given an array of data and a length, returns the minimum
 *
 * @param unsigned char arr[]: 
 * Array pointer for unsigned character values ranging between 0 to 255.
 * Each value is 1 byte of data.
 * 
 * @param int size:
 * Size of array, interager ranging between -32,768 to 32,767. Stored
 * with 2 or bytes of data.
 * 
 * @param int location: 
 * Integer that tracks position for minimum value in array.
 * 
 * @param int c:
 * For loop counter, interager ranging between -32,768 to 32,767. Stored
 * with 2 or bytes of data.
 *
 * @return double arr[location]:
 * 8 byte floating point data type storing mimimum value for array.
 */

double find_minimum(unsigned char arr[], int size);

double find_minimum(unsigned char arr[], int size) {
	
	int location = 0;
	int c;
	
	for (c = 1; c < size; c++){
		if (arr[c] < arr[location]){
			location = c;
		}			
	}
	
   return arr[location];
}

/**
 * @brief find_maximum: 
 * Given an array of data and a length, returns the maximum
 *
 * @param unsigned char arr[]: 
 * Array pointer for unsigned character values ranging between 0 to 255.
 * Each value is 1 byte of data.
 * 
 * @param int size:
 * Size of array, interager ranging between -32,768 to 32,767. Stored
 * with 2 or bytes of data.
 * 
 * @param int location: 
 * Integer that tracks position for minimum value in array.
 * 
 * @param int c:
 * For loop counter, interager ranging between -32,768 to 32,767. Stored
 * with 2 or bytes of data.
 *
 * @return double arr[location]:
 * 8 byte floating point data type storing maximum value for array.
 */

double find_maximum(unsigned char arr[], int size);

double find_maximum(unsigned char arr[], int size) {

	int location = 0;
		
	for (int c = 1; c < size; c++){
		if (arr[c] > arr[location]){
			location = c;
		}			
	}
	
   return arr[location];
}

/**
 * @brief find_median: 
 * Given an array of data and a length, returns the median value
 *
 * @param unsigned char arr[]: 
 * Array pointer for unsigned character values ranging between 0 to 255.
 * Each value is 1 byte of data.
 * 
 * @param int size:
 * Size of array, interager ranging between -32,768 to 32,767. Stored
 * with 2 or bytes of data.
 * 
 *
 * @return double arr[location]:
 * 8 byte floating point data type storing maximum value for array.
 */


double find_median(unsigned char arr[], int size);

double find_median(unsigned char arr[], int size) {

    if (size % 2 == 0)
    {
        return (arr[(size - 1) / 2] + arr[size / 2]) / 2.0;
    }
    else
    {
        return arr[size / 2];
    }

}

/**
 * @brief print_statistics: 
 * A function that prints the statistics of an array including minimum, 
 * maximum, mean, and median. This function calls other functions 
 * defined herein to print statistics to the screen.
 *
 * @param unsigned char arr[]: 
 * Array pointer for unsigned character values ranging between 0 to 255.
 * Each value is 1 byte of data.
 * 
 * @param int size:
 * Size of array, interager ranging between -32,768 to 32,767. Stored
 * with 2 or bytes of data.
 * 
 *
 * @return void
 */

 
void print_statistics(unsigned char arr[], int size);
void print_statistics(unsigned char arr[], int size){
	printf("\nThe Array has a minimum value of %f\n", find_minimum(arr, size));
	printf("\nThe Array has a maximum value of %f\n", find_maximum(arr, size));
	printf("\nThe Array has a mean value of %f\n", find_mean(arr, size));
	printf("\nThe Array has a median value of %f\n", find_median(arr, size));
		
}

/**
 * @brief sort_array: 
 * A function that sorts an input array from largest to smallest value.
 *
 * @param unsigned char arr[]: 
 * Array pointer for unsigned character values ranging between 0 to 255.
 * Each value is 1 byte of data.
 * 
 * @param int size:
 * Size of array, interager ranging between -32,768 to 32,767. Stored
 * with 2 or bytes of data.
 * 
 *
 * @return void
 */
void sort_array(unsigned char arr[], int size);
void sort_array(unsigned char arr[], int size){
   
   int i, j, t;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[i])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("\nThe Array has been sorted from largest to smallest value...\n\n");
}

/**
 * @brief print_array: 
 * A function that prints an input array with rows of 5.
 *
 * @param unsigned char arr[]: 
 * Array pointer for unsigned character values ranging between 0 to 255.
 * Each value is 1 byte of data.
 * 
 * @param int size:
 * Size of array, interager ranging between -32,768 to 32,767. Stored
 * with 2 or bytes of data.
 * 
 *
 * @return void
 */
 
void print_array(unsigned char arr[], int size);
void print_array(unsigned char arr[], int size){
	
	printf("\nThe Array is made up of the following values:\n");
    for (int i = 1; i < size+1; i++){
		
		printf("%u ",arr[i-1]);
		
		if (i%5 == 0){
			
			if (i == 0){
			continue;	
			}
			
			printf("\n");
		}
    }
}


#endif /* __STATS_H__ */
