# Find longest word in dictionary that is a subsequence of a given string 
#https://www.careercup.com/question?id=5757216146587648
import collections
import sys

def find_longest_word_in_string(letters,words):
    letter_pos = collections.defaultdict(list)
    for index, letter in enumerate(letters):
        letter_pos[letter].append(index)
    for word in sorted(words, key=lambda w:len(w), reverse=True):
        pos = 0
        for letter in word:
            if letter not in letter_pos:
                break
        
        possible_positions = [p for p in letter_pos[letter] if p>= pos]
        if not possible_positions:
            break
        pos = possible_positions[0] + 1
        else:
             return word


if __name__ == '__main__':
    print(subdict(sys.argv[1],sys.argv[2:])
