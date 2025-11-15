// 函数: sub_5d1380
// 地址: 0x5d1380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

EnterCriticalSection(*(arg1 + 4) + 4)
void** eax_2 = sub_432330(arg1 + 8, arg3)
void** esi = *(arg1 + 8)
void** edi = eax_2
char eax_4

if (edi != esi)
    eax_4 = sub_412ca0(arg3, &edi[4])

if (edi == esi || eax_4 != 0)
    edi = esi

if (edi == esi)
    *arg2 = 0
    arg2[1] = 0
    LeaveCriticalSection(*(arg1 + 4) + 4)
    return arg2

*arg2 = 0
arg2[1] = 0
__seterrormode(&edi[0xb])
sub_589d80(arg2, edi[0xa])
___crtSetUnhandledExceptionFilter(&edi[0xb])
LeaveCriticalSection(*(arg1 + 4) + 4)
return arg2
