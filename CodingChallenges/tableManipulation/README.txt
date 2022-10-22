In this program a n*n table is given.
Each cell in the table is either black or white.
Three different operation can be done on the table:
1. turning the table clockwise for 90 degree 
2. mirroring the table with respect to the middle horizontal line
3. mirroring the table with respect to the middle vertical line
******************************************************************
code is written for a question that was presented on quera.org.
input: 
n -> the number of rows and columns of the table
Table -> it will be given in the next n rows, it is assumed it is a table with black and white cells. "B" stands for black and "W" stands for white
q-> the number of operations
"H"-> if given it means mirror horizontally
"90" -> rotate clockwise for 90 degree
"V" -> mirror the table vertically.
output:
The result table
-------------------------------------
Test Case1:
input:
3
WWB
BWB
WWW
1
H
output:
WWW
BWB
WWB
---------------
Test Case2:
input:
3
WWB
BWB
WWW
1
V
output:
BWW
BWB
WWW
--------------
Test Case3:
input:
3
WWB
BWB
WWW
1
90
output:
WBW
WWW
WBB
-------
Test Case4:
input:
3
WWB
BWB
WWW
2
H
V
output:
WWW
BWB
BWW
