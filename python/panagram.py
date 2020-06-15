def ispangram(string): 
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in alphabet: 
        if char not in string.lower(): 
            return False
  
    return True
      
# Driver code 
string =input("Enter a sentence to check panagram or not: ")
if(ispangram(string) == True): 
    print("Yes") 
else: 
    print("No") 

