/*	$NetBSD: int_fmtio.h,v 1.4 2019/04/17 11:01:19 mrg Exp $	*/

/*-
 * Copyright (c) 2001 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Klaus Klein.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _RISCV_INT_FMTIO_H_
#define _RISCV_INT_FMTIO_H_

#ifdef __INTPTR_FMTd__
#include <sys/common_int_fmtio.h>
#else
/*
 * 7.8.1 Macros for format specifiers
 */

/* fprintf macros for signed integers */
#define	PRId8		"hhd"	/* int8_t		*/
#define	PRId16		"hd"	/* int16_t		*/
#define	PRId32		"d"	/* int32_t		*/
#ifdef _LP64
#define	PRId64		"ld"	/* int64_t		*/
#else
#define	PRId64		"lld"	/* int64_t		*/
#endif
#define	PRIdLEAST8	"hhd"	/* int_least8_t		*/
#define	PRIdLEAST16	"hd"	/* int_least16_t	*/
#define	PRIdLEAST32	"d"	/* int_least32_t	*/
#ifdef _LP64
#define	PRIdLEAST64	"ld"	/* int_least64_t	*/
#define	PRIdFAST8	"d"	/* int_fast8_t		*/
#define	PRIdFAST16	"d"	/* int_fast16_t		*/
#else
#define	PRIdLEAST64	"lld"	/* int_least64_t	*/
#define	PRIdFAST8	"hhd"	/* int_fast8_t		*/
#define	PRIdFAST16	"hd"	/* int_fast16_t		*/
#endif
#define	PRIdFAST32	"d"	/* int_fast32_t		*/
#ifdef _LP64
#define	PRIdFAST64	"ld"	/* int_fast64_t		*/
#define	PRIdMAX		"ld"	/* intmax_t		*/
#else
#define	PRIdFAST64	"lld"	/* int_fast64_t		*/
#define	PRIdMAX		"lld"	/* intmax_t		*/
#endif
#define	PRIdPTR		"ld"	/* intptr_t		*/

#define	PRIi8		"hhi"	/* int8_t		*/
#define	PRIi16		"hi"	/* int16_t		*/
#define	PRIi32		"i"	/* int32_t		*/
#ifdef _LP64
#define	PRIi64		"li"	/* int64_t		*/
#else
#define	PRIi64		"lli"	/* int64_t		*/
#endif
#define	PRIiLEAST8	"hhi"	/* int_least8_t		*/
#define	PRIiLEAST16	"hi"	/* int_least16_t	*/
#define	PRIiLEAST32	"i"	/* int_least32_t	*/
#ifdef _LP64
#define	PRIiLEAST64	"li"	/* int_least64_t	*/
#define	PRIiFAST8	"i"	/* int_fast8_t		*/
#define	PRIiFAST16	"i"	/* int_fast16_t		*/
#else
#define	PRIiLEAST64	"lli"	/* int_least64_t	*/
#define	PRIiFAST8	"hhi"	/* int_fast8_t		*/
#define	PRIiFAST16	"hi"	/* int_fast16_t		*/
#endif
#define	PRIiFAST32	"i"	/* int_fast32_t		*/
#ifdef _LP64
#define	PRIiFAST64	"li"	/* int_fast64_t		*/
#define	PRIiMAX		"li"	/* intmax_t		*/
#else
#define	PRIiFAST64	"lli"	/* int_fast64_t		*/
#define	PRIiMAX		"lli"	/* intmax_t		*/
#endif
#define	PRIiPTR		"li"	/* intptr_t		*/

/* fprintf macros for unsigned integers */

#define	PRIo8		"hho"	/* uint8_t		*/
#define	PRIo16		"ho"	/* uint16_t		*/
#define	PRIo32		"o"	/* uint32_t		*/
#ifdef _LP64
#define	PRIo64		"lo"	/* uint64_t		*/
#else
#define	PRIo64		"llo"	/* uint64_t		*/
#endif
#define	PRIoLEAST8	"o"	/* uint_least8_t	*/
#define	PRIoLEAST16	"hho"	/* uint_least16_t	*/
#define	PRIoLEAST32	"ho"	/* uint_least32_t	*/
#ifdef _LP64
#define	PRIoLEAST64	"lo"	/* uint_least64_t	*/
#define	PRIoFAST8	"o"	/* uint_fast8_t		*/
#define	PRIoFAST16	"o"	/* uint_fast16_t	*/
#else
#define	PRIoLEAST64	"llo"	/* uint_least64_t	*/
#define	PRIoFAST8	"hho"	/* uint_fast8_t		*/
#define	PRIoFAST16	"ho"	/* uint_fast16_t	*/
#endif
#define	PRIoFAST32	"o"	/* uint_fast32_t	*/
#ifdef _LP64
#define	PRIoFAST64	"lo"	/* uint_fast64_t	*/
#define	PRIoMAX		"lo"	/* uintmax_t		*/
#else
#define	PRIoFAST64	"llo"	/* uint_fast64_t	*/
#define	PRIoMAX		"llo"	/* uintmax_t		*/
#endif
#define	PRIoPTR		"lo"	/* uintptr_t		*/

#define	PRIu8		"hhu"	/* uint8_t		*/
#define	PRIu16		"hu"	/* uint16_t		*/
#define	PRIu32		"u"	/* uint32_t		*/
#ifdef _LP64
#define	PRIu64		"lu"	/* uint64_t		*/
#else
#define	PRIu64		"llu"	/* uint64_t		*/
#endif
#define	PRIuLEAST8	"hhu"	/* uint_least8_t	*/
#define	PRIuLEAST16	"hu"	/* uint_least16_t	*/
#define	PRIuLEAST32	"u"	/* uint_least32_t	*/
#ifdef _LP64
#define	PRIuLEAST64	"lu"	/* uint_least64_t	*/
#define	PRIuFAST8	"u"	/* uint_fast8_t		*/
#define	PRIuFAST16	"u"	/* uint_fast16_t	*/
#else
#define	PRIuLEAST64	"llu"	/* uint_least64_t	*/
#define	PRIuFAST8	"hhu"	/* uint_fast8_t		*/
#define	PRIuFAST16	"hu"	/* uint_fast16_t	*/
#endif
#define	PRIuFAST32	"u"	/* uint_fast32_t	*/
#ifdef _LP64
#define	PRIuFAST64	"lu"	/* uint_fast64_t	*/
#define	PRIuMAX		"lu"	/* uintmax_t		*/
#else
#define	PRIuFAST64	"llu"	/* uint_fast64_t	*/
#define	PRIuMAX		"llu"	/* uintmax_t		*/
#endif
#define	PRIuPTR		"lu"	/* uintptr_t		*/

#define	PRIx8		"hhx"	/* uint8_t		*/
#define	PRIx16		"hx"	/* uint16_t		*/
#define	PRIx32		"x"	/* uint32_t		*/
#ifdef _LP64
#define	PRIx64		"lx"	/* uint64_t		*/
#else
#define	PRIx64		"llx"	/* uint64_t		*/
#endif
#define	PRIxLEAST8	"x"	/* uint_least8_t	*/
#define	PRIxLEAST16	"x"	/* uint_least16_t	*/
#define	PRIxLEAST32	"x"	/* uint_least32_t	*/
#ifdef _LP64
#define	PRIxLEAST64	"lx"	/* uint_least64_t	*/
#define	PRIxFAST8	"x"	/* uint_fast8_t		*/
#define	PRIxFAST16	"x"	/* uint_fast16_t	*/
#else
#define	PRIxLEAST64	"llx"	/* uint_least64_t	*/
#define	PRIxFAST8	"hhx"	/* uint_fast8_t		*/
#define	PRIxFAST16	"hx"	/* uint_fast16_t	*/
#endif
#define	PRIxFAST32	"x"	/* uint_fast32_t	*/
#ifdef _LP64
#define	PRIxFAST64	"lx"	/* uint_fast64_t	*/
#define	PRIxMAX		"lx"	/* uintmax_t		*/
#else
#define	PRIxFAST64	"llx"	/* uint_fast64_t	*/
#define	PRIxMAX		"llx"	/* uintmax_t		*/
#endif
#define	PRIxPTR		"lx"	/* uintptr_t		*/

#define	PRIX8		"hhX"	/* uint8_t		*/
#define	PRIX16		"hX"	/* uint16_t		*/
#define	PRIX32		"X"	/* uint32_t		*/
#ifdef _LP64
#define	PRIX64		"lX"	/* uint64_t		*/
#else
#define	PRIX64		"llX"	/* uint64_t		*/
#endif
#define	PRIXLEAST8	"X"	/* uint_least8_t	*/
#define	PRIXLEAST16	"X"	/* uint_least16_t	*/
#define	PRIXLEAST32	"X"	/* uint_least32_t	*/
#ifdef _LP64
#define	PRIXLEAST64	"lX"	/* uint_least64_t	*/
#define	PRIXFAST8	"X"	/* uint_fast8_t		*/
#define	PRIXFAST16	"X"	/* uint_fast16_t	*/
#else
#define	PRIXLEAST64	"llX"	/* uint_least64_t	*/
#define	PRIXFAST8	"hhX"	/* uint_fast8_t		*/
#define	PRIXFAST16	"hX"	/* uint_fast16_t	*/
#endif
#define	PRIXFAST32	"X"	/* uint_fast32_t	*/
#ifdef _LP64
#define	PRIXFAST64	"lX"	/* uint_fast64_t	*/
#define	PRIXMAX		"lX"	/* uintmax_t		*/
#else
#define	PRIXFAST64	"llX"	/* uint_fast64_t	*/
#define	PRIXMAX		"llX"	/* uintmax_t		*/
#endif
#define	PRIXPTR		"lX"	/* uintptr_t		*/

/* fscanf macros for signed integers */

#define	SCNd8		"hhd"	/* int8_t		*/
#define	SCNd16		"hd"	/* int16_t		*/
#define	SCNd32		"d"	/* int32_t		*/
#ifdef _LP64
#define	SCNd64		"ld"	/* int64_t		*/
#else
#define	SCNd64		"lld"	/* int64_t		*/
#endif
#define	SCNdLEAST8	"hhd"	/* int_least8_t		*/
#define	SCNdLEAST16	"hd"	/* int_least16_t	*/
#define	SCNdLEAST32	"d"	/* int_least32_t	*/
#ifdef _LP64
#define	SCNdLEAST64	"ld"	/* int_least64_t	*/
#define	SCNdFAST8	"d"	/* int_fast8_t		*/
#define	SCNdFAST16	"d"	/* int_fast16_t		*/
#else
#define	SCNdLEAST64	"lld"	/* int_least64_t	*/
#define	SCNdFAST8	"hhd"	/* int_fast8_t		*/
#define	SCNdFAST16	"hd"	/* int_fast16_t		*/
#endif
#define	SCNdFAST32	"d"	/* int_fast32_t		*/
#ifdef _LP64
#define	SCNdFAST64	"ld"	/* int_fast64_t		*/
#define	SCNdMAX		"ld"	/* intmax_t		*/
#else
#define	SCNdFAST64	"lld"	/* int_fast64_t		*/
#define	SCNdMAX		"lld"	/* intmax_t		*/
#endif
#define	SCNdPTR		"ld"	/* intptr_t		*/

#define	SCNi8		"hhi"	/* int8_t		*/
#define	SCNi16		"hi"	/* int16_t		*/
#define	SCNi32		"i"	/* int32_t		*/
#ifdef _LP64
#define	SCNi64		"li"	/* int64_t		*/
#else
#define	SCNi64		"lli"	/* int64_t		*/
#endif
#define	SCNiLEAST8	"hhi"	/* int_least8_t		*/
#define	SCNiLEAST16	"hi"	/* int_least16_t	*/
#define	SCNiLEAST32	"i"	/* int_least32_t	*/
#ifdef _LP64
#define	SCNiLEAST64	"li"	/* int_least64_t	*/
#define	SCNiFAST8	"i"	/* int_fast8_t		*/
#define	SCNiFAST16	"i"	/* int_fast16_t		*/
#else
#define	SCNiLEAST64	"lli"	/* int_least64_t	*/
#define	SCNiFAST8	"hhi"	/* int_fast8_t		*/
#define	SCNiFAST16	"hi"	/* int_fast16_t		*/
#endif
#define	SCNiFAST32	"i"	/* int_fast32_t		*/
#ifdef _LP64
#define	SCNiFAST64	"li"	/* int_fast64_t		*/
#define	SCNiMAX		"li"	/* intmax_t		*/
#else
#define	SCNiFAST64	"lli"	/* int_fast64_t		*/
#define	SCNiMAX		"lli"	/* intmax_t		*/
#endif
#define	SCNiPTR		"li"	/* intptr_t		*/

/* fscanf macros for unsigned integers */

#define	SCNo8		"hho"	/* uint8_t		*/
#define	SCNo16		"ho"	/* uint16_t		*/
#define	SCNo32		"o"	/* uint32_t		*/
#ifdef _LP64
#define	SCNo64		"lo"	/* uint64_t		*/
#else
#define	SCNo64		"llo"	/* uint64_t		*/
#endif
#define	SCNoLEAST8	"hho"	/* uint_least8_t	*/
#define	SCNoLEAST16	"ho"	/* uint_least16_t	*/
#define	SCNoLEAST32	"o"	/* uint_least32_t	*/
#ifdef _LP64
#define	SCNoLEAST64	"lo"	/* uint_least64_t	*/
#define	SCNoFAST8	"o"	/* uint_fast8_t		*/
#define	SCNoFAST16	"o"	/* uint_fast16_t	*/
#else
#define	SCNoLEAST64	"llo"	/* uint_least64_t	*/
#define	SCNoFAST8	"hho"	/* uint_fast8_t		*/
#define	SCNoFAST16	"ho"	/* uint_fast16_t	*/
#endif
#define	SCNoFAST32	"o"	/* uint_fast32_t	*/
#ifdef _LP64
#define	SCNoFAST64	"lo"	/* uint_fast64_t	*/
#define	SCNoMAX		"lo"	/* uintmax_t		*/
#else
#define	SCNoFAST64	"llo"	/* uint_fast64_t	*/
#define	SCNoMAX		"llo"	/* uintmax_t		*/
#endif
#define	SCNoPTR		"lo"	/* uintptr_t		*/

#define	SCNu8		"hhu"	/* uint8_t		*/
#define	SCNu16		"hu"	/* uint16_t		*/
#define	SCNu32		"u"	/* uint32_t		*/
#ifdef _LP64
#define	SCNu64		"lu"	/* uint64_t		*/
#else
#define	SCNu64		"llu"	/* uint64_t		*/
#endif
#define	SCNuLEAST8	"hhu"	/* uint_least8_t	*/
#define	SCNuLEAST16	"hu"	/* uint_least16_t	*/
#define	SCNuLEAST32	"u"	/* uint_least32_t	*/
#ifdef _LP64
#define	SCNuLEAST64	"lu"	/* uint_least64_t	*/
#define	SCNuFAST8	"u"	/* uint_fast8_t		*/
#define	SCNuFAST16	"u"	/* uint_fast16_t	*/
#else
#define	SCNuLEAST64	"llu"	/* uint_least64_t	*/
#define	SCNuFAST8	"hhu"	/* uint_fast8_t		*/
#define	SCNuFAST16	"hu"	/* uint_fast16_t	*/
#endif
#define	SCNuFAST32	"u"	/* uint_fast32_t	*/
#ifdef _LP64
#define	SCNuFAST64	"lu"	/* uint_fast64_t	*/
#define	SCNuMAX		"lu"	/* uintmax_t		*/
#else
#define	SCNuFAST64	"llu"	/* uint_fast64_t	*/
#define	SCNuMAX		"llu"	/* uintmax_t		*/
#endif
#define	SCNuPTR		"lu"	/* uintptr_t		*/

#define	SCNx8		"hhx"	/* uint8_t		*/
#define	SCNx16		"hx"	/* uint16_t		*/
#define	SCNx32		"x"	/* uint32_t		*/
#ifdef _LP64
#define	SCNx64		"lx"	/* uint64_t		*/
#else
#define	SCNx64		"llx"	/* uint64_t		*/
#endif
#define	SCNxLEAST8	"hhx"	/* uint_least8_t	*/
#define	SCNxLEAST16	"hx"	/* uint_least16_t	*/
#define	SCNxLEAST32	"x"	/* uint_least32_t	*/
#ifdef _LP64
#define	SCNxLEAST64	"lx"	/* uint_least64_t	*/
#define	SCNxFAST8	"x"	/* uint_fast8_t		*/
#define	SCNxFAST16	"x"	/* uint_fast16_t	*/
#else
#define	SCNxLEAST64	"llx"	/* uint_least64_t	*/
#define	SCNxFAST8	"hhx"	/* uint_fast8_t		*/
#define	SCNxFAST16	"hx"	/* uint_fast16_t	*/
#endif
#define	SCNxFAST32	"x"	/* uint_fast32_t	*/
#ifdef _LP64
#define	SCNxFAST64	"lx"	/* uint_fast64_t	*/
#define	SCNxMAX		"lx"	/* uintmax_t		*/
#else
#define	SCNxFAST64	"llx"	/* uint_fast64_t	*/
#define	SCNxMAX		"llx"	/* uintmax_t		*/
#endif
#define	SCNxPTR		"lx"	/* uintptr_t		*/

#endif /* !__INTPTR_FMTd__ */

#endif /* !_RISCV_INT_FMTIO_H_ */