#Binary system 
 The binary system is widely used and applied in computer systems, using 0 and 1 as possibilities for storing data, since this way there are greater possibilities of stored data.
TIn the binary system of computing, each element is called a "BIT", which can be 0 and 1. Using transistors, 1 is on and 0 is off. 
Therefore, with an example of three elements, instead of considering 111 as three or 011 as two, we use 011 as 3, 001 as 1, 000 as 0, 010 as 2, 011 as 4 and so on, allowing these 3 elements to generate up to 8 possibilities, counting from 0 to 7 instead of 1 to 3 with the first example.
The explanation for this is that depending on the binary house, the number allocated in it (0 or 1) is multiplied by 2 raised to the nth power, in which n is the number of the house, which can be counted from right to left starting from zero. Than, we sum all the new numbers calculated. So, for example, we have the binary 011, where we have 1 times 2 to the 0th power (first place), 1 times 2 to the 1st power (second place) and finally 0 times 2 to the 2nd power (third place), adding the new numbers we will have 0 + 2 + 1 = 3.
In computing, the term "Byte" means the set of 8 bits, which can form up to 256 cases, counting from 0, based on the previous logic.


#ASCII 
  This system uses bytes to represent characters. In the example of the English language, using the binary system, ASCII is capable of representing up to 256 different characters, which were defined several years ago. Thus, each decimal number (0 to 255) that can be calculated by a byte is defined as a character. The letter A (in caps-lock) is represented by the number 65, which in the byte system would be 01000001.


#Unicode 
  This is a more recent system, created to solve the problem of lack of characters. It uses up to 32 bits (4 bytes), which can define more than 4 billion characters, making it possible to catalog all types of symbols used for communication throughout history, from letters to emojis.


#Color 
  In this system, it is commonly called RGB (R-red, G-green, B-blue). Each letter represents a byte that together represent 3 bytes. For each one, there are 256 intensities, which combined form different colors. For example, the set 0, 0, 0 represents the color black because it is the absence of all colors, while the set 255, 255, 255 represents the color white, since it represents the three colors at their greatest intensity. These sets can be visualized by pixels, where each pixel has a set of 3 bytes that can represent all of these colors.


#Representation 
  Texts - Texts are represented by a set of characters, like with ASCII the word "HI" is represented by to bytes, 72 (01001000) and 73 (01001001).
  Images - Images are represented by a set of pixels, each of which has a specific color, as explained above. The higher the resolution, the greater the number of pixels, and therefore, the greater the number of bytes. This is how the names Gigabytes (1,000,000,000 bytes) or Megabytes (1,000,000 bytes) come about, for example.
  Videos - Videos are represented by a set of images per second, for example, a 60-frame video is represented by 60 images per second shown one after the other, giving the sensation of movement to the eyes. 
  Sounds - Sounds can be represented with the same idea as colors, by a set of 3 or more bytes, one for the tone, another for the volume, another for the duration and so on.


#Algorithm 
  These are sequences of steps taken to solve a problem. For example, the steps taken to find a specific number in a telephone directory organized in alphabetical order. In this case, the steps of searching page by page until finding the desired number can be used. However, depending on the size of the book and the desired name, this solution can take a long time, so to optimize the solution time, a sequence of different steps can be used, in which the book is divided in half, and after the letter that stops, the part where the name will certainly not be is discarded, and this is repeated as many times as necessary to find the desired page and number. In this way, a problem that would be solved in 1000 steps (considering a thousand pages), could be solved in up to 10 steps, making this algorithm faster and more efficient.


#Pseudocode 
  This is a way to whrite an algorithm with a sequence of steps. As an example we have :
     {Pick up the phone number
     Open to the middle of book
     Look at the page 
       If person is on the page 
           Call person
       Else if person is earlier on the book 
           Open to the middle of left half of book
           Back to line 36
       Else if person is later on the book 
           Open to the middle of right half of book
           Back to line 36
       Else
           Quit}
  The words "Pick up, Look at, Open to, Call and Quit" are considered functions.
  The words "If and Else if" are considered conditions, which will be chosen if the question that comes after them is true.
  The questions are boolean, which can be true or false.
  The words "Go back to" cause the steps to return to a certain line, making the pseudocode a loop until a final result is found (Quit or Call).
  Bugs occur when there is an infinite loop, where the pseudocode never reaches a final result


#Atificial Intelligence 
  This system allows, based on a lot of training and database, a more likely result to be found without the need to write thousands of lines of code for each possible question. Artificial intelligence is based on probability and statistics, and therefore training is necessary so that it can find an answer that appears to be the most appropriate for a problem. For example, in a virtual chat bot, assuming that the user can ask infinite types of questions, it would be impossible to have an answer for each one by writing them in code, and for this reason an AI would be used.


#Scratch 
  Scratch is an easier way to program created by MIT, in which, instead of writing code directly as in pseudocode, puzzle pieces (functions) are used to perform algorithms.


