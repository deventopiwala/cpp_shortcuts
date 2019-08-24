Zero length memory allocation:

What happens when we allocate zero bytes of memory? For example,

```
int *arr = new int[ 0 ] ;
```

Should it throw an exception? Should it allocate memory of zero bytes?
To allocate zero bytes of memory sounds absurd.

But, in fact some memory is allocated and we do get an address from new.
But, we cannot use this memory for writing and reading. In short, we cannot reference it.
Anyway, like always, we need to delete this memory or else it results in a memory leak.

