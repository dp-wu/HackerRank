# https://www.hackerrank.com/challenges/find-hackerrank/problem?isFullScreen=false
import re


def main():
  p1 = r'^hackerrank.+?(?!hackerrank)$'
  p2 = r'^(?!<hackerrank).+?hackerrank$'
  p0 = r'^(hackerrank)[\w]*\1?$'
  
  n = int(input())
  for i in range(n):
    s = input()
    if re.match(p0, s) is not None:
      print('0')
    elif re.match(p1, s) is not None:
      print('1')
    elif re.match(p2, s) is not None:
      print('2')
    else:
      print("-1")

main()
