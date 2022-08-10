# Re.findall() & Re.finditer()
# solving the problem without using re
# I originally want to use nested for-loop, but very soon i realized i couldn't modify index of the for-loop
# here is the reference: https://stackoverflow.com/questions/14785495/how-to-change-index-of-a-for-loop


vowels = 'aeiouAEIOU'
s = input() # read in input S
s_length = len(s) # get length of S
no_match = True # if there is no match, return -1

c_index = 0
while c_index < s_length:
    if s[c_index] in vowels:  # if current character is a vowel
        for v_index in range(c_index+1, s_length):
            if s[v_index] not in vowels:
                # if current character is not a vowel
                if (v_index - c_index) >= 2:
                    print(s[c_index: v_index])  # we have found one of the substring, printit 
                    c_index = v_index  # modify index
                    no_match = False  # found at least on match
                break
    c_index += 1

# if there is no match, return -1
if no_match:
    print(-1)
