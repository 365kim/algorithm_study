## Bubble Sort
- 가장 간단한 정렬 알고리즘
- 가장 비효율적인 정렬 알고리즘
- 첫번째 항목부터 마지막항목까지 서로 인접한 두 원소를 검사하고 필요시 swap
- 작은 원소가 맨 끝으로 이동해서 정렬되는 모습이 거품이 떠오르는 것 같다해서 버블정렬이라고 부름
- 다른 정렬과 달리 이미 정렬되어있는지 여부를 알 수 있음
- 참고자료
    - [버블정렬(bubble sort)이란](https://gmlwjd9405.github.io/2018/05/06/algorithm-bubble-sort.html)
    - [실전 알고리즘강좌 - 버블정렬 _(1.5배속)_ ](https://www.youtube.com/watch?v=EZN0Irp2aPs)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/sort/bubble)

#### 정렬구현
- 관련예제 : [bubble_sort](./bubble_sort.c)
- 인덱스 i, j를 사용해 이중 반복문으로 구현
- 두번째 반복문의 종료조건을 `j < size - i`로 잘못 설정할 경우 인덱스가 item[size]까지 가서 Segfault가 발생함에 유의
<br>

[맨 위로](#bubble-sort)
