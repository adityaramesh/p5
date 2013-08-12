/*
** File Name:	join.hpp
** Author:	Aditya Ramesh
** Date:	07/28/2013
** Contact:	_@adityaramesh.com
*/

#ifndef Z49F44B79_CC97_455D_9620_76903441B475
#define Z49F44B79_CC97_455D_9620_76903441B475

#include <boost/preprocessor/cat.hpp>
#include <p5/variadic_size.hpp>

#define P5_JOIN(...) \
	BOOST_PP_CAT(P5_JOIN_IMPL_, P5_VARIADIC_SIZE(__VA_ARGS__))(__VA_ARGS__)

#define P5_JOIN_IMPL_0(...)

#define P5_JOIN_IMPL_1(_1) \
	_1
#define P5_JOIN_IMPL_2(_1, _2) \
	_1 _2
#define P5_JOIN_IMPL_3(_1, _2, _3) \
	_1 _2 _3
#define P5_JOIN_IMPL_4(_1, _2, _3, _4) \
	_1 _2 _3 _4
#define P5_JOIN_IMPL_5(_1, _2, _3, _4, _5) \
	_1 _2 _3 _4 _5
#define P5_JOIN_IMPL_6(_1, _2, _3, _4, _5, _6) \
	_1 _2 _3 _4 _5 _6
#define P5_JOIN_IMPL_7(_1, _2, _3, _4, _5, _6, _7) \
	_1 _2 _3 _4 _5 _6 _7
#define P5_JOIN_IMPL_8(_1, _2, _3, _4, _5, _6, _7, _8) \
	_1 _2 _3 _4 _5 _6 _7 _8
#define P5_JOIN_IMPL_9(_1, _2, _3, _4, _5, _6, _7, _8, _9) \
	_1 _2 _3 _4 _5 _6 _7 _8 _9
#define P5_JOIN_IMPL_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10) \
	_1 _2 _3 _4 _5 _6 _7 _8 _9 _10
#define P5_JOIN_IMPL_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) \
	_1 _2 _3 _4 _5 _6 _7 _8 _9 _10 _11
#define P5_JOIN_IMPL_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) \
	_1 _2 _3 _4 _5 _6 _7 _8 _9 _10 _11 _12
#define P5_JOIN_IMPL_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) \
	_1 _2 _3 _4 _5 _6 _7 _8 _9 _10 _11 _12 _13
#define P5_JOIN_IMPL_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) \
	_1 _2 _3 _4 _5 _6 _7 _8 _9 _10 _11 _12 _13 _14
#define P5_JOIN_IMPL_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15) \
	_1 _2 _3 _4 _5 _6 _7 _8 _9 _10 _11 _12 _13 _14 _15
#define P5_JOIN_IMPL_16(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16) \
	_1 _2 _3 _4 _5 _6 _7 _8 _9 _10 _11 _12 _13 _14 _15 _16
#define P5_JOIN_IMPL_17(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17) \
	_1 _2 _3 _4 _5 _6 _7 _8 _9 _10 _11 _12 _13 _14 _15 _16 _17
#define P5_JOIN_IMPL_18(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18) \
	_1 _2 _3 _4 _5 _6 _7 _8 _9 _10 _11 _12 _13 _14 _15 _16 _17 _18
#define P5_JOIN_IMPL_19(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19) \
	_1 _2 _3 _4 _5 _6 _7 _8 _9 _10 _11 _12 _13 _14 _15 _16 _17 _18 _19
#define P5_JOIN_IMPL_20(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20) \
	_1 _2 _3 _4 _5 _6 _7 _8 _9 _10 _11 _12 _13 _14 _15 _16 _17 _18 _19 _20

#endif