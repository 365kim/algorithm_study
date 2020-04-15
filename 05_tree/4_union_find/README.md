## Union-Find
- __유니온 파인드__ : 여러 서로소 집합의 정보를 저장하고 있는 자료구조
    - 서로소 집합(Disjoint set) : 서로 공통원소가 없는 집합
- [참고자료](https://m.blog.naver.com/ndb796/221230967614)

### 노드생성
- 관련예제 : [create_elem](./create_elem.c),

### 삽입연산
- `union` : 두 집합을 하나로 합치는 연산
- 관련예제 : [union](./union_func.c)

### 참조연산
- `find` : 주어진 원소가 해당하는 집합을 반환(집합을 대표하는 원소 root를 반환)
- 관련예제 : [find](./find.c), [is_disjoint](./is_disjoint.c)
