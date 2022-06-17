# https://www.hackerrank.com/challenges/detect-html-tags/problem?isFullScreen=true
import re

def find_tags(h):
    pattern = r"(?<=<)\b[A-Za-z0-9]+[\/]?\b(?=.*>)"
    m = re.findall(pattern, h)
    return m

def main():
    n = int(input())
    r = []
    while n > 0:
        h = input()
        r += find_tags(h)
        n -= 1
    result = sorted(set(r))
    print(*result, sep=';')

main()
