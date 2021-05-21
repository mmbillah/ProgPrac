str1 = "Hello 'Shogun' World!"
print(str1)
str2 = 'Hello "Shogun" World!'
print(str2)

#paste function (for concatenation)

str3 = paste(str1, str2)
print(str3)

#nchar function (for finding total number of characters)

nchar(str3)

#uppercase and lowercase functions

str4 = toupper(str1)  #for making all uppercase
print(str4)
str5 = tolower(str2)  #for making all lowercase
print(str5)

#substring function

str6 = substr(str3,7,18)
print(str6)