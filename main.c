#include <stdio.h>
// 定义常量
#define ADDITION   1
#define SUBTRACTION 2
#define MULTIPLICATION 3
#define DIVISION   4
#define MODULUS    5

// 函数原型声明
int performCalculation(int num1, int num2, int operation);

int main() {
    int number1, number2, operation;
    int result;

    // 请求用户输入
    printf("请输入第一个整数: ");
    scanf("%d", &number1);
    printf("请输入第二个整数: ");
    scanf("%d", &number2);

    // 选择操作
    printf("请选择操作 (1加, 2减, 3乘, 4除, 5模): ");
    scanf("%d", &operation);

    // 检查除数是否为0
    if (operation == DIVISION || operation == MODULUS) {
        if (number2 == 0) {
            printf("错误除数不能为0。\n");
            return 1; // 返回错误代码
        }
    }

    // 调用函数并获取结果
    result = performCalculation(number1, number2, operation);

    // 输出结果
    switch (operation) {
        case ADDITION:
            printf("和是: %d\n", result);
            break;
        case SUBTRACTION:
            printf("差是: %d\n", result);
            break;
        case MULTIPLICATION:
            printf("积是: %d\n", result);
            break;
        case DIVISION:
            printf("商是: %d\n", result);
            break;
        case MODULUS:
            printf("模是: %d\n", result);
            break;
        default:
            printf("未知操作。\n");
            break;
    }

    return 0;
}

// 自定义函数实现
int performCalculation(int num1, int num2, int operation) {
    switch (operation) {
        case ADDITION:
            return num1 + num2;
        case SUBTRACTION:
            return num1-num2;
        case MULTIPLICATION:
            return num1 * num2;
        case DIVISION:
            return num1 / num2;
        case MODULUS:
            return num1 % num2;
        default:
            return 0; // 如果操作码不正确，则返回0
    }
}
