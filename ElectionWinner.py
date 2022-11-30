# Elections are conducted i a town that has a population of N.

# All the people of the towncast votes for the various candidates in the town.

# The people of the town realized later that the votes of  only the voter with 18 and above years of age will be cosidered.

# Find the candidates who is the winner, if only the votes of age group 18 and above are considered.

# If the winner cannot be decided or there is a tie , print -1.

# Note:
# You are given an array vote[] which represents the candidate to whom the vote is given and another array age[] which represents the age of that particular voter.

# Test case:
# 10   ---------------------denotes N.
# 1 1 2 3 4 1 2 2 3 1 ----------------------------denotes votes[]
# 24 13 35 15 50 16 20 18 25 64 --------------------------------denotes age[].

# Output:
# 2.

# Hence, candidate 1 gets 4 votes, but 2 of them were given by people whose age is less than 18, so it will not get considered. Therefore, candidate 1 gets 2 votes.

# Candidate 2 gets 3 votes, and all 3 were given by people having age >= 18. Therefore, candidate 2 gets 3 votes.

# Similarly in other cases.


def solution(votes,age,n):

    ans = {}
    flag = 0
    for i in range(len(age)):
        if age[i]>=18:
            flag=1
            if votes[i] not in ans:
                ans[votes[i]] = 1
                
            else:
                ans[votes[i]]+=1
                
    mX = max(ans.values())
    count=0
    for l in ans:
        if ans[l]==mX:
            count+=1
            
    x = dict(sorted(ans.items(),key = lambda x:x[1]))            
    if  count > 1 or flag==0:
        return(-1)
    else:
        print(ans)
        
        return(max(ans,key=ans.get))
        
def main():
    
    N = int(input())
    
    votes = [int(x) for x in input().split(' ')]
    
    age = [int(x) for x in input().split(' ')]
    
    print(solution(votes,age,N))
    
    
    
if __name__ == "__main__":
    main()


