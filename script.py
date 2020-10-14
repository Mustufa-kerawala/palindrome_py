import re
"""
 if 
"""

def check_palindrome(string):
	forward_list = ''.join(re.findall(r'[a-z]+', string.lower())) 
	backwards_list = forward_list[::-1]
	return forward_list == backwards_list

# print(check_palindrome("eggnog"))
# print(check_palindrome("level"))
# print(check_palindrome("refer"))
print(check_palindrome("Eva can I stab bats in a cave"))
