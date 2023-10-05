def printN(N):
    for i in range(N):
        print(i)

def printN_re(N):
    if(N):
        printN_re(N-1)
        print(N)

# For loop
printN(N=int(input()))
print('The for loop completed!')
printN_re(N=int(input()))
# Recursion
print('The recursion completed!')
