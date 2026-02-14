#include <stdio.h>
int main() {
    for (int i=1;i<8;i++) {
        for (int j=1;j<8;j++) {
            if (i==1||j==1||i==7||j==7) {
                printf("%d ",4);
            }
            else if (j==2||i==2||j==6||i==6) {
                printf("%d ",3);
            }
            else if (j==3||i==3||j==5||i==5) {
                printf("%d ",2);
            }
            else {
                printf("%d ",1);
            }
        }
        printf("\n");
    }
}
