//
// Created by 23276 on 2021/7/31.
//


#include "MergeSort.h"
#include <stdio.h>


void OutputNums(int nums[], int length){
    for(int i = 0; i < length; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
}


int main(void){
    int nums[8] = {49, 38, 65, 97, 76, 13, 27, 49};
    int length = 8;
    printf("未排序：");
    OutputNums(nums, length);

    MergeSort(nums, length);
    printf("归并排序：");
    OutputNums(nums, length);

    return  0;
}