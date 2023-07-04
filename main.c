#include <stdio.h>

// ������� ��� ���������� ���������� �������� ������� ���� �����
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// ������� ��� ���������� ���������� �������� �������� ���� �����
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int n; // ������� �����
    scanf("%d", &n);
    int result; // ����� ��� ��������� ����������
    scanf("%d", &result); // ���������� ������� �����
    for (int i = 1; i < n; i++) {
        int a; // ����� ��� ��������� ���������� �����
        scanf("%d", &a);
        result = lcm(result, a); // ���������� ���������� �������� �������� ��� ��������� ���������� �� ���������� �����
    }
    printf("%d\n", result); // ��������� ����������
    return 0;
}
