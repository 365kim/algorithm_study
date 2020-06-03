## Hash Map
- dictionary pair(key, value)의 key값에 해시함수를 적용해서 구한 hash값의 위치에 dictionary pair를 저장하는 자료구조
- __해시셋 vs 해시맵__
    - Hash __Set__
        - Null 값을 가진 원소를 1개 허용함
        - 요소(data)의 중복을 허용하지 않음
        - e.g. {1, 2, 3, 4, 5}        
    - Hash __Map__
        - key값과 그에 연관된 value값을 하나의 dictionary pair를 요소로 함 (key, value)
        - Null값을 가진 key 1개와 Null값을 가진 value 복수 개를 허용함
        - 첫번째요소(key)의 중복을 허용하지 않지만, 두번째요소(value)의 중복은 허용함
        - e.g. {a -> 1, b -> 2, c -> 2, d -> 1}

- __참고자료__
    - [Difference between HashSet and HashMap](https://stackoverflow.com/questions/2773824/difference-between-hashset-and-hashmap)
<br>

## Nadarm's Exercise
- [예제(원본)](https://github.com/nadarm/42-algorithm/tree/master/hash/hash_map)
- 구현
    - [map_init](./map_init.c) : t_hash_map형 struct를 반환
    - [map_insert](./map_insert.c) : hash map에 (key, value)를 삽입
    - [map_get](./map_get.c) : hash map 안에 key가 존재한다면 (key, value) 반환
    - [map_delete](./map_delete.c) : hash map에서 key가 존재한다면 (key, value) 삭제
    - [free_set](./free_map.c) : hash map 전체를 비우고 hash map의 메모리 해제
    - [header](./map.h) : t_node구조체(key,value,,next) 선언, t_hash_map구조체(t_node,size) 선언
<br>
    
[맨 위로](#hash-map)
