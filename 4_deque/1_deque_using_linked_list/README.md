## Deque using Linked List
- 연결리스트를 이용한 덱
- [참고자료1](http://www.hanbit.co.kr/channel/category/category_view.html?cms_code=CMS3942847236), [참고자료2](https://truecode.tistory.com/129)

### 덱 할당/해제
- 관련예제 : [init](./deque_init.c), [create_node](./create_elem.c), [free](./free_deque)

### 삽입연산
- 스택/큐와 달리 push_front과 push_back가 모두 가능
- 관련예제 : [push_front](./deque_push_front.c), [push_back](./deque_push_back.c)

### 참조연산
- 관련예제 : [front](./deque_front.c), [back](./deque_back.c), [size](./deque_size.c)

### 삭제연산
- 스택/큐와 달리 pop_front과 pop_back가 모두 가능
- 관련예제 : [pop_front](./deque_pop_front.c), [pop_back](./deque_pop_back.c), [clear](./deque_clear)
