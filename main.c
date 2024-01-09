//
//  main.c
//  whetherApp using two dimensional array
//
//  Created by Harsha K N Bandara on 2023-12-15.
//

#include <stdio.h>
#include <stdlib.h>
#define YEARS 5
#define MONTHS 12

int main(void) {
    
    //initialize rainfall data for 2011-2015
    float rain [YEARS] [MONTHS] = { {1.2,2.1,3.2,4.1,3.0,5.7,7.0,4.6,3.1,7.2,8.1,3.7},
        {2.3,2.1,3.2,4.1,3.0,5.7,7.0,4.6,3.1,7.2,8.1,3.7},
        {1.2,2.1,3.2,4.1,3.0,5.7,7.0,4.6,3.1,7.2,8.1,3.7},
        {1.2,2.1,3.2,4.1,3.0,5.7,7.0,4.6,3.1,7.2,8.1,3.7},
        {1.2,2.1,3.2,4.1,3.0,5.7,7.0,4.6,3.1,7.2,8.1,3.7}
    };
    
    int year,month;
    float subtotal,total;
    
    printf("YEAR\t\tRAINFALL (inches)\n");
    
    
    for(year = 0,total = 0; year<YEARS; year++)
    {
        for(month = 0, subtotal = 0; month<MONTHS; month++)
        {
            subtotal += rain[year][month];
            
           
        }
        printf("%5d\t\t%15.1f\n",2010+year,subtotal);
        total += subtotal;
        
    }
    printf("\nThe yearly average is %.1f inches.\n\n",total,YEARS);
    printf("monthly averages:\n\n");
    printf("jan feb mar apr may jun jul aug sep oct nov dec\n");
    
    for(month = 0; month<MONTHS; month++)
    {
        for(year = 0, subtotal = 0; year < YEARS; year++)
            subtotal += rain[year][month];
        printf("%4.1f",subtotal/YEARS);
    }
    
    printf("\n");
    
    return 0;
}/*

#include<stdio.h>
#include <stdlib.h>
#define YEARS 5
#define MONTHS 12

int main(void){
    //initialize rainfall data
    float rain[YEARS][MONTHS] = {
        {1.2,2.1,3.2,4.1,3.0,5.7,7.0,4.6,3.1,7.2,8.1,3.7},
        {2.3,2.1,3.2,4.1,3.0,5.7,7.0,4.6,3.1,7.2,8.1,3.7},
        {1.2,2.1,3.2,4.1,3.0,5.7,7.0,4.6,3.1,7.2,8.1,3.7},
        {1.2,2.1,3.2,4.1,3.0,5.7,7.0,4.6,3.1,7.2,8.1,3.7},
        {1.2,2.1,3.2,4.1,3.0,5.7,7.0,4.6,3.1,7.2,8.1,3.7}
    };
    
    int year, month;
    float total,subtotal;
    
    printf("year\t\tRainfall\tInches");
    
    for (year = 0; total=0;year<YEARS;year++) {
        
        for (month = 0; subtotal=0; month<MONTHS; month++) {
            
            subtotal=rain[year][month];
        }
        printf("%5d\t\t%15.1f",2010+year,subtotal,total);
        total+=subtotal;
    }
    printf("\nThe yearly average is:%1f inches.\n\n",total ,YEARS);
    printf("monthly averages:\n\n");
    printf("jan feb mar apr may jun jul aug sep oct nov dec\n");
    
    for(month=0; month<MONTHS; month++){
        for(year = 0, subtotal = 0; year < YEARS; year++)
            subtotal += rain[year][month];
        printf("%4.1f",subtotal/YEARS);
    }
    
    printf("\n");
    
    return 0;
}
*/
