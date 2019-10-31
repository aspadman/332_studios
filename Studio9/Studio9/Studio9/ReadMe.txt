For the vector, list, and deque I can just do push_back for all of them. I push back 1, then 2, then 3 and so
for each of these containers the order should 1, 2, 3 since I am pushing to the back of the list. 

For the forward_list, since I can only push_front, I push front 3, 2, and then 1 so that the order 
is also 1, 2, 3. 

Output of printing the contents of each of the containers:

H:\332_Local_Repo\332_studios\Studio9\Studio9\Debug>Studio9.exe
1
2
3
1
2
3
1
2
3
1
2
3

I think that we can use a random_access iterator with a vector and deque since both of these containers
have elements that are contigious in memory, but not with lists and forward_lists since these containers
do not contain elements that are contigious in memory. 

Just to test that the sorting was working, I pushed the values in the order 3, 2, 1, to deque. The output shows
that indeed the sorting was succesful. 

H:\332_Local_Repo\332_studios\Studio9\Studio9\Debug>Studio9.exe
1
2
3
1
2
3
1
2
3
3
2
1
1
2
3
1
2
3

Given that a list supplies a bidirectional iterator, std::reverse() should work on a list. It will also 
work on a vector and deque since they have random access iterators. It will not work on a forward_list 
because a forward_list has a forward_iterator.

Output from std::reverse():

H:\332_Local_Repo\332_studios\Studio9\Studio9\Debug>Studio9.exe
1
2
3
1
2
3
1
2
3
1
2
3
1
2
3
1
2
3
3
2
1
3
2
1
3
2
1

Indeed the output shows that the order of the three containers have been reversed (we see 3, 2, 1 three times at
the bottom of the output).