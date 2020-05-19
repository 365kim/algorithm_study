## Quick Sort
- __퀵정렬 알고리즘__
1. 리스트 중 원소 하나를 `pivot`으로 정함 (보통 중앙값)
2. pivot 앞에는 pivot보다 값이 작은, 뒤에는 값이 큰 원소들이 오도록 해서 리스트를 둘로 쪼갬
3. 분할된 두 리스트에 대해 리스트의 크기가 1이 될 때까지 재귀적으로 반복
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
