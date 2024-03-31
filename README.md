# myprintf - custom Printf program by Inès & Antonin

```version 1.0```  `[release date:]: # Date: 2024-03-28`

```bash
                      ███              █████       ██████
                     ░░░              ░░███       ███░░███
 ████████  ████████  ████  ████████   ███████    ░███ ░░░
░░███░░███░░███░░███░░███ ░░███░░███ ░░░███░    ███████
 ░███ ░███ ░███ ░░░  ░███  ░███ ░███   ░███    ░░░███░
 ░███ ░███ ░███      ░███  ░███ ░███   ░███ ███  ░███
 ░███████  █████     █████ ████ █████  ░░█████   █████
 ░███░░░  ░░░░░     ░░░░░ ░░░░ ░░░░░    ░░░░░   ░░░░░
 ░███
 █████
░░░░░
```

## 1. Overview of the Project

**The `printf()` Function: A Versatile Tool in Programming**

- **Purpose:**
  The `printf()` function is instrumental in outputting a wide array of data types, including characters, strings, floats, integers, octal, and hexadecimal values, to the standard output stream.

- **Functionality:**
  - It facilitates the display of variable values and expression results.
  - It enables formatted output, enhancing text presentation and readability.
  - The function aligns each placeholder in the provided string with corresponding arguments, creating structured and formatted output.

- **Utility:**
  - **Feedback:** The return value of `printf()`, which indicates the number of characters printed, is crucial for debugging and validating output processes.
  - **Applications:** Incorporating `printf()` in your programming endeavors allows for nuanced data representation, ensuring clear communication and interaction with the end-user.

- **Code Example:**

```c
printf("Hello, World! %d", 2024);
```

## 2. Features

| Feature                                             | Release Version |
|-----------------------------------------------------|-----------------|
| Support a wide range of format specifiers           | 1.0             |
| Customizable output stream                          | 1.0             |
| Configurable buffer size                            | 1.1             |
| Error handling for invalid format strings            | 1.1             |
| Easily extensible for additional format specifiers   | 1.1             |

## 3. Repository files

| *Name*      | **Description**          |
|--------------|--------------------------|
| `main.h`  | includes prototypes and structres |
| `myprintf.c` | _printf: main custom printf function |
| `print_func.c` | custom printing functions |
| `get_print_func.c` | call the right function at the right time and deal with cases (escapes, specifiers) while browsing the pointer *format  |
| `_putchar.c` | emulates the putchar function |
| `man_3_printf` | man page |

## 4. Install

<a href="https://www.vim.org/"><img src="https://github.com/Ninotna/holbertonschool-printf/blob/0a1154547c19da590db2dc15d6e19932fe5045b5/Vimlogo.svg" alt="Vim Logo" width="100"></a>
<a href="https://www.ubuntu.com/"><img src="https://github.com/Ninotna/holbertonschool-printf/blob/0a1154547c19da590db2dc15d6e19932fe5045b5/ubuntu-icon.svg" alt="Ubuntu Logo" width="100"></a>
<a href="https://en.wikipedia.org/wiki/C_(programming_language)"><img src="https://github.com/Ninotna/holbertonschool-printf/blob/0a1154547c19da590db2dc15d6e19932fe5045b5/language_c-programming.svg" alt="C Logo" width="100"></a>


* Language: C
* OS: Ubuntu 22.04 LTS
* Editor: VIM 8.2
* Compiler: gcc 11.4.0
* -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

To install execute in terminal the following command:

```bash
$ git clone https://github.com/ninotn4/holberton-printf.git
Cloning into 'holberton-printf'...

```

To compile execute in terminal the ```make``` command folowing of any of the targets:

- `all`: compile all files

Example of use:

```bash
$ make all
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c test/main.c -o printf
```

Execute the program:

```bash
$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```

## 5. Supported Format Specifiers

Specifier characters at the end define the type and the interpretation of its corresponding argument:

| Specifier  | Output                | Release Version |
|------------|-----------------------|-----------------|
| `c`        | character             | Version 1.0     |
| `s`        | string                | Version 1.0     |
| `b`        | binary                | Version 1.0     |
| `%`        | %                     | Version 1.0     |
| `d` or `i` | Signed integer        | Version 1.0     |
| `R`        | Rot translation       | Version 1.2     |
| `r`        | string reverse        | Version 1.2     |
| `b`        | Binary conversion     | Version 1.1     |
| `o`        | octal conversion      | Version 1.3     |
| `u`        | unsigned conversion   | Version 1.4     |

## 6.Test

Test folder contain the main failes to test the functions.

## 7.Examples

_printf functions examples:

```bash
_printf("char: [%c]\n", 'K');
char: [K]
```

```bash
printf("string: [%s]\n", "Hello world !");
Output: string: [Hello world !]
```

```bash
_printf("integer: [%i]\n", 87);
Output: integer: [87]
```

```bash
_printf("decimal: [%d]\n", 1987);
Output: decimal: [1987]
```

```bash
_printf("binary: [%b]\n", 98);
Output: binary: [1100010]
```

```bash
_printf("octal [%o]\n", 92);
Output: octal [134]
```

```bash
_printf("Percent: [%%%%]\n");
Output: Percent: [%%]
```

```bash
_printf("Reverse: [%r]\n", "I love Coding!");
Output: Reverse: [!gnidoc evol I]
```

## 8. Manual

To get help about the printf function ask the manual pages on the terminal:

````bash
man ./man_3_printf

````

## 9. Flowchart

<a><img src="https://github.com/Ninotna/holbertonschool-printf/blob/b033f87b13b6cc09971ac0a89150ab92bd3ee4fe/img/diagram_printf.jpg" alt="Flowchart" width="300"></a>

## 10. About authors

> ```Antonin```
> ```Inès```
