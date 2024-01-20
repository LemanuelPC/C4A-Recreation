def palindrome(s):
    # Replace original string with one without whitespace and entirely lower case
    s = ''.join(s.split()).lower()

    # Verify if word isn't a palindrome by checking first and last char (basic verification)
    if s[0] != s[-1]:
        print("False")
        return False

    # If only has 1 char remaining, it's a palindrome (case for odd length)
    if len(s) == 1:
        print("True")
        return True

    # If only has 2 chars remaining, compare them and check if it is or isn't a palindrome (case for even length)
    elif len(s) == 2:
        if s[0] == s[1]:
            print("True")
            return True
        else:
            print("False")
            return False

    # If passed/skipped all previous verification, it means 1st and last char are same
    # and we'll remove them from string and recursively continue evaluating it
    return palindrome(s[1:-1])

# Run function and use user input string as an argument (if running this script directly)
if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        palindrome(sys.argv[1])
    else:
        print("Please provide a string as an argument.")