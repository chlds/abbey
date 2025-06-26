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

static signed char *(CAT_H_WEEK[]) = {
"Sunday",
"Monday",
"Tuesday",
"Wednesday",
"Thursday",
"Friday",
"Saturday",
0x00,
};

static signed char *(CAT_H_WK[]) = {
"Sun",
"Mon",
"Tue",
"Wed",
"Thu",
"Fri",
"Sat",
0x00,
};

static signed char *(CAT_H_MONTH[]) = {
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

static signed char *(CAT_H_MON[]) = {
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
