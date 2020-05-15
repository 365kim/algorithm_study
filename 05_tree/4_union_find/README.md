## Union-Find
- __유니언-파인드__ : 여러 서로소 집합의 정보를 저장하고 있는 트리 형태의 자료구조
    - 서로소 집합 _(disjoint set)_ : 서로 공통원소가 없는 집합
- 참고자료
    - [유니온 파인드(Union Find, Disjoint Set)](https://www.crocus.co.kr/683)
    - [[Algorithm] 유니온 파인드](https://ssungkang.tistory.com/entry/Algorithm-%EC%9C%A0%EB%8B%88%EC%98%A8-%ED%8C%8C%EC%9D%B8%EB%93%9CUnion-Find)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/tree/union_find)


#### find연산
- 주어진 원소가 해당하는 집합을 반환 _(집합을 대표하는 원소 root를 반환)_ 
- 경로압축 최적화 _(Path Compresssion)_
    - 시간복잡도가 낮은 트리의 장점을 살리기 위해 find연산 대상 노드의 parent를 바로 root로 연결해줌
    - `return (root)` : 경로압축하지 않음
    - `return (node->parent = root)` : 경로압축함
- 관련예제 : [find](./find.c)
<p align="center"><img src="https://user-images.githubusercontent.com/60066472/80176638-35f6a780-8634-11ea-8619-e16ca85b6718.png" width="600"></p>

#### is_disjoint연산
-  두 집합의 root가 다른지 검사하여 서로소 집합인지 판별
- 관련예제 : [is_disjoint](./is_disjoint.c)

#### union연산
- 두 집합을 하나로 합치는 연산
- 위계에 따른 최적화 _(Union by rank)_
    - 두 집합 중 더 rank(level)가 작은 값을 parent로 해서 더 높은 트리 밑으로 들어가게 되면 점점 tree가 한쪽으로 치우치게 되는 것을 방지
- 관련예제 : [union](./union_func.c)
<br>

[맨 위로](#union-find)
