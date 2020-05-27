## 7. Hash
- 해시함수를 이용해 데이터를 저장하는 1차원배열 형태의 자료구조
    - `hashing` : 매핑하는 과정
    - `hash` : 해시함수로 구한 인덱스값
    - `bucket` : 데이터가 저장되는 공간
    - `dictionary pair` : 데이터 단위 _(key, value)_
- __해시함수__ _(hash function)_
    - key 값을 hash로 변환시켜주는 함수
    - _f(key) = hash_
    - hash function가 복잡하다면 시간복잡도는 늘어남
        - 보통 modulo(%) 연산을 많이 사용 _homeBucket = key % hashTableSize_
- __특징__
    - 시간복잡도 O(1)
        - 해시함수로 hash를 구해 저장했기 때문에 검색과정없이 f(key)로 바로 위치를 찾을 수 있음
        - n이 증가하더라도 시간복잡도가 증가하지 않기 때문에 데이터가 아주 많을 경우에 특히 유리함
        - DNA 서열, 암호학 등에서 사용
    - 순서대로 저장하지 않기 때문에 공간효율성이 떨어지고, 순서가 중요한 데이터에는 적합하지 않음
<br>

## 생각해보기
- :speech_balloon: ***hash collision을 줄이는 방법 그리고 hash collision 발생 시 해결 방법은?***
    - __해쉬 충돌__ _(hash collision)_
        - 데이터를 새로 추가하려고 할 때 해당 hash의 bucket이 비어있지 않은 경우 `f(key₁) == f(key₂)`
    - __충돌 최소화 방법__
        - 추가할 key값의 수를 고려한 적절한 hash table의 크기 설정
        - 적절한 hash function 설계
    - __충돌 발생 시 해결방법__
        - __1) Separate Chaining__
            - 충돌이 일어나면 hash 값을 변경하지 않고 기존 값에 linked list형태로 연결하는 방법
            - 2차원으로 바뀌면서 hash의 장점은 잃게됨
        - __2) Open Addressing__
            - 충돌이 일어나면 hash 값을 일정한 규칙에 따라 변경하는 방법
            - 1차원 형태를 유지하면서 hash의 장점은 유지하지만 다른 요인들로 성능이 좌우될 수 있음
            - 해시를 찾는 규칙에 따라 다음과 같이 구분함
                - Linear Probing : i++ 하면서 다음 비어있는 해시를 찾아 저장 (i값도 같이 저장)
                - Quadratic Probing : 해시의 제곱을 한 해시에 저장
                - Double Hashing : 다른 hash function을 한번 더 적용해서 저장
<br>

- :speech_balloon: ***map(table, dictionary), set 자료구조란?***
    - hash map, tree map, hash set, tree set 자료구조의 비교
        - 생각생각
    - array, linked_list, map, set 자료구조의 비교
        - 생각생각

        |　연산　|Aarry<br>　(unsorted)　|Linked<br>　　　list　　　|Aarry<br>　　(sorted)　　|　　　BST　　　<br>(balanced)|:heavy_check_mark:<br>　　　Hash　　　|
        |:---|:---:|:---:|:---:|:---:|:---:|
        | __Get()__ |O(n)|O(n)|O(log₂n)|O(log₂n)|O(1)|
        | __Insert()__ |O(1)|O(1)|O(n)|O(log₂n)|O(1)|
        | __Remove()__ |O(n)|O(n)|O(n)|O(log₂n)|O(1)|
