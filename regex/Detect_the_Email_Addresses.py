# https://www.hackerrank.com/challenges/detect-the-email-addresses/problem?isFullScreen=true
import re


def main():
    n = int(input())
    email = r'\b[\w\d\._]+\@[\w\d\._]+\b' # I couldn't get group work here for some reason ()@\1
    result = set() # this way we don't need to remove the duplicates manually, python is awesome :D
    
    for i in range(n):
        s = input()
        found = re.findall(email, s)
        for j in found:
            result.add(j)
    
    print(*(sorted(result)), sep=";")
main()
