## Hash Set
- 집합의 값을 해시함수로 구한 hash값의 위치에 저장하는 자료구조
- __해시셋 vs 해시맵__
    - Hash __Set__
        - 말 그대로 집합
        - HashSet은 단일 Null 값을 허용하고, 요소(data)의 중복을 허용하지 않음
        - e.g. {1, 2, 3, 4, 5}        
    - Hash __Map__
        - key값과 그에 연관된 value값을 하나의 dictionary pair를 요소로 함 (key, value)
        - HashMap은 단일 Null key값과 복수의 Null value 값을 허용함. 
        - 첫번째요소(key)의 중복을 허용하지 않지만, 두번째요소(value)의 중복은 허용함
        - e.g. {a -> 1, b -> 2, c -> 2, d -> 1}

- __참고자료__
    - [Difference between HashSet and HashMap](https://stackoverflow.com/questions/2773824/difference-between-hashset-and-hashmap)
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
