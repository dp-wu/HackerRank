# https://www.hackerrank.com/challenges/detect-html-tags/problem?isFullScreen=true
# In the question it mentioned: there may be 1 or more spaces before or after the tag name (i.e. <    tag >).
# But as we can see that I didn't code for the spaces (and so far I don't know how to) but it still passed all the test cases.
# So... hmmm. :/
import re

def find_tags(h):
    pattern = r"(?<=<)[A-Za-z0-9]+[\/]?(?=.*>)"
    m = re.findall(pattern, h)
    return m

def main():
    n = int(input())
    r = []
    while n > 0:
        h = input()
        r += find_tags(h)
        n -= 1
    result = sorted(set(r)) # the result needed to be sorted alphabetically somehow :/
    print(*result, sep=';')

main()
