
# 1.1 Count the number of times a word occurs in a paragraph
def count_word_frequency(paragraph, target):
    words = paragraph.split() 
    word_count = 0
    for word in words: 
        cleaned_word = word.strip(".,!?\"'()").lower()
        if cleaned_word == target.lower():
            word_count += 1  
    return word_count 

paragraph = """ A payroll management system is software that enables employers to give salaries to their employees. It is a medium of showing their commitment towards the faculty members and fulfilling their obligations along with keeping financial records in order.
    A payroll management system is an online solution that helps the institutes to pay salaries to the faculty members working there. It is a way how they show their commitment to the faculty in form of benefits, appraisals, and paid leaves. It enables them to fulfill their obligations as stated by the government and keep financial records in order.
    """ 
target_word = input("Enter the word to find its frequency in the paragraph: ") 
frequency = count_word_frequency(paragraph, target_word)
print(f"The word '{target_word}' appeared --{frequency}-- time(s) in the given paragraph.")



# 1.2 Lines, words, and characters of a paragraph
print("\n--- Lines, words, and characters of a paragraph ---")
length=len(paragraph)
print(f"Number of characters: {length}") 
para_words=paragraph.split()
plength=len(para_words)
print(f"Number of words: {plength}")
lines = paragraph.split('\n')
lines_length=len(lines)
print(f"Number of lines: {lines_length}") 


# 1.3 arrange words in an alphabetical order

def sorted_word(word):
    sorted_word = ''.join(sorted(word))
    return sorted_word
print("\n\n\n ----Arrage a word alphabetically---- \n")
word = input("Enter a word for arranging it alphabetically: ")
soted = sorted_word(word)
print(f"The word '{word}' arranged alphabetically is: {soted}")

