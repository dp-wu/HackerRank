# https://www.hackerrank.com/challenges/find-a-word/problem?isFullScreen=true
import re


def main():
    s = ""
    n = int(input())
    for i in range(n):
        s += input()
        if i < n-1:
            s += " "
    
    t = int(input())
    for j in range(t):
        p = input()
        pattern = rf'\b{p}\b'
        print(len(re.findall(pattern, s)))
        
main()
