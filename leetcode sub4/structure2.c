#include <stdio.h>
int main() {
    int n;
    printf("Enter number of boxes: ");
    scanf("%d", &n);
    struct Box {
        int length;
        int width;
        int height;
    };
    struct Box b; 
    int i;
    for (i = 0; i < n; i++) {
        printf("\nEnter length, width, height of box %d: ", i + 1);
        scanf("%d %d %d", &b.length, &b.width, &b.height);
        if (b.height < 41) {
            int volume = b.length * b.width * b.height;
            printf("Volume of box %d = %d (fits in tunnel)\n", i + 1, volume);
        } else {
            printf("Box %d is too tall and cannot pass through the tunnel.\n", i + 1);
        }
    }
    return 0;
}
