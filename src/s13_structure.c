#include <stdio.h>

typedef struct Group {
    int index;
    int num_people; //number of people
} Group;

int compare_member(Group s1, Group s2) {
    if(s1.num_people > s2.num_people) {
        printf("Group %d has more people.\n", s1.index);
    }
    else if(s1.num_people < s2.num_people) {
        printf("Group %d has more people.\n", s2.index);
    }
    else {
        printf("The two groups have the same number of people.\n");
    }
}
 
int main ()
{
    Group group_1, group_2;
    group_1.index = 1;
    group_1.num_people = 12;
    group_2.index = 2;
    group_2.num_people = 15;
    
    compare_member(group_1, group_2);
    
    return 0;
}