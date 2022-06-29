Secret Key Split Util
=====================
That Utility allows you to split your secret Key into several pieces, these pieces can be stored in different places of your application code. When needed, you can reassemble the secret Key by applying the XOR function on the splitted pieces.

Secret Key Split Basics
--------------
Here is how XOR based splitting works:
You provide the required number of pieces - n, and the secret key – K. To generate n pieces of your key, you need to create (n – 1) random numbers: R1, R2, R3, . . . , Rn−1. For that you can use a SecureRandom number generator, which will prevent us from duplicates.Then you operate XOR function on these Rn-1 pieces and your key - K:
<br><b>Rn = R1 ⊕ R2 ⊕ R3 ⊕ . . . ⊕ Rn−1 ⊕ K</b>
<br><br>Now you have your n pieces: R1, R2, R3, …, Rn-1, Rn  and you may destroy the K. Those pieces can be spread in your code or sent to users.
<br><br>To reassemble the key, we use XOR operation on our Rn pieces:
<br><b>K = R1 ⊕ R2 ⊕ R3 ⊕ . . . ⊕ Rn−1 ⊕ Rn</b>

With the XOR function (⊕) each piece is inherently important in the reconstruction of the key, if any bits in any of the pieces are changed, then the key is not recoverable. 
