#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

char buf[1204];

// 自定义 strcmp 函数
int my_strcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

void main() {
    while (1) {
        scanf("%s", buf);
        if (my_strcmp(buf, "123") == 0) // 使用自定义 strcmp
            printf("ok\n");
        else
            printf("fail\n");
    }
}






























//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <Windows.h>
//
//char buf[1204];
//
//void main()
//{
//	while (1)
//	{
//		scanf("%s", buf);
//		if (!strcmp(buf, "123"))
//			printf("ok\n");
//		else
//			printf("fail\n");
//	}
//
//}
