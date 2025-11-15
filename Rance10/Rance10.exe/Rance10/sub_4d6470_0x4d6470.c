// 函数: sub_4d6470
// 地址: 0x4d6470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
int32_t var_4 = eax_1

if (*(arg1 + 0x3c) == 0)
    eax_1.b = 0
    @__security_check_cookie@4(var_4 ^ &var_1c)
    return eax_1

int32_t* lpFileName = sub_4175e0(eax_1, arg2, &var_1c, ".flat")

if (lpFileName[5] u>= 0x10)
    lpFileName = *lpFileName

uint32_t eax_2 = GetFileAttributesA(lpFileName)
uint32_t ebx

if (eax_2 != 0xffffffff)
    ebx.b = not.b((eax_2 u>> 4).b)
    ebx.b &= 1
else
    ebx.b = 0

int32_t var_8

if (var_8 u>= 0x10)
    sub_403160(var_1c, var_8 + 1, 1)

int32_t eax_3
eax_3.b = ebx.b
@__security_check_cookie@4(var_4 ^ &var_1c)
return eax_3
