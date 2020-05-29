## Rabin-Karp
- 문자열 비교 알고리즘
    - 전체문자열 `haystack` 안에 특정문자열 `needle` 이 있는지 hash값을 비교해서 검사
    - _예시)_ 전체 "abccefghabcd" 중에 특정 "abcd"이 있는지 검사
- __해시함수__ : _Rabin fingerprint_ <br>
    <p><img src="https://user-images.githubusercontent.com/60066472/83149712-64850800-a135-11ea-84af-749dca6aa436.png" width="600"></p>  
    
    - hash충돌을 최소화하기 위한 장치
        - modulo의 operand는 범위 내 최대한 큰 소수로 사용
        - base(2)는 operand에 대한 원시근으로 사용
        - 예시) base = 302, operand = 1000000007
- __알고리즘__
1. `needle`의 hash값
    - "abcd" → ('a' x 2³) + ('b' x 2²) + ('c' x 2) + ('d')
2. `haystack`의 부분hash값
    - [0:4] "abcc" → ('a' x 2³) + ('b' x 2²) + ('c' x 2) + ('c')
    - [1:5] "bcce" → {f([0:4]) - ('a' x 2³)} x 2 + ('e')
    - [2:6] "ccef" → {f([1:5]) - ('b' x 2³)} x 2 + ('f')
    - ...
    - [8:12] "abcd" → {f([7:11]) - ('h' x 2³)} x 2 + ('d')
3. hash값이 일치하면 동일한 문자열로 간주
    - 틀릴 가능성을 감수하고라도 두 문자열이 같은지 비교하지 않음
    - 실제로 두 문자열이 동일한지를 비교하면 시간초과가 발생하게 되고, base와 operand가 잘 설정되었다면 답이 틀릴 확률도 매우 낮음

- __참고자료__
    - [BarkingDog 실전알고리즘 - 문자열(KMP, 라빈카프)](https://blog.encrypted.gg/857)
    - [라빈카프(Rabiin-Carp) 알고리즘](https://idea-sketch.tistory.com/24)
    
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/hash/rabin_karp)

#### 정렬구현
- 관련예제 : [get_hash](./get_hash.c), [find_str](./find_str.c)
<br>

[맨 위로](#rabin-karp)
