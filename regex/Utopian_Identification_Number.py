# https://www.hackerrank.com/challenges/utopian-identification-number/problem?isFullScreen=true
import re


def main():
    identifier = r'[a-z]{,3}[\d]{2,8}[A-Z]{3}'
    
    n = int(input())
    for i in range(n):
        s = input()
        if re.match(identifier, s) is not None:
            print("VALID")
        else:
            print("INVALID")

            
main()
