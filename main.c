#include <stdio.h>
// ���峣��
#define ADDITION   1
#define SUBTRACTION 2
#define MULTIPLICATION 3
#define DIVISION   4
#define MODULUS    5

// ����ԭ������
int performCalculation(int num1, int num2, int operation);

int main() {
    int number1, number2, operation;
    int result;

    // �����û�����
    printf("�������һ������: ");
    scanf("%d", &number1);
    printf("������ڶ�������: ");
    scanf("%d", &number2);

    // ѡ�����
    printf("��ѡ����� (1��, 2��, 3��, 4��, 5ģ): ");
    scanf("%d", &operation);

    // �������Ƿ�Ϊ0
    if (operation == DIVISION || operation == MODULUS) {
        if (number2 == 0) {
            printf("�����������Ϊ0��\n");
            return 1; // ���ش������
        }
    }

    // ���ú�������ȡ���
    result = performCalculation(number1, number2, operation);

    // ������
    switch (operation) {
        case ADDITION:
            printf("����: %d\n", result);
            break;
        case SUBTRACTION:
            printf("����: %d\n", result);
            break;
        case MULTIPLICATION:
            printf("����: %d\n", result);
            break;
        case DIVISION:
            printf("����: %d\n", result);
            break;
        case MODULUS:
            printf("ģ��: %d\n", result);
            break;
        default:
            printf("δ֪������\n");
            break;
    }

    return 0;
}

// �Զ��庯��ʵ��
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
            return 0; // ��������벻��ȷ���򷵻�0
    }
}
