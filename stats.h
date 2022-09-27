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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
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
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
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
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

double find_maximum(unsigned char arr[], int size);

double find_maximum(unsigned char arr[], int size) {

	int location = 0;
	int c;
	
	for (c = 1; c < size; c++){
		if (arr[c] > arr[location]){
			location = c;
		}			
	}
	
   return arr[location];
}

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
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
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
 
double print_statistics(unsigned char arr[], int size);
double print_statistics(unsigned char arr[], int size){
	printf("The Array has a minimum value of %f\n", find_minimum(arr, size));
	printf("The Array has a maximum value of %f\n", find_maximum(arr, size));
	printf("The Array has a mean value of %f\n", find_mean(arr, size));
	printf("The Array has a median value of %f\n", find_median(arr, size));
	
	return 0;
	
}

/**
 * @brief <Add Brief Description of Function Here>
 *
 * Given an array of data and a length, sorts the array from largest to
 * smallest.  (The zeroth Element should be the largest value, and the 
 * last element (n-1) should be the smallest value. )
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
void sort_array(unsigned char arr[], int size);
void sort_array(unsigned char arr[], int size){
   
   int i, j, t;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

void print_array(unsigned char arr[], int size);
void print_array(unsigned char arr[], int size){
	
	printf("\nThe Array is made up of the following values:\n");
    for (int i = 0; i < size; i++){
		
		printf("%u ",arr[i]);
		
		if (i%5 == 0){
			
			if (i == 0){
			continue;	
			}
			
			printf("\n");
		}
    }
}


#endif /* __STATS_H__ */
