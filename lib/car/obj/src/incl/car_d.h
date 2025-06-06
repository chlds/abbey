# define CARL(A) carl(A)
# define CARH(A) carh(A)
# define DECL(A) A = decl(A)
# define DECH(A) A = dech(A)
# define INCL(A) A = incl(A)
# define INCH(A) A = inch(A)
# define LDL(A,B) A = ldl(A,B)
# define LDH(A,B) A = ldh(A,B)
# define ANDL(A,B) A = andl(A,B)
# define ANDH(A,B) A = andh(A,B)
# define ORL(A,B) A = orl(A,B)
# define ORH(A,B) A = orh(A,B)
# define TOGG(A) A = togg(A)

static signed CAR_H_HT = ('\t');
static signed CAR_H_LF = ('\n');
static signed CAR_H_FF = ('\f');
static signed CAR_H_CR = ('\r');
static signed CAR_H_SP = (' ');
static signed char CAR_H_SPACE[] = (" ");
static signed char CAR_H_SYMBOLS[] = ("!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~");
static signed char CAR_H_BASE64_PADDING[] = ("=");
static signed char CAR_H_BASE64[] = ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
static signed char CAR_H_ALPHANUMERICALS[] = ("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
static signed char CAR_H_LETTERS[] = ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
static signed char CAR_H_NUMBERS[] = ("0123456789");
