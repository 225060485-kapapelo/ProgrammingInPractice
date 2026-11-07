#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include "records.h"

extern Employee employees[MAX_RECORDS];
extern int employeeCount;

void addEmployee(void);
void displayEmployees(void);
void saveEmployees(void);
void loadEmployees(void);

#endif