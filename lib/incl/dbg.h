/* Synopsis

Debugging

Remarks
Refer at ./config.h
*/


# define CLUBS (0x0D)
# define DIAMONDS (0x0D)
# define HEARTS (0x0D)
# define SPADES (0x0D)
# define JOKERS (0x02)
# define JOKER (0x01)
// playing cards

# define OF_DAYS_IN_LEAP_YEARS (JOKERS+(7*(CLUBS+(DIAMONDS+(HEARTS+(SPADES))))))
# define OF_DAYS_IN_YEARS (JOKER+(7*(CLUBS+(DIAMONDS+(HEARTS+(SPADES))))))
# define A_LIMITED_NUMBER_OF_DAYS (0x03*(OF_DAYS_IN_YEARS))
# define DBG_HR (60*(60*(0x00)))
# define DBG_MN (60*(0x00))
// time and date

# define DBG_O (0x10)
# define DBG_Q (0x08)
# define DBG_D (0x04)
# define DBG_W (0x02)
# define DBG_B (0x01)
# define DBG_N (0x00)
# define DBG (DBG_N)
// debug
