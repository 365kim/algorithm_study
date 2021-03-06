## [1920번](https://www.acmicpc.net/problem/1920) 수 찾기
> 1회 : [성공](./baekjoon_01920_find_number.c)
- stdlib헤더에 정의되어있는 qsort()함수로 정렬 후 이진탐색으로 구현
- `qsort(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *))`
<br>

## [5639번](https://www.acmicpc.net/problem/5639) 이진검색트리
> 1회 : [성공](./baekjoon_05639_binary_search_tree.c)
- 연결리스트를 이용한 이진탐색트리로 구현
- 문제에 입력 종결조건이 따로 주어지지 않아 `while (scanf != EOF)` 로 입력받음
- 후위순회 _(postorder traversal)_ 결과에 맞추어 출력하기 위해 재귀함수 사용
<br>

## [1991번](https://www.acmicpc.net/problem/1991) 트리 순회
> 1회 : [성공](./baekjoon_01991_tree_traversal.c)
- 연결리스트를 이용한 이진트리로 구현
- scanf 와 scanf 사이에 개행이 버퍼에 들어가 오류가 발생하는 것을 막기위해 `getchar()`사용
<br>

## [1927번](https://www.acmicpc.net/problem/1927) 최소 힙
> 1회 : [성공](./baekjoon_01927_min_heap.c) 
- 배열을 이용한 최소 힙으로 구현
<br>

## [11279번](https://www.acmicpc.net/problem/11279) 최대 힙
> 1회 : [성공](./baekjoon_11279_max_heap.c) 
- 배열을 이용한 최소 힙으로 구현
<br>

## [11286번](https://www.acmicpc.net/problem/11286) 절대값 힙
> 1회 : 실패 <br>
> 2회 : 시간초과 <br>
> 3회 : 실패 <br>
> 4회 : [성공](./baekjoon_11286_abs_heap.c)
- 배열을 이용한 절대값 힙으로 구현
- push, pop에서 정렬조건을 정확하게 표현하지 못해서 여러번 실패
    - 절대값이 다를 경우: abs(heap[i/2]) < abs(heap[i]) 되도록 정렬
	- 절대값이 같을 경우: heap[i/2] < heap[i] 되도록 정렬
<br>

## [14425번](https://www.acmicpc.net/problem/14425) 문자열 집합
> 1회 : 실패 <br>
> 2회 : 실패 <br>
> 3회 : [성공](./baekjoon_14425_string_set.c)
- 연결리스트를 이용한 트라이로 구현
- 이중 반복문 내에서 break가 되어야 할 부분에서 continue를 잘못 사용함
<br>


## [4358번](https://www.acmicpc.net/problem/4358) 생태학
> 1회 : 출력초과 <br>
> 2회 : 실패 <br>
> 3회 : [성공](./baekjoon_04358_ecology.c)
- 연결리스트를 이용한 트라이로 구현
- 테스트를 위해 넣어둔 `printf("\n")`로 출력초과 발생
- white space를 포함해서 개행까지 하나의 문자열로 받기 위해 `fgets`사용
- `str[i] != '\0'`이 아닌 `str[i] != '\n'`로 문자열 검사
- 문제의 '사전순으로 출력'은 아스키코드 순서로 하면되는데 굳이 쪼개다가 잘못 쪼개서 틀림
<br>

## [5052번](https://www.acmicpc.net/problem/5052) 전화번호 목록
> 1회 : 실패 <br>
> 2회 : 실패 <br>
> 3회 : [성공](./baekjoon_05052_phone_list.c)
- 연결리스트를 이용한 트라이(10진트리)로 구현
- consistent 조건
    - nbr을 검사하며 거쳐가는 노드 중에 finish==true인 노드가 있을 경우
    - nbr의 마지막 노드인데 그 노드의 child가 있을 경우
- 최초 입력되는 테스트 횟수만큼 while문을 돌면서 root를 초기화하지 않고 그대로 사용해서 두번째 테스트부터 결과가 다르게 나오는 문제가 있었음
<br>

## [1717번](https://www.acmicpc.net/problem/1717) 집합의 표현
> 1회 : 시간초과 <br>
> 2-6회 : 런타임에러 <br>
> 7회 : [성공](./baekjoon_01717_expression_of_set.c)
- 연결리스트를 이용한 유니온파인드로 구현
- find함수에서 경로최적화를 하지않은 문제로 시간초과 발생
- 최대 n + 1개의 집합에서 배열의 크기를 `n + 1`이 아닌 `n`만큼만 할당한 문제와 `init[a - 1]`과 같이 배열의 index를 잘못 참조해서 런타임 오류발생
<br>

## [4195번](https://www.acmicpc.net/problem/4195) 친구 네트워크
> 1-4회 : 시간초과 <br>
> 5-6회 : 실패 <br>
> 7회 : [성공](./baekjoon_04195_virtual_friends.c)
- 유니온파인드로 구현
- 시간초과 해결하기 위해 이름(string)탐색에 트라이 적용
- 67행에서 대문자와 소문자와 같은 int값으로 잘못 반환(`return (c - 'A');`해서 jinny와 Jinny가 같은 값으로 인식되는 문제가 있었음
