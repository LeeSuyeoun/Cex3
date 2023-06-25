//
//  main.c
//  Cex3
//  지역변수 소스코드
//  Created by 이수연 on 2023/06/25.
//

#include <stdio.h>

void main() {
    // insert code here...
    int a = 3, b = 4;
    {
        int a = 5;
        printf("%d, %d \n", a, b);
    }
    printf("%d, %d \n", a, b);
}
