#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	printf("\n");
	printf("영남이공대학교 사이버보안과 커피 자동판매기입니다.\n");
	printf("원하는 상품의 번호를 입력해주세요.\n");
	printf("1. 일반커피(300원) 2. 고급커피(500원) 3. 원두커피(700원)\n");

      scanf("%d", &a);
      printf("돈을 투입하세요.\n");
      scanf("%d", &b);

      switch (a) {
          case 1 : 
              if (b - 300 < 0) {
                  printf("돈이 부족합니다\n");
              }
              else {
                  printf("일반커피를 선택하셨습니다.\n");
		  printf("따뜻한 일반커피가 준비되었습니다.\n");
		  printf("잔돈 %d원이 나왔습니다\n", b - 300);
		  

              }
              break;
          case 2 : 
              if (b - 500 < 0) {
                  printf("돈이 부족합니다\n");
              }
              else {
                  printf("고급커피를 선택하셨습니다.\n");
		  printf("따뜻한 고급커피가 준비되었습니다.\n");
		  printf("잔돈 %d원이 나왔습니다\n", b - 500);
              }
              break;
          case 3 : 
              if (b - 700 < 0) {
                  printf("돈이 부족합니다\n");
              }
              else {
                  printf("원두커피를 선택하셨습니다.\n");
		  printf("따뜻한 원두커피가 준비되었습니다.\n");
		  printf("잔돈 %d원이 나왔습니다\n", b - 700);
              }
              break;
          default:
              printf("품절된 상품입니다\n");
              break;

		}
}
