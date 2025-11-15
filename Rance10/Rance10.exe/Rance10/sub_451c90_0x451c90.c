// 函数: sub_451c90
// 地址: 0x451c90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728840
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &chipmunk::CDrawSpriteList::`vftable'
int32_t* esi = arg1[1]
int32_t ebx = 0
uint32_t ecx_3 = (arg1[2] - esi + 3) u>> 2

if (esi u> arg1[2])
    ecx_3 = 0

if (ecx_3 != 0)
    do
        (*(**esi + 4))(eax_2)
        ebx += 1
        esi = &esi[1]
    while (ebx != ecx_3)

int32_t result = arg1[1]
arg1[2] = result
void* ecx_5 = arg1[0xc]

if (ecx_5 != 0)
    result = sub_403160(ecx_5, (arg1[0xe] - ecx_5) s>> 2, 4)
    arg1[0xc] = 0
    arg1[0xd] = 0
    arg1[0xe] = 0

arg1[5] = &common::CRect::`vftable'
arg1[9] = &common::CSize::`vftable'
arg1[6] = &common::CPoint::`vftable'
void* ecx_6 = arg1[1]

if (ecx_6 != 0)
    result = sub_403160(ecx_6, (arg1[3] - ecx_6) s>> 2, 4)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
