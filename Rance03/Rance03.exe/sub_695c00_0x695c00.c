// 函数: sub_695c00
// 地址: 0x695c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1979
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
COLORREF color
int32_t eax_2 = __security_cookie ^ &color
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_44 = 0
char* var_2c = arg2
sub_6972e0(arg1 + 4, *(arg1 + 0x64), *(arg1 + 0x65), *(arg1 + 0x66))
HGDIOBJ h = SelectObject(*(arg1 + 0x28), *(arg1 + 0x38))
COLORREF color_1 = SetTextColor(*(arg1 + 0x28), 0)
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
color = color_1
*arg2 = 0
sub_402110(arg2, 0x6da953, nullptr)
int32_t var_4_1 = 0
int32_t eax_8 = *(arg1 + 0x3c)
int32_t edi_1 = *(arg1 + 0x60)
int32_t var_44_1 = 1
int32_t y = edi_1 - eax_8 * arg5
int32_t eax_10
int32_t edx
edx:eax_10 = muls.dp.d(0x2aaaaaab, arg3[1] - *arg3)
int32_t edx_1 = edx s>> 2
int32_t i_1 = (edx_1 u>> 0x1f) + edx_1

if (i_1 s> 0)
    int32_t esi_1 = 0
    int32_t i
    
    do
        int32_t var_14_1 = 0xf
        void** eax_13 = *arg3 + esi_1
        int32_t c = 0
        char var_28 = 0
        sub_401ff0(&var_28, eax_13, 0, 0xffffffff)
        char* lpString = &var_28
        
        if (var_14_1 u>= 0x10)
            lpString = var_28.d
        
        TextOutA(*(arg1 + 0x28), edi_1 - arg4, y, lpString, c)
        SetBkColor(*(arg1 + 0x28), *(arg1 + 0x64))
        
        if (var_14_1 u>= 0x10)
            j__free(var_28.d)
        
        y += eax_8
        esi_1 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

SetTextColor(*(arg1 + 0x28), color)
SelectObject(*(arg1 + 0x28), h)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &color)
return arg2
