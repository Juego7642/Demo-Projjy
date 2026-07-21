#ifndef COURSE_H
#define COURSE_H

typedef struct Course
{
	char code[106];
	char name[106];
	double credit;
} Course;

Course createCourse(char code[], char name[], double credit);
void viewCourse(Course course);

#endif
