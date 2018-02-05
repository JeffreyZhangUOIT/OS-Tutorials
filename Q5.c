

#include <stdio.h>

struct grade 
{
	int student_id;
	int mark;
};

void grade_students(struct grade *grades, int num_students) 
{
	int sum, i;
  sum = 0;
  i = 0;
  float total;
  toal = 0.0f;
	fopen("grades.txt", "w");
	while (num_students > i)
	{
		sum += grades.mark;
    fwrite(grades, sizeof(grades), 1, fp);
    grades++;
    i++;
	}
  float avg;
  avg = sum / num_students;
  while (i > 0)
	{
    total = (grades.mark - sum)*(grades.mark - sum);
		i--;
	} 
  total = sqrt(total / num_students);
};

int main()
{
	return 0;
}
