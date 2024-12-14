#include <stdio.h>
#include <string.h>

struct user
{
    char name[20];
    char gender;
    int age;
};

typedef struct{
    char name[30];
    char gender;
    int age;
}userInfo;

void showdata(userInfo person);

int main() {

    //structure user เเบบค่าเริ่มต้น
    
    struct user emp1 = {"natc",'M',17};

    printf("%s\n",emp1.name);
    printf("%c\n",emp1.gender);
    printf("%d\n",emp1.age);

    //structure เเบบ typedef----------1

    userInfo emp2 = {"natch",'M',18};

    printf("%s\n",emp2.name);
    printf("%c\n",emp2.gender);
    printf("%d\n",emp2.age);

    //-------------------------------1

    userInfo emp3 ={"natcha",'M',19};

    showdata(emp3);

    return 0;

}

void showdata(userInfo person) {

    printf("%s\n",person.name);
    printf("%c\n",person.gender);
    printf("%d\n",person.age);
}
