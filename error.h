/* $Id: error.h,v 1.14 2011/10/22 12:28:52 mit-sato Exp $ */

#ifndef __ERROR__
#define __ERROR__

#define	TE_INTERNAL		L"ErrInternal"
#define	TE_NOMEMORY		L"ErrNoMemory"
#define TE_PARSESTRING		L"WarnParseString"
#define TE_PARSECLOSE		L"WarnParseClose"
#define TE_PARSEBADCHAR		L"ErrParseClose"
#define TE_NONAMEARG		L"ErrNoGivenNamedArg"
#define TE_NOVAR		L"ErrNoSuchVariable"
#define TE_NORUNNABLE		L"ErrNoRunnableObject"
#define TE_NOFUNC		L"_ErrNoFunction"
#define TE_NOOBJECT		L"ErrNoTypeObject"
#define TE_FEWARGS		L"ErrFewArg"
#define TE_MANYARGS		L"ErrManyArg"
#define TE_NOSPECARGS		L"ErrNoSpecifiedArg"
#define TE_SYNTAX		L"ErrSyntax"
#define TE_STACKOVERFLOW	L"ErrStackOverflow"
#define TE_STACKUNDERFLOW	L"ErrStackUnderflow"
#define TE_NOCLASS		L"ErrNoClass"
#define TE_NOMETHOD		L"ErrNoMethod"
#define TE_NODELEGATE		L"ErrNoDelegate"
#define TE_TYPE			L"ErrBadType"
#define TE_BADMETHOD		L"ErrBadMethod"
#define TE_FILENOTOPEN		L"ErrFileNotOpen"
#define TE_FILEACCESS		L"ErrFileAccess"
#define TE_ARRAYBOUNDARY	L"ErrArrayBoundary"
#define TE_SYSCALL		L"ErrSysCall"
#define TE_ALIAS		L"ErrLinkAlias"
#define TE_REGEX		L"ErrRegex"
#define TE_ZERODIV		L"ErrZeroDivide"
#define TE_ALREADYDEF		L"ErrAlreadyExists"
#define TE_BADBASE		L"ErrBadStackBase"
#define TE_BADBINDSPEC		L"ErrBadBindSpec"
#define TE_NOTIMPLIMENT		L"ErrNotImpliment"
#define TE_NOHOST		L"ErrNoFoundHost"
#define TE_COROUTINE		L"ErrCreateCoroutine"
#define TE_COOUTOFLIFE		L"ErrCoroutineOutOfLife"
#define TE_NOCOROUTINE		L"ErrNotCoroutine"
#define TE_NOSLOT		L"ErrNoStackSlot"
#define TE_IOAGAIN		L"ErrIOAgain"

#endif /* __ERROR__ */
