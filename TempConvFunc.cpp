# i n c l u d e   < i o s t r e a m > 
 # i n c l u d e   < i o m a n i p > 
 # i n c l u d e   < c m a t h > 
 
 u s i n g   n a m e s p a c e   s t d ; 
 
 d o u b l e   c e l T o F a h r   ( d o u b l e   c e l s i u s ) 
 { 
 	 r e t u r n   ( 9 . 0   /   5 . 0 )   *   c e l s i u s   +   3 2 ; 
 } 
 d o u b l e   f a h r T o C e l   ( d o u b l e   f a h r e n h e i t ) 
 { 
 	 r e t u r n   ( 5 . 0   /   9 )   *   ( f a h r e n h e i t   -   3 2 ) ; 
 } 
 
 i n t   m a i n ( ) 
 { 
 	 c o u t   < <   s e t w ( 1 2 )   < <   " C e l s i u s "   < <   s e t w ( 1 2 )   < <   " F a h r e n h e i t "   < <   s e t w ( 1 2 )   < <   " | "   < < 
 	 	 s e t w ( 1 2 )   < <   " F a h r e n h e i t "   < <   s e t w ( 1 2 )   < <   " C e l s i u s "   < <   e n d l ; 
 	 c o u t   < <   " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "   < <   e n d l ; 
 
 	 d o u b l e   c e l s i u s   =   4 0 ;   d o u b l e   f a h r e n h e i t   =   1 2 0 ; 
 	 f o r   ( i n t   i   =   1 ;   i   < =   1 0 ;   c e l s i u s - - ,   f a h r e n h e i t   - =   1 0 ,   i + + ) 
 	 { 
 	 	 c o u t   < <   s e t w ( 1 2 )   < <   c e l s i u s   < <   s e t w ( 1 2 )   < <   c e l T o F a h r ( c e l s i u s )   < <   s e t w ( 1 2 )   < <   " | "   < < 
 	 	 	 s e t w ( 1 2 )   < <   f a h r e n h e i t   < <   s e t w ( 1 2 )   < <   s e t p r e c i s i o n ( 5 )   < <   s h o w p o i n t   < <   
 	 	 	 f a h r T o C e l ( f a h r e n h e i t )   < <   e n d l ; 
 
 	 r e t u r n   0 ; 
 	 } 
 } 