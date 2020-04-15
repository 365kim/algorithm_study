## Union-Find
- __유니언-파인드__ : 여러 서로소 집합의 정보를 저장하고 있는 자료구조
    - 서로소 집합 _(disjoint set)_ : 서로 공통원소가 없는 집합
- [참고자료](https://brenden.tistory.com/33)

### 노드생성
- 관련예제 : [create_elem](./create_elem.c)

### 참조연산
- `find` : 주어진 원소가 해당하는 집합을 반환 _(집합을 대표하는 원소 root를 반환)_ 하기 위하여 재귀함수 사용
- `is_disjoint` : 두 집합의 root가 다른지 검사하여 서로소 집합인지 판별
- 관련예제 : [find](./find.c), [is_disjoint](./is_disjoint.c)

### 삽입연산
- `union` : 두 집합을 하나로 합치는 연산
- 일반적으로 두 집합 중 더 작은 값을 parent로 함
- 관련예제 : [union](./union_func.c)
