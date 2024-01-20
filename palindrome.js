function palindrome(str){
    // replace original string with one without whitespace and entirely lower case
    str = str.replace(/\s/g, "").toLowerCase();
    // verify if word isn't palindrome by checking first and last char (basic verification)
    if (str[0] != str[str.length-1]) {
        console.log("False");
        return false;
    }
    // if only has 1 char remaining, it's a palindrome (case for odd length)
    if (str.length == 1) {
        console.log("True");
        return true;
    }
    // if only has 2 chart remaining, compare them and check if it is or isn't palindrome (case for even length)
    else if (str.length == 2) {
        if (str[0] == str[1]) {
            console.log("True");
            return true;
        }
        else { 
            console.log("False"); 
            return false;
        }
    }
    // if passed/skipped all previous verification, it means 1st and last char are same and we'll remove them from string and recursively continue evaluating it
    return palindrome(str.slice(1, -1));
}

// run function and use user input string as an argument
palindrome(process.argv[2]);