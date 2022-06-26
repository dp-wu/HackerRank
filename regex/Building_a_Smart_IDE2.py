# https://www.hackerrank.com/challenges/ide-identifying-comments/problem?isFullScreen=true
import re
import sys


def main():
    comment = r'\/\/.*?[\r\n]|\/\*.*?\*\/'
    s = sys.stdin.read()
    result = re.findall(comment, s, re.DOTALL)
    
    for j in result:
        print(re.sub(r"[ ]{3,}", "", j.strip())) # this is very strange
     
main()
