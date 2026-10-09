from collections import deque

row, col = map(int, input().split())

lst = []

for i in range(row):
    lst.append(input())

ra, ca, rb, cb = 0, 0, 0, 0

for i in range(row):
    for j in range(col):
        if lst[i][j] == 'A':
            ra, ca = i, j
        elif lst[i][j] == 'B':
            rb, cb = i, j

visit = {(ra, ca)}
q = deque([(ra, ca)])

rr = [1, 0, -1, 0]
cc = [0, 1, 0, -1]

moves = ['D', 'R', 'U', 'L']

dist = [[-1] * col for _ in range(row)]
dist[ra][ca] = 0

parent = [[None] * col for _ in range(row)]

while q:

    oldr, oldc = q.popleft()

    if (oldr, oldc) == (rb, cb):
        break

    for i in range(4):

        dr = oldr + rr[i]
        dc = oldc + cc[i]

        if (dr < 0 or dc < 0 or
            dr >= row or dc >= col or
            (dr, dc) in visit or
            lst[dr][dc] == '#'):
            continue

        visit.add((dr, dc))
        q.append((dr, dc))

        dist[dr][dc] = dist[oldr][oldc] + 1
        parent[dr][dc] = moves[i]


if dist[rb][cb] == -1:

    print("NO")

else:

    print("YES")
    print(dist[rb][cb])

    path = []

    while (ra, ca) != (rb, cb):

        move = parent[rb][cb]
        path.append(move)

        if move == 'D':
            rb -= 1
        elif move == 'L':
            cb += 1
        elif move == 'R':
            cb -= 1
        elif move == 'U':
            rb += 1

    print(''.join(reversed(path)))