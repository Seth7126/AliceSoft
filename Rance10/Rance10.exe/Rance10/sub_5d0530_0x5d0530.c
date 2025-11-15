// 函数: sub_5d0530
// 地址: 0x5d0530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_1c
int32_t eax_1 = __security_cookie ^ &var_1c

if (*arg1 == 0)
    void** eax_2
    eax_2.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_1c)
    return eax_2

int32_t* lpFileName = sub_4079d0(arg2, arg1 + 4, &var_1c, arg2)

if (lpFileName[5] u>= 0x10)
    lpFileName = *lpFileName

uint32_t eax_3 = GetFileAttributesA(lpFileName)
uint32_t ebx

if (eax_3 != 0xffffffff)
    ebx.b = not.b((eax_3 u>> 4).b)
    ebx.b &= 1
else
    ebx.b = 0

int32_t var_8

if (var_8 u>= 0x10)
    sub_403160(var_1c, var_8 + 1, 1)

int32_t eax_4
eax_4.b = ebx.b
@__security_check_cookie@4(eax_1 ^ &var_1c)
return eax_4
