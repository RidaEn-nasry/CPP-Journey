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
When you the brogrammer invoke a type conversion either implicitly or explicitly (we'll talk about it soon), the compiler will decide if it can convert between your types and if it can how the fuck can it (the compiler) do so ?  <br>
**NOTE:** : when a type conversion takes place a new value is created of your (converted to) type from your (converted from) type, hence your old type and it's value remains unchanged.<br> 
"But hey how does the compiler know how to convert between different data types" you asking ? well there's a thing called the **standard conversion** , it's a set of specifications that decides what the fuck will happen when 2 specific types is being converted, this standard can be divided into 4 categories : <br> <br>
🖕 **Numeric promotions.** <br>
🖕 **Numeric conversions.** <br>
🖕 **Arithmetic conversions.** <br>
🖕 **Other conversions.** <br>

So the compiler decides if a conversion is valid or not by looking (roughly speaking ) into these standards and if your conversion doesn't match none of these standards he'll scream at you, We'll get into each of these guys and try destructor them next. <br>

🖕 **Numeric promotions:**<br>
As the title read (if you can read), you most likely already know what this 
 
