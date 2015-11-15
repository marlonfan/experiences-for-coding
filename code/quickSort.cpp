#include <stdio.h>

void quickSort(int list[],int left, int right) {
    
    int i,j,t,temp;
    
    if (left > right) return;

    i = left;
    j = right;
    temp = list[left];

    for (; i != j;) {
        for (; list[j] >= temp && i < j; j--) {}
        for (; list[i] <= temp && i < j; i++) {}

        if (i < j) {
            t = list[i];
            list[i] = list[j];
            list[j] = t;
        }
    }

    list[left] = list[i];
    list[i] = temp;

    quickSort(list, left, i-1);
    quickSort(list, i+1, right);
}

int main() {
    int list[100], n;
    
    printf("请输入要排序的个数\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &list[i]);
    }

    quickSort(list, 1, n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", list[i]);
    }
    return 0;
}
