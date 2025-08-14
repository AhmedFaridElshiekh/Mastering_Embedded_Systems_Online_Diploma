#include<stdio.h>
#include <stdlib.h>
#define DPRINTF(...) {fflush(stdout);\
	fflush(stdin);\
	printf(__VA_ARGS__);\
	fflush(stdout);\
	fflush(stdin);}
struct Sdata{
	int ID;
	char name[40];
	float grade;
};
struct Sstudent{
	struct Sdata student;
	struct Sstudent* P_next_student;
};
struct Sstudent* g_p_first_student=NULL;
int get_count( struct Sstudent* student){
	if( student==NULL)
		return 0;
	else
		return 1+get_count(student->P_next_student);
}
void fill_the_record(struct Sstudent * new_student){
	char temp_text[40];
	new_student->student.ID=get_count(g_p_first_student);
	DPRINTF("\n Enter the Name : ");
	gets(new_student->student.name);
	DPRINTF("\n Enter the grade : ");
	gets(temp_text);
	new_student->student.grade=atof(temp_text);

}

void add_student(){
	struct Sstudent * P_new_student;
	struct Sstudent * P_last_student;
	if(g_p_first_student==NULL){
		P_new_student=(struct Sstudent*)malloc(sizeof(struct Sstudent));
		g_p_first_student=P_new_student;
	}
	else {
		P_last_student=g_p_first_student;
		while(P_last_student->P_next_student)
			P_last_student=P_last_student->P_next_student;
		P_new_student=(struct Sstudent*)malloc(sizeof(struct Sstudent));
		P_last_student->P_next_student=P_new_student;

	}
	P_new_student->P_next_student=NULL;
	fill_the_record(P_new_student);


}
int delete_student(){
	if(g_p_first_student==NULL)
			DPRINTF("\n Empty list");
	char temp_text[40];
	int ID;
	DPRINTF("\n Enter student ID to be deleted");
	gets(temp_text);
	ID=atoi(temp_text);
	if(g_p_first_student){
		struct Sstudent* P_previous_student=NULL;
		struct Sstudent* P_selected_student=g_p_first_student;
		while(P_selected_student){
			if(P_selected_student->student.ID==ID){
				if(P_previous_student){
					P_previous_student->P_next_student=P_selected_student->P_next_student;

				}
				else{
					g_p_first_student=P_selected_student->P_next_student;

				}
				free(P_selected_student);
				return 1;
			}
			P_previous_student=P_selected_student;
			P_selected_student=P_selected_student->P_next_student;
		}

	}
	DPRINTF("\n cannot find student ID");
	return 0;
}
void view_students(){
	int count =0;
	struct Sstudent* P_current_student=g_p_first_student;
	if(g_p_first_student==NULL)
		DPRINTF("\n Empty list");
	while(P_current_student){
		DPRINTF("\n Record number %d",count+1);
		DPRINTF("\n ID %d",P_current_student->student.ID);
		DPRINTF("\n Name %s",P_current_student->student.name);
		DPRINTF("\n Grade %f",P_current_student->student.grade);
		P_current_student=P_current_student->P_next_student;
		count++;
	}

}

void delete_all(){
	struct Sstudent* P_current_student=g_p_first_student;
	if(g_p_first_student==NULL)
		DPRINTF("\n Empty list");
	while(P_current_student){
		struct Sstudent* P_temp_student=P_current_student;
		P_current_student=P_current_student->P_next_student;
		free(P_temp_student);
	}
	g_p_first_student=NULL;

}
void get_nth(int value){
	if(g_p_first_student==NULL){
		DPRINTF("\n Empty list");
		return ;
	}
	struct Sstudent* P_current_student=g_p_first_student;
	while(P_current_student){
		if(P_current_student->student.ID==value){
			DPRINTF("student number %d from the beginning his grade is %f ",value,P_current_student->student.grade)
			return;}
		else
		{
			P_current_student=P_current_student->P_next_student;
		}
	}
    DPRINTF("%d is greater than the number of students in the list.\n", value);

}
void printNthFromEnd(int n) {
	if(g_p_first_student==NULL){
		DPRINTF("\n Empty list");
		return ;
	}
	struct Sstudent *main_ptr = g_p_first_student, *ref_ptr = g_p_first_student;
    int count = 0;

    if (g_p_first_student != NULL) {
        while (count < n) {
            if (ref_ptr == NULL) {
                DPRINTF("%d is greater than the number of students in the list.\n", n);
                return;
            }
            ref_ptr = ref_ptr->P_next_student;
            count++;
        }

        while (ref_ptr != NULL) {
            main_ptr = main_ptr->P_next_student;
            ref_ptr = ref_ptr->P_next_student;
        }

        DPRINTF("student number %d from the end his grade is  %f.\n", n, main_ptr->student.grade);
    }
}

int main(void){
	 int option,n;
	while(1){
		DPRINTF("===========================");
		DPRINTF("\n\t Choose one of the following options\n");
		DPRINTF("\n\t 1:Add student ");
		DPRINTF("\n\t 2:Delete student ");
		DPRINTF("\n\t 3:view students ");
		DPRINTF("\n\t 4:Delete all students ");
		DPRINTF("\n\t 5:Number of students ");
		DPRINTF("\n\t 6:print nth student form the beginning");
		DPRINTF("\n\t 7:print nth student form the end");



		DPRINTF("\n\t Enter option number:");
		scanf("%d",&option);
		DPRINTF("\n===========================");
		switch(option){
		case 1:
			add_student();
			break;
		case 2:
			delete_student();
			break;
		case 3:
			view_students();
			break;
		case 4:
			delete_all();
			break;
		case 5:
			DPRINTF("\nnumber of students is %d",get_count(g_p_first_student));
			break;
		case 6:
			DPRINTF("Enter n:");
			scanf("%d",&n);
			get_nth(n);
			break;
		case 7:
			DPRINTF("Enter n:");
			scanf("%d",&n);
			printNthFromEnd(n);
			break;
		default:
			DPRINTF("\n Wrong option");
			break;

		}





	}
	return 0;
}
