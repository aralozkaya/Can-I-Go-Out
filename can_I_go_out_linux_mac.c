#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int main(){
    int i=0, age;
    char name[20],age_str[20],trash;
    char days[7][10] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("\t***CAN I GO OUT?***\t\nby ArAl © 2021\n");
    printf("Please enter your name: ");
    scanf("%s",name);
    printf("Hello, %s! How old are you?: ",name);
    scanf("%s",age_str);
    scanf("%c",&trash);
    while(age_str[i]!=0){
         if (isalpha(age_str[i])){
            printf("\nPlease enter a valid age for God's sake!\n");
            return 0;
        }
        i++;
    }
    age = atoi(age_str);
    printf("\nThe day is %s",days[tm.tm_wday]);
    printf("\nThe time is %d:%.2d\n\n",tm.tm_hour,tm.tm_min);
    if (tm.tm_wday != 0 && tm.tm_wday != 6){
        if (age >= 20 && age < 65){
            if (tm.tm_hour >= 10 && tm.tm_hour < 21)
                printf("You can go out!");
        
            else 
                printf("You can't go out! ");
        }
        if (age < 20){
            if (tm.tm_hour >= 13 && tm.tm_hour < 16)
                printf("You can go out!");
        
            else 
                printf("You can't go out! ");
        }
        if (age >= 65){
             if (tm.tm_hour >= 10 && tm.tm_hour < 13)
                printf("You can go out!");
        
            else 
                printf("You can't go out! ");
        }
    }
    else {
        if (tm.tm_hour < 17)
                printf("You can only go to the closest market to do shopping!");
        
            else 
                printf("You can't go out! ");
    }
	printf("\n");
    return 0;
}
