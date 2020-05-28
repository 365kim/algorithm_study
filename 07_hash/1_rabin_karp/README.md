## Rabin-Karp
- 문자열 비교 알고리즘
- 전체 문자열과 부분 문자열의 hash값을 비교해서 일치하는 경우에만 문자열을 재검사함
- 해시함수 : Rabin fingerprint <br>
    ![6](https://user-images.githubusercontent.com/60066472/83149712-64850800-a135-11ea-84af-749dca6aa436.png)
    - 1,000,000 ~ 1,000,000,000 사이의 modulo (%) 사용
    - 문자열의 hash값를 구하는 방법이 수식으로 반복되서 속도가 빠름
        - "a"　　→ ('a')
        - "ab" 　→ ('a' x 302¹) + ('b')
        - "abc"　→ ('a' x 302²) + ('b' x 302¹) + ('c')
        - "abcd" → ('a' x 302³) + ('b' x 302²) + ('c' x 302¹) + ('d')
        - "abce" → ('a' x 302³) + ('b' x 302²) + ('c' x 302¹) + ('e')
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/hash/rabin_karp)

#### 정렬구현
- 관련예제 : [get_hash](./get_hash.c), [find_str](./find_str.c)
<br>

[맨 위로](#rabin-karp)
