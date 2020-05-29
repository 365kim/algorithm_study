## Hash Set
- 해시셋이 뭘까요
- 알고리즘
1. 설명을
2. 쓰고싶지만
- __참고자료__
    - 검색능력이 부족하네요 더 찾아봅시다
<br>

## Nadarm's Exercise
- [예제(원본)](https://github.com/nadarm/42-algorithm/tree/master/hash/hash_set)
- 구현
    - [set_init](./set_init.c) : t_hash_set형 struct를 반환
    - [set_insert](./set_insert.c) : hash set에 data를 삽입
    - [set_exists](./set_exists.c) : hash set 안에 data가 존재하는지 확인
    - [set_delete](./set_delete.c) : hash set에서 data를 삭제
    - [free_set](./free_set.c) : hash set의 메모리 할당을 해제
    - [header](./set.h) : t_node구조체(data,next) 선언, t_hash_set구조체(t_node,size,cmp) 선언

[맨 위로](#hash-set)
