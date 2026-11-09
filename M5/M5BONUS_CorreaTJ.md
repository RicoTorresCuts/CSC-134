# CSC 134 – M5 Bonus Assignment
## Reverse Engineering: Binary Bench

**Student:** CorreaTJ

### Flag 1 – The Vault

**Captured Flag:**

`flag{th3_b1nary_t0ld_m3}`

**Evidence:**

Command executed:

```bash
strings vault
```

The terminal output revealed:

```text
Access granted. flag{th3_b1nary_t0ld_m3}
```

The stored password was also visible:

```text
cooldude420
```

**Finding:** The password and flag were readable inside the compiled executable.

### Flag 2 – The Sum Gate

**Captured Flag:**

`flag{sums_are_not_secrets}`

**Evidence – First successful input:**

```bash
./gym cool42
```

Output:

```text
correct - flag{sums_are_not_secrets}
```

**Evidence – Second successful input:**

```bash
./gym co42lo
```

Output:

```text
correct - flag{sums_are_not_secrets}
```

Both inputs successfully passed the program's validation.

### Sum Gate – Three Rules

1. The input must contain exactly six characters.
2. The first character must be lowercase `c`.
3. The sum of all six character codes must equal 531.

Both `cool42` and `co42lo` satisfy all three conditions.

### Security Write-Up

The `strings` command can expose secrets in the Vault because compiling a program does not encrypt its stored text. The password and flag remain readable inside the compiled executable. The Sum Gate is a weak security check because it only verifies the length, first character, and total character-code sum instead of checking a unique password. Different inputs can produce the same sum and pass the validation.

### Stretch – Buffer Overflow

The program creates a fixed-size character array with only eight bytes of space, but uses `strcpy()` without checking the length of the user's input. If the input is longer than seven characters, the copy can write beyond the array's boundaries and overwrite neighboring memory. This vulnerability occurs because the program does not validate the input length before copying it into the array.

