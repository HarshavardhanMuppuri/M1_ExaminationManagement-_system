/**
 * @file code.h
 * @author Harsha
 * @brief 
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __RECORD_H__
#define __RECORD_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/**
 * @brief Structure containing details about student
 * 
 */

// Structure of Student
struct student {
    char name[20];
    int rno;
    char fees;
    float days;
    float attend;
} s[50];
 
// Functions
void add(struct student s[]);
void eligibleStudents(struct student s[]);
void execute();
void printStudents(struct student s[]);
void deleteRecord(struct student s[]);
