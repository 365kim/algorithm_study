## [2750번](https://www.acmicpc.net/problem/2750) 수 정렬하기
> 1회 : [성공](./baekjoon_02750_number_sorting.c) 
- 최대 1,000개의 정수를 최대 128MB 메모리 사용해서 1초 내 정렬
- scanf로 모두 입력받은 후 버블정렬로 구현
<br>

## [2751번](https://www.acmicpc.net/problem/2751) 수 정렬하기2
> 1회 : [성공](./baekjoon_02751_number_sorting2.c) 
- 최대 1,000,000개의 정수를 최대 256MB 메모리 사용해서 2초 내 정렬
- scanf로 모두 입력받은 후 합병정렬로 구현
- 참고자료 : [수정렬하기2 FAQ](acmicpc.net/board/view/31887)
<br>

## [10989번](https://www.acmicpc.net/problem/10989) 수 정렬하기3
> 1회 : [성공](./baekjoon_10989_number_sorting3.c) 
- 최대 10,000,000개의 자연수를 최대 8MB 메모리 사용해서 3초 내 정렬
- 2750, 2751번과 같이 scanf로 모두 입력받은 후 정렬하면 메모리제한을 초과해버림(40MB)
- 10,000칸짜리 배열에 숫자 i가 주어질 때마다 배열의 i번째 요소의 값을 1씩 증가시키면서 입력을 마치고 요소의 값만큼 순서대로 출력해서 해결
<br>

## [1427번](https://www.acmicpc.net/problem/1427) 소트인사이드
> 1회 : 실패<br>
> 2회 : [성공](./baekjoon_01427_sort_inside.c)
- 자연수를 문자형 배열로 받고 stdlib.h의 qsort()함수를 이용해서 숫자 내에서 자릿수를 내림차순으로 정렬
- qsort()에 넣어주는 compare()함수를 오름차순으로 잘못짜서 1번 실패
<br>

## [1181번](https://www.acmicpc.net/problem/1181) 단어 정렬
> 1-3회 : 시간초과<br>
> 4회 : [성공](./baekjoon_01181_word_sorting.c)
- 시간복잡도 O(n^2)의 버블정렬로 구현해서 시간초과 발생, 퀵정렬 사용해서 해결
<br>

## [10814번](https://www.acmicpc.net/problem/10814) 나이순 정렬
> 1회 : [성공](./baekjoon_10814_age_sorting.c)
- 나이(int)와 이름(str)을 구조체에 담고, 나이가 같을 경우 입력받은 순서대로 정렬하기 위해 안정정렬에 속하는 병합정렬로 구현
- 51행의 `age[i] <= age[j]` 비교식에서 등호가 없으면 불안정정렬이 될 수 있음에 유의
<br>
