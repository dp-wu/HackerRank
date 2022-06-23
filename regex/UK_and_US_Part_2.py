# https://www.hackerrank.com/challenges/uk-and-us-2/problem?isFullScreen=true
import re


def main():
    n = int(input())
    s = ""
    for i in range(n):
        s += input()
        if i < n-1:
            s += " "
    
    t = int(input())
    for j in range(t):
        uk = input()
        us = re.sub('our', 'or', uk)
        ukus = rf'({uk}|{us})\b' # need the word boundry otherwise test case 5 wouldn't pass
        result = len(re.findall(ukus, s))
        print(result)

        
main()
