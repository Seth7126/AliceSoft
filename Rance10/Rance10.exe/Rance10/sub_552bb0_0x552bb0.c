// 函数: sub_552bb0
// 地址: 0x552bb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CNumeralSprite::`vftable'{for `common::SuicideRefCounter<class partsengine::CSprite>'}
sub_5536a0(arg1)
arg1[0xb6] = &common::CRect::`vftable'
arg1[0xba] = &common::CSize::`vftable'
arg1[0xb7] = &common::CPoint::`vftable'
void* ecx = arg1[0xb1]

if (ecx != 0)
    sub_403160(ecx, (arg1[0xb3] - ecx) s>> 2, 4)
    arg1[0xb1] = 0
    arg1[0xb2] = 0
    arg1[0xb3] = 0

arg1[0x9e] = &textsurface::CTextSurfaceProperty::`vftable'
`eh vector vbase constructor iterator'(&arg1[0x56], 0x18, 0xc, sub_403320)
`eh vector vbase constructor iterator'(&arg1[0xe], 0x18, 0xc, sub_403320)
void* ecx_1 = arg1[0xb]

if (ecx_1 != 0)
    sub_403160(ecx_1, (arg1[0xd] - ecx_1) s>> 2, 4)
    arg1[0xb] = 0
    arg1[0xc] = 0
    arg1[0xd] = 0

int32_t eax_12 = arg1[9]

if (eax_12 u>= 0x10)
    eax_12 = sub_403160(arg1[4], eax_12 + 1, 1)

arg1[9] = 0xf
bool cond:0 = arg1[9] u< 0x10
arg1[8] = 0

if (cond:0)
    arg1[4].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_12

char* eax_13 = arg1[4]
*eax_13 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_13
