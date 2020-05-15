## Heap
- 힙 (우선순위큐의 구현방법)
    - __조건 1__. 완전이진트리 _(complete binary tree)_ 형태
    - __조건 2__. parent의 우선순위가 항상 child의 우선순위보다 높거나 같음 _(root : 최우선순위)_
        - 최소힙 _(Min Heap)_ : parent의 key ≤ child의 key
        - 최대힙 _(Max Heap)_ : child의 key ≤ parent의 key
        
- 큐 vs 우선순위큐
    - _큐_ 는 우선순위 개념이 없이 FIFO 원칙을 지키지만, _우선순위 큐_ 는 우선순위가 높은 데이터가 먼저 인출됨
- 참고자료: [우선순위 큐(Priority Queue) - 최대힙 이용](https://velog.io/@holicme7/%EC%9A%B0%EC%84%A0%EC%88%9C%EC%9C%84-%ED%81%90Prioirity-Queue-mbk48cz764)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/tree/heap)

#### 힙 할당/해제
- 관련예제 : [init](./heap_init.c), [free](./heap_free.c)

#### 참조연산
- 관련예제 : [peek](./heap_peek.c)

#### 삽입연산
- 본 예제는 최소힙으로 구현
    - 우선, heap[++size]에 새로운 노드를 삽입
    - i(size)와, i의 parent인 i/2 를 서로 비교하여 i가 더 작을 경우 swap해줌
    - 위 과정을 반복하여 heap을 정렬함
- 관련예제 : [insert](./tree_insert.c)

#### 삭제연산
- 우선순위가 가장높은 root를 삭제시켜주는 연산
    - 우선 heap[size] 즉, 마지막 노드가 root를 대체하도록 함
    - i(root)와, i의 child인 2i 와 2i + 1 중 더 작은 값을 서로 비교하여 i가 더 클 경우 swap해줌
    - 위 과정을 반복하여 heap을 정렬함
- 관련예제 : [pop](./heap_pop.c)
<br>

[맨 위로](#heap)
