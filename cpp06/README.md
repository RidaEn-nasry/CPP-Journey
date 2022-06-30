# ⚠️ IMPORTANT
I bet my left testical you won't complete this reading, actually i bet my left testical + right liver you won't complete this reading, why i'm so sure ?? i'm supported by statistics which says 92% of the population never complete shit that they started. which means i have 92% chance of being right!. but if you're of that tiny 8% you will be prized with massive knowledge and clarity especially if you go through the quizzes too , but i fucking know you won't complete it. 

#  Stone 0.0 🗿
 
## Scalar types   
As most concepts in CS, scalar type concept is stupidly confusing, and naively misused, not because it's actually a complex concept by heart, it's actually as simple as baby shit. but because it has many definitions which totally goes against it's native meaning in literal language. 
Scalar in the fat dictionary stands for:
> **A quantity such as mass, length, or speed that is completely specified by its magnitude and has no direction.**<br> 


In layman language it's something that can represent scale or volume. However this is the [definition](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/1995/N0774.pdf) of scalar type in c++ open standard specification: 
>  **Scalars are primitive objects which contain a single value and are not composed of other C++ objects.**<br>

Again in layman language it means a scalar type is a type which exist natively in the language (int, char, double) , and it only contains one single and sole value , not two not three, for example **int** is a scalar type , it's built-in in c++ and cannot be decomposed into further data types it's like an atom, thus scalar types are also called **atomic types** , an example of non-scalar types is arrays, arrays are native c++ data types however they're composite, they contains many values of something, (array of ints, chars...), thus they're not scalar types. because they go against rule 2.0 of scalar types, the one that says no fucking decomposability. another example is **boolean** **is it native ?** good, rule 1.0 checked, **is it composite ?** i don't think so, thus boolean is a scalar type. <br>
Now in case you not confused yet, let me confuse you, What in the fuck does a boolean has to do with a quantity or a scale, the answer is nothing, and whoever wrote this specification should buy a fucking dictionary. 

## Implicit Type Conversion 
### Shit you already know.

```
double increment( double x ) {
    std::cout << "Size of x after conversion: " << sizeof(x) << std::endl;
    return (x + 1);
};

int main( void )
{
    int x = 1;
    std::cout << "Size of x before conversion: " << sizeof(x) << std::endl;
    std::cout << increment(x) << std::endl;
    return (0);
}
 
```
The above example, showcase **Implicit Conversion** in practice, you've seen and used implicit conversion countless times in your C projects, but just to give a little refresher **implicit conversion is when you the brogrammer being obnoxiously lazy to even cast your fucking types and delegate the shit to the compiler** , so the compiler happily (not every time) cast your types before evaluating the rest of the block, in a more formal way, implicit conversion performed when a type T1 is used in a context when type T2 is expected.(i stole the latter definition from cpp reference btw, still mine is way efficient), so in the above example we passed an `int x` to a function that accepts argument of type  `double` and we printed it's size in both contexts, the output we got is: 
```
$ Size of x before conversion: 4
$ Size of x after conversion: 8
```
We know that a pass-by-value will create a copy of the argument in the called function, in this case `increment()` function, however an extra step is required in this call since the type of function argument is dissimilar to the argument we passed, an implicit conversion will take place. and `increment()` function will be working with copy of x with type `double`. hence the second line of output convey the conclusion (8bytes == 64bits == double).


However as i mentioned the compiler is not always happy doing your obligation, for example let's make it scream

```
int increment( int x ) {
    return (x + 1);
};

int main( void )
{
    std::cout << increment(2.5) << std::endl;
    return (0);
}
```
We modified the previous example, instead of implicitly converting an  `int to double` now it's a `double to int` , if you try to compile this program, you'd be screamed at like : 
```
 $ error: implicit conversion from 'double' to 'int' changes value from 2.5 to 2 [-Werror,-Wliteral-conversion]
    std::cout << increment(2.5) << std::endl;
```
To belabor the obvious and make you even more bored than you're now, an integer cannot represent decimal points and you end up with a half-ass copy of your data, the implicit conversion still happen but you get a warning to resolve, and if you don't consider warnings as errors then you're even a more shittier brogrammer than the shitty brogrammer you're. 

### Ways implicit conversion sneak you out.

These are the contexts where implicit conversion will take place: <br>
 ➤ passing an argument of type **T1** to a function that accepts a type of **T2** . (see previous example). <br>
 ➤ returning a type **T2** from a function that return type **T1** : <br>

```
int Something( void ) {
    return (1.8);
}
``` 

➤ initializing a variable of type **T1** with a value of type what ?? genius !! **T2**. <br>

```
float f = 1.5;
```

**NOTE:** c++ treat decimals (numbers contains '.' ) as double data type, 1.5 in the above ex, is double literal converted to float.<br>

➤ using binary operands (-+/..) with values of dissimilar types. <br>
```
int x = 8.0 / 4;
```

### Shit you think you don't know but you actually already know ?
When you the brogrammer invoke a type conversion either implicitly or explicitly (we'll talk about it soon), the compiler will decide if it can convert between your types and if it can how the fuck can it (the compiler) do so ? <br>
**NOTE:** : when a type conversion takes place a new value is created of your (converted to) type from your (converted from) type, hence your old type and it's value remains unchanged.<br> 
"But hey how does the compiler know how to convert between different data types" you asking ? well there's a thing called the **standard conversion** , it's a set of specifications that decides what the fuck will happen when 2 specific types is being converted, this standard can be divided into 4 categories : <br> <br>
🖕 **Numeric promotions.** <br>
🖕 **Numeric conversions.** <br>
🖕 **Arithmetic conversions.** <br>
🖕 **Other conversions.** <br>

So the compiler decides if a conversion is valid or not by looking (roughly speaking ) into these standards and if your conversion doesn't match none of these standards he'll scream at you, We'll get into each of these guys and try destructor them next. <br>

🖕 **Numeric promotions:**<br>
As it read, it's a promotion from lesser to a bigger type, in more technical terms a wider type (more bits) to a narrower type (less bits), this type of conversion happens when you the brogrammer try to assign narrower numeric data type to a wider numeric data type (i.e `char` to `int` or `bool` to `int`) this kind of conversion have the characteristics of value-preserving, i mean it's obvious isn't it ?? doesn't click yet ?? fuck!!!! here's an example converting a `char` to an `int` <br>
```
char character = 'a';
int integer = character;
```
`character` binary representation is `01100001` so the compiler will create a new value of type `int` with your `character` binary pattern and then add 24 zeros towards the most significant bit something like `00000000000000000000000001100001` and then assign it to `integer` varibale and remember your `character` variable remains unchanged. <br>

Still **Numeric promotions** is too divided into 2 categories: <br>
🦶 Floating point promotions <br> 
🦶 Integral promotions <br>
You might be asking what's going on with this category thing, a lot of categories right?? fuck!! me too it's too much for something too simple, but still i think the reason they've tried to split floating point promotions from integral promotions is the very difference in the internal binary representation `float` and `double` use the IEE754 representation which is way different from raw binary that the rest of integrals uses. <br>
As you might guessed floating point promotions is used to convert 32bit single precision `float` to 64bits double precision `double` .<br>
While integral promotion is used to convert the rest of the horde: <br>
* `signed char` or `signed short` can be converted to `int`. <br>
* `unsigned char` , `char8_t` and `unsigned short` can be converted to `int` if can hold the range of the type or `unsigned int` otherwise. <br>

* `bool` can be converted to `int`, false becoming 0 and true becoming 1.<br>

🖕 **Numeric conversions.** <br>
**Numeric conversions** takes care of what numeric promotions did not these including the following conversions:

🦶 **Wider integral types to narrower integral types** <br>
```
int integer = 4565;
short shorVar = integer; // int (4bytes) to short (2bytes)
char character = shortVar; // short (2bytes) to char (1byte)
long int looong = 8888888;
integer = looong; // long int (8bytes) to int (4bytes)
long long int loooooooong = 9999999;
integer = loooooooong ; // long long int (8bytes) to int (4bytes) 
```

**NOTE:** `long` size in my Mac OS X M1 is 64bits however in some architectures it's 32bits still it's a considered a numeric conversion even though types are equal in size. <br>

🦶 **Wider floating point type to narrower floating point type** <br>
```
double d = 4.5;
float f = d; // double(8bytes) to float(4bytes) 
long double ld = 55667.2334;
d = ld; // long double (12bytes) to double(8bytes)
```

🦶 **converting integral type to floating point type or vice versa.** <br>
```
int i = 6.3; // double (8bytes) to int (bytes) (note: 6.3 is considered double cause any numeric literal with decimal point '.' is considered a double literal )

double d = 8; // int (4bytes) to double (8bytes) (8 is an integer literal)
```
🦶 **converting floating point or integral type to a bool or vice versa.** <br>
```
int x = true; // bool (1byte) to int (4bytes)
bool boolean = 1; // int (4bytes) to bool (1byte)
bool boolean2 = 5.8; // double (8bytes) to bool (1byte)
```
fuck!!!! that was a long road, i mean fuck!!!, you better bookmark this page as reference for future use because sure as hell you won't remember all that, unless you get a pre-release chip from Neuralink or something, any way we said that **numeric promotions** are value-preserving you might have guessed by now that **numeric conversion** may or may not preserve your value, the second example we presented when we assigned `double` to `int` the fractional part got dropped and we ended up with a half-ass data,still your compiler will scream at you any time you about to implicitly convert some types which potentially lead to a loss of data. like (`double` or `float` to `int`)..... <br>


**TIP:** Don't use a narrowing implicit conversion (if necessary use an explicit one instead) for the sake of your co-brogrammers and your future self and in case you don't read your code twice, fuck your co-brogrammers use whatever you want. <br>

👙 **Data loss and Precision loss** <br>
We've already mentioned and re-mentioned data loss but not precision loss, first when we talk about precision loss we mainly talk about fractional part in decimals (number.fraction) , so the name speaks for itself, we may or may not loss some digits from the fractional part of our result when doing a narrowing conversion of floating-point numbers , example:
```
float f = 0.12346789 // we're out range normally the float can represent up to 7 fractional digits
std::cout << f << std::endl;
```
```
 $ 0.1234567 // we lost last 2 digits
```

🖕 **Arithmetic conversion:** <br>
To put you on context, consider the following
```
std::cout << 5 + 2.4 << std::endl;
```
An arithmetic operation needs to take place, however the 2 operands are dissimilar, so the compiler again needs to do a type conversion before calculating the result. so concluding an implicit (remember we still in implicit) arithmetic conversion takes place by the compiler automatically when a binary operator necessitate 2 operands of the same type.<br>
Those are the operators that requires 2 similar types: <br>
> `+, -, * , /, %,<, >, <=, >=, ==, !=, &, ^, |, ?:` <br>

**The rules of the arithmetic conversion are simple:** <br>
First here's one more list to add to your collection <br>
```
long double (highest)
double
float 
unsigned long long 
long 
unsigned int 
int (lowest)

```
-> Listen compiler if one of the operands is in the priority list (above) convert the guy to the type of the highest prioritised <br>

-> else if none of them are in the list, promote them both to `int` <br>
some examples we get the drill <br>
```
std::cout << 1 + 5.6 << std::endl;
```
since both of operands exist in priority list (remember that at least one of them should exist) we convert the one with the lowest priority to the one with the highest priority. in this case what ???? `double` so our expression will first be changed to `1.0 + 5.6` then evaluate to `6.6`. <br>
another example:
```
 char c = 'a'; // 97
 short s = 1; // 1

 std::cout << sizeof(c + s) << std::endl; 
 std::cout << sizeof(c + s) << std::endl;
```
```
 $ 4 
 $ 98 
```
output 4 means that our result is a 4bytes `int` which conclude that the addition is done between `int`'s which again conclude our `short` and `char` have been converted to 2 `int`'s before calculation. <br>


