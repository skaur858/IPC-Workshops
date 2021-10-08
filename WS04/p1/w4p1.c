/*
	==================================================
	Workshop #4 (Part-1):
	==================================================
	Name   :simerpreet kaur
	ID     :127747210
	Email  :simerpreet243@gmail.com
	Section:ZDD
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct employee
{
    int id;
    int age;
    double salary;


};
int main(void)
{
    int option,flag=0;
    int i = 0, j = 0;
    int limit = 0;
    int idsearch = 0;
    int idsave = 0;
    int count = 0;
    struct Employee emp[SIZE] = { 0,0,0.0 };
    printf("---=== EMPLOYEE DATA ===---\n\n");


    do {
        printf("1. Display Employee Information\n");
        printf("2. Add Employee\n");
        printf("3. Update Employee Salary\n");
        printf("4. Remove Employee\n");
        printf("0. Exit\n\n");
        printf("Please select from the above options: ");
        scanf("%d", &option);
        printf("\n");
        switch (option)
        {
        case 0:


