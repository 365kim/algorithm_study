## Quick Sort
- 기준점 pivot의 위치를 확정해가며 분할정복 알고리즘으로 정렬
- __분할정복(Divide and Conquer)__
    - 문제를 해결하기 쉬운 단위로 쪼개서(divide) 해결(conquer)하고 그 결과를 합침(combine)
    - 예시: 퀵정렬, 합병정렬
- __정렬방법__
    - `pivot` 설정
        - 보통 중간지점 (또는 맨 앞)
    - `left` 탐색
        - pivot보다 큰 값
        - pivot을 제외하고 맨 왼쪽에서 출발해 오른쪽으로 가면서 탐색 (pivot을 넘어가지 않음)
    - `right` 탐색
        - pivot보다 작은 값
        - 맨 오른쪽에서 출발해 왼쪽으로 가면서 탐색 (pivot을 넘어가지 않음)
    - swap(left, right)
    - 엇갈림(`left`가 `right`보다 더 클 경우)이 발생하면 swap(pivot, right)
        - pivot보다 작은 right를 pivot 왼쪽으로 이동시킴
    - pivot을 제외한 왼쪽 / 오른쪽으로 분할해서 다시 퀵정렬 반복
    - 쪼갰는데 range가 1이면 정렬완성
- __시간복잡도__ : O(N * logN)
    - 최악의 경우 O(N²)
        - 이미 정렬이 되어있는데 pivot을 맨 앞으로 설정하는 것과 같이 분할정복의 이점을 사용하지 못하게 되는 경우
        - 이를 해결하기 위해서는 pivot을 매번 임의의 위치에 설정 (퀵소트 랜덤피봇)
- __참고자료__
    - [[Algorithm]퀵정렬(quick sort)](https://dpdpwl.tistory.com/46)
    - [실전 알고리즘강좌 - 퀵정렬 원리 _(1.5배속)_ ](https://www.youtube.com/watch?v=O-O-90zX-U4)
    - [실전 알고리즘강좌 - 퀵정렬 구현 및 한계점 _(1.5배속)_ ](https://www.youtube.com/watch?v=gBcUO_6JXIA)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/sort/quick)

#### 정렬구현
- 관련예제 : [quick_sort](./quick_sort.c)
<br>

[맨 위로](#quick-sort)
