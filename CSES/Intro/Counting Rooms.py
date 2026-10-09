import sys
sys.setrecursionlimit(10**6)
r,c = map(int,input().split())
lst = []
for i in range(r):
    s = input()
    temp = []
    for j in s:
        if j == '#':
            temp.append(0)
        if j == '.':
            temp.append(1)
    lst.append(temp)
visit = [[0 for i in range(c)] for j in range(r)]
tot = 0
def dfs(row,col,flag):
    global tot
    if row >= r or col >= c or row < 0 or col < 0 or lst[row][col] == 0 or visit[row][col]:
        return
    if flag:
        tot+=1
    visit[row][col] = 1
    dfs(row + 1,col,False)
    dfs(row - 1,col,False)
    dfs(row,col + 1,False)
    dfs(row, col - 1, False)
    return
for i in range(r):
    for j in range(c):
        dfs(i,j,True)
print(tot)