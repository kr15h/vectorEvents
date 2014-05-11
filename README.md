vectorEvents
============

This is **solved**. To make openFrameworks events work within an object that is being added to a vector, allocate it dynamically by using the new keyword:

```C++
myVector.push_back( new myObject() );
```

Don't forget to `delete` allocated objects before you `pop_back()` the pointer of the object:

```C++
while( myVector.size() ){
	delete myVector.back();
	myVector.pop_back();
}
```

The problem before
------------------
This is a simple openFrameworks application example that shows that the ofEvents are not being received when the object that registers to the ofEvents resides in a vector.

Let me know if you know a workaraund (not the one that calls update and mouse methods from parent object without using events, not also the one that uses arrays instead of vectors).