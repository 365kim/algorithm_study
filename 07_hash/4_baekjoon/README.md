## [15829번](https://www.acmicpc.net/problem/15829) Hashing
> 1회 : [성공](./baekjoon_15829_hashing.c)
- 문제에서 제시한 라빈카프 알고리즘을 이용해서 구현 (BASE 31, BIG PRIME 1234567891)
<br>

## [7785번](https://www.acmicpc.net/problem/7785) 회사에 있는 사람
> 1-5회 : 실패<br>
> 6회 : [성공](./baekjoon_07785_easy_work.c)
- 회사원의 이름을 strcpy로 저장해주고 마지막에 남아있는 사람들의 이름을 finals에 담아 머지소트롤 정렬해서 역순으로 출력함
- 회사원의 이름을 삭제할 때 이름의 첫글자에 널문자를 넣어주고 finals에 이름을 옮겨닮을 때 이름의 첫글자가 널문자이면 건너뛰도록 함
- 해시충돌을 처리하지 않아서 계속 실패함
<br>

## [1920번](https://www.acmicpc.net/problem/1920) 수 찾기
> 1회 : 런타임에러<br>
> 2회 : [성공](./baekjoon_01920_find_number.c)
- 이전에 [이진탐색](https://github.com/365kim/algorithm_study/blob/master/05_tree/5_baekjoon/baekjoon_01920_find_number.c)으로 구현했던 문제를 해시셋으로 구현
- get_hash() 함수에서 int형 data를 long long형으로 형변환해준 뒤  연산을 시작하게 해서 런타임에러 해결
<br>

## [14425번](https://www.acmicpc.net/problem/14425) 문자열 집합
> 1회 : [성공](./baekjoon_14425_string_set.c)
- 이전에 [트라이](https://github.com/365kim/algorithm_study/blob/master/05_tree/5_baekjoon/baekjoon_14425_string_set.c)로 구현했던 문제를 해시셋으로 구현
- 제출한 코드 기준, 해시로 구현했을 때가 트라이로 구현했을 때보다 약 8배 빠른 성능이 나옴
<br>

## [1764번](https://www.acmicpc.net/problem/1764) 듣보잡
> 1-2회 : 실패<br>
> 3회 : [성공](./baekjoon_01764_unknown.c)
- 사전순으로 출력하는 조건이나 듣보잡의 수(count)를 출력하는 조건을 하나씩 빼먹어서 실패
<br>

## [5052번](https://www.acmicpc.net/problem/5052) 전화번호 목록
> 1회 : 실패<br>
> 2회 : [성공](./baekjoon_05052_phone_list.c)
- 이전에 [트라이](https://github.com/365kim/algorithm_study/blob/master/05_tree/5_baekjoon/baekjoon_05052_phone_list.c)로 구현했던 문제를 해시맵으로 구현
- 911234 다음에 911이 입력되었을 때 일관성이 있는 것으로 잘못 판단해서 실패함
<br>

## [1786번](https://www.acmicpc.net/problem/1786) 찾기
> 1-2회 : 시간초과<br> 
> 3-5회 : 실패<br>
> 6회 : [시도중](./baekjoon_01786_finding.c)

