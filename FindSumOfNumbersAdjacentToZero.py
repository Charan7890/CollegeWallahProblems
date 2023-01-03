# coding question:
'''
Suppose assume that you are given a 2D array of size m,n where m,n are integers.
Find the sum of elements adjacent to zero.ie., top,left,bottom and right.

Eg:

CASE - 1:

3
4
5 5 6 7
1 0 2 5
4 5 6 8
The result is: 13.

CASE - 2:

3
4
0 5 6 7
1 2 2 5
4 5 6 8
The result is: 6.

CASE - 3:

3
4
5 5 6 7
1 2 2 5
4 5 0 8
The result is: 15.

'''
# Code starts from here...
def main(m,n,l):
    ans,fg = 0,1
    for i in range(m):
        for j in range(n):
            if l[i][j] == 0:
                
                # initial case l[0][0]
                if i==0 and j==0:
                    ans = l[i][j+1] + l[i+1][j]
                    fg = 0
                    break
                
                
                # top-right case l[0][n-1]
                elif i==0 and j==n-1:
                    ans = l[i][j-1]+l[i+1][j]
                    fg = 0
                    break
                
                
                # bottom-left case l[m-1][0]
                elif i==m-1 and j==0:
                    ans = l[i-1][j] + l[i][j+1]
                    fg = 0
                    break
                
                
                #bottom-right case l[m-1][n-1]
                elif i==m-1 and j==n-1:
                    ans = l[i-1][j] + l[i][j-1]
                    fg = 0
                    break
                
                
                # bottom & top center cases
                elif i==0:
                    ans = l[i][j-1]+l[i][j+1]+l[i+1][j]
                    fg = 0
                    break
                elif i==m-1:
                    ans = l[i-1][j] + l[i][j-1] + l[i][j+1]
                    fg = 0
                    break
                
                
                #middle matrix
                if i>0 and j>0:
                    ans = l[i-1][j] + l[i][j-1] + l[i][j+1] + l[i+1][j]
                    fg = 0
                    break
                else:
                    pass
            else:
                pass
                
        if fg==0:
            break
        
    return(ans)


if __name__ == "__main__":
    
    m = int(input())

    n = int(input())
    
    l= []
    
    for i in range(m):
        l.append(list(map(int,input().split(' '))))
    
    # print(l)
    print("The sum of numbers adjacent to zero is:",main(m,n,l))

    
        
        
    
