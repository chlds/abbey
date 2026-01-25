/* Synopsis

Circ. XNOR, XOR, NOR, OR, NAND, AND, and/or OR
The object-like and function-like macros

Remarks
Refer at ./config.h
*/


# define SHL(A,B) A = (A<<(B))
# define SHR(A,B) A = (A>>(B))
# define DEC(A) --(A)
# define INC(A) (A)++
# define LD(A,B) A = (B)
// Op.

# define AND(A,B) A = (B&(A))
# define OR(A,B) A = (B|(A))
# define XOR(A,B) A = (B^(A))
# define NOT(A) A = (~(A))
// Logical op.

# define CII(A) A = (0x01+(~(A)))
// CII (NEG) computes the two's complement of the operand by bitwise inversion followed by increment.
// If the operand equals the minimum representable value, the result remains unchanged.
// In standard C, signed integer overflow is undefined behavior and no signal is raised.

# define ADD(A,B) A = (B+(A))
# define MUL(A,B) A = (B*(A))
// Expression
# define EQ(A,B) B==(A)
// Condition
# define R(A,B) (B).A
// Refer
