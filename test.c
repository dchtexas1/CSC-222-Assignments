#include <stdio.h>

int * pointer() {
	static int temp;
	return &temp;
}

int main(int argc, char const *argv[]) {
    int x = 1, y = 2;
    int *ip;
    ip = pointer();
    y = *ip;
    *ip = 3;
    printf("%d\n", *ip);
    return 0;
}
