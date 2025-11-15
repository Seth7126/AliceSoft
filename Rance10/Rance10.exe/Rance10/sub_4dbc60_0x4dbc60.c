// 函数: sub_4dbc60
// 地址: 0x4dbc60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &
    partsengine::CFlatSprite::`vftable'{for `common::SuicideRefCounter<class partsengine::CSprite>'}
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xe] = 0
arg1[0xf] = 0
int32_t* ecx = arg1[0x20]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x20] = 0

int32_t* ecx_1 = arg1[0x18]

if (ecx_1 != 0)
    int32_t esi_1 = ecx_1[1]
    ecx_1[1] -= 1
    (**ecx_1)(esi_1 - 1)
    arg1[0x18] = 0

int32_t eax_6 = arg1[0x1f]
void* esi_2 = &arg1[0x1a]

if (eax_6 u>= 0x10)
    sub_403160(*esi_2, eax_6 + 1, 1)

*(esi_2 + 0x14) = 0xf
bool cond:0 = *(esi_2 + 0x14) u< 0x10
*(esi_2 + 0x10) = 0

if (not(cond:0))
    esi_2 = *esi_2

*esi_2 = 0
sub_4dcd40(&arg1[0x10])
arg1[9] = &common::CRect::`vftable'
arg1[0xd] = &common::CSize::`vftable'
arg1[0xa] = &common::CPoint::`vftable'
int32_t eax_8 = arg1[7]

if (eax_8 u>= 0x10)
    eax_8 = sub_403160(arg1[2], eax_8 + 1, 1)

arg1[7] = 0xf
bool cond:1 = arg1[7] u< 0x10
arg1[6] = 0

if (cond:1)
    arg1[2].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8

char* eax_10 = arg1[2]
*eax_10 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_10
