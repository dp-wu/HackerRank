# https://www.hackerrank.com/challenges/hackerrank-language/problem?isFullScreen=true
import re


def main():
    s = "C:CPP:JAVA:PYTHON:PERL:PHP:RUBY:CSHARP:HASKELL:CLOJURE:BASH:SCALA:ERLANG:CLISP:LUA:BRAINFUCK:JAVASCRIPT:GO:D:OCAML:R:PASCAL:SBCL:DART:GROOVY:OBJECTIVEC"
    api_pattern = r'^\d+ ([A-Z]+)$'
      
    n = int(input())
    for i in range(n):
        api = input()
        api = re.match(api_pattern, api) # extract language name from given api id
        
        if api is not None:
            result_pattern = rf':{api.group(1)}:|:{api.group(1)}$|^{api.group(1)}:'
            result = re.search(result_pattern, s) # need to use search here, match wouldn't work
            
            if result is not None:
                print("VALID")
                continue
        print("INVALID")
    
main()
