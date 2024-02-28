#include <stdio.h>

struct vision
{
    double left;
    double right;
};

struct vision exchange(struct vision robot); // 반환 값, 매개변수 모두 구조체

int main(void)
{
    struct vision robot;

    printf("시력 입력: ");
    scanf("%lf%lf",&(robot.left),&(robot.right)); //여기 변환문자는 건들지 말것. (순수한 그 형태 그 대로 전달 받아야 됨)
    robot = exchange(robot);
    printf("바뀐 시력 : %.1lf  %.1lf\n", robot.left, robot.right);

    return 0;
}

struct vision exchange(struct vision robot)
{
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}