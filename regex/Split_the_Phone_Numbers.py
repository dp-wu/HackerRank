# https://www.hackerrank.com/challenges/split-number/problem?isFullScreen=true
import re


pattern = r'([\d]{1,3})[- ]([\d]{1,3})[- ]([\d]{4,10})'

def main():
    n = int(input()) 
    while n > 0:
        s = input()
        m = re.match(pattern, s)
        print("CountryCode={},LocalAreaCode={},Number={}".format(m.group(1), m.group(2), m.group(3)))
        n -= 1

main()
