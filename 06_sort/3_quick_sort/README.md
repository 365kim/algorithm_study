## Quick Sort
- 분할정복 알고리즘으로 정렬
- `pivot` : 보통 중간지점의 기준값
- `start` : 범위 내 맨 왼쪽에서 시작해서 pivot보다 크거나 같은 값을 찾아가는 인덱스
- `end` : 범위 내 맨 오른쪽에서 시작해서 pivot보다 작거나 같은 값을 찾아가는 인덱스
- __분할정복(Divide and Conquer)__
    - 문제를 해결하기 쉬운 단위로 쪼개서(divide) 해결(conquer)하고 그 결과를 합침(combine)
    - 예시: 퀵정렬, 합병정렬
- __시간복잡도__ : O(N * logN)
    - 최악의 경우 O(N²)
        - 이미 정렬이 되어있는데 pivot을 맨 앞으로 설정하는 것과 같이 분할정복의 이점을 사용하지 못하게 되는 경우
        - 이를 해결하기 위해서는 pivot을 매번 임의의 위치에 설정 (퀵소트 랜덤피봇)
- __참고자료__
    - [[Algorithm]퀵정렬(quick sort)](https://dpdpwl.tistory.com/46)
    - [[자료구조 알고리즘] 퀵정렬(Quicksort) _(1.5배속)_ ](https://www.youtube.com/watch?v=7BDzle2n47c)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/sort/quick)

#### 정렬구현
- 관련예제 : [quick_sort](./quick_sort.c)
<br>

[맨 위로](#quick-sort)
