## Heap Sort
- 힙 트리구조를 이용해서 정렬
- 정렬방법
    - 오름차순은 최대힙, 내림차순은 최소힙 이용
        - 주어진 n개의 노드로 최대/최소힙 구성
        - root와 마지막노드를 swap
        - 마지막노드를 제외한 힙을 다시 최대/최소힙으로 구성 ▷ n번 반복
- 시간복잡도 : O(N * logN)
    - 노드 한 개 `heapify` _(logN)_ * 반복횟수 _(N)_
    - 퀵정렬, 병합정렬만큼 빠른 알고리즘
- 참고자료
    - [[Algorithm]힙정렬](https://dpdpwl.tistory.com/45)
    - [실전 알고리즘강좌 - 힙정렬 _(1.5배속)_ ](https://www.youtube.com/watch?v=iyl9bfp_8ag)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/sort/heap)

#### 정렬구현
- 관련예제 : [heap_sort](./heap_sort.c)
<br>

[맨 위로](#heap-sort)
