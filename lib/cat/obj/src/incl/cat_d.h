# define CAT_H_PRIMARY_CYCLE (0x2F)
# define CAT_H_SECONDARY_CYCLE (0x43)
# define CAT_H_TERTIARY_CYCLE (0xA7)
# define CAT_H_SCALE (48/(24))
# define CAT_H_ALLDAY (60*(60*(24)))
# define CAT_H_NOON (60*(60*(12)))
# define CAT_H_CIRCLE_ANGLE (360)
# define CAT_H_ANGLE_OF_HANDS (6)
# define CAT_H_INCREMENTS_OF_SIXTIETHS_PER_HOUR (CAT_H_ANGLE_OF_HANDS)
# define CAT_H_INCREMENTS_OF_TWELFTHS_PER_HOUR (30)
# define CAT_H_INCREMENTS_OF_SIXTHS_PER_HOUR (60)
# define CAT_H_INCREMENTS_OF_QUARTER_AN_HOUR (90)
# define CAT_H_INCREMENTS_OF_THIRDS_PER_HOUR (120)
# define CAT_H_INCREMENTS_OF_HALF_AN_HOUR (180)
# define CAT_H_INCREMENTS_OF_AN_HOUR (CAT_H_CIRCLE_ANGLE)
# define CAT_H_ANGLE_OF_ROTATION (CAT_H_INCREMENTS_OF_SIXTIETHS_PER_HOUR)
# define CAT_H_KALENDAE (1)
# define CAT_H_NONAE_ON_HOLLOW_MOON (5)
# define CAT_H_NONAE_ON_FULL_MOON (7)
# define CAT_H_IDVS_ON_HOLLOW_MOON (13)
# define CAT_H_IDVS_ON_FULL_MOON (15)
# define CAT_H_ON_FULL_MOON (2)
# define CAT_H_ON_HOLLOW_MOON (1)
# define CAT_H_TERTIVM_DECIMVM (13+(~0x00)) // 12th
# define CAT_H_SEPTIMVM_DECIMVM (17+(~0x00)) // 16th

static signed char CAT_H_SPACE[] = (" ");
static signed char CAT_H_FULL_STOP[] = (".");
static signed char CAT_H_COLON[] = (":");

static signed char CAT_H_DOUBLE_PRIME[] = {
0xE2,0x80,0xB3,0x00,
};

static signed char CAT_H_PRIME[] = {
0xE2,0x80,0xB2,0x00,
};

static signed char CAT_H_MIDDLE_DOT_XE[] = {
0x20,0xC2,0xB7,0x20,0x00,
};

static signed char CAT_H_MIDDLE_DOT[] = {
0xC2,0xB7,0x00,
};

static signed char CAT_H_BULLET[] = {
0xE2,0x80,0xA2,0x00,
};

static signed char *CAT_H_WORD_SEPARATOR = (CAT_H_SPACE);
static signed char *CAT_H_SEPARATOR = (CAT_H_COLON);

static signed char CAT_H_DAY_NM_SG_IN_LL[] = ("DIES");

static signed char *(CAT_H_WEEK_GE_SG_IN_LL[]) = {
"SOLIS",
"LVNAE",
"MARTIS",
"MERCVRII",
"IOVIS",
"VENERIS",
"SATVRNI",
0x00,
};

static signed char *(CAT_H_WEEK_GE_SG_ABBREV_IN_LL[]) = {
"SO",
"L",
"MA",
"ME",
"I",
"V",
"SA",
0x00,
};

static signed char *(CAT_H_WEEK_IN_EN[]) = {
"Sunday",
"Monday",
"Tuesday",
"Wednesday",
"Thursday",
"Friday",
"Saturday",
0x00,
};

static signed char *(CAT_H_WEEK_ABBREV_IN_EN[]) = {
"Sun",
"Mon",
"Tue",
"Wed",
"Thu",
"Fri",
"Sat",
0x00,
};

static signed char *(CAT_H_MONTH_IN_EN[]) = {
"January",
"February",
"March",
"April",
"May",
"June",
"July",
"August",
"September",
"October",
"November",
"December",
0x00,
};

static signed char *(CAT_H_MONTH_ABBREV_IN_EN[]) = {
"Jan",
"Feb",
"Mar",
"Apr",
"May",
"June",
"July",
"Aug",
"Sept",
"Oct",
"Nov",
"Dec",
0x00,
};
