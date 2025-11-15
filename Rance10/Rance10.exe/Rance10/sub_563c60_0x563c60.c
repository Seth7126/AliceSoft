// 函数: sub_563c60
// 地址: 0x563c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t var_8 = eax_1

if (data_7fd464 == 0)
    eax_1.b = 0
    @__security_check_cookie@4(var_8 ^ &var_20)
    return eax_1

int32_t* lpFileName = sub_4079d0(eax_1, &data_7fd454, &var_20, arg1)

if (lpFileName[5] u>= 0x10)
    lpFileName = *lpFileName

uint32_t eax_2 = GetFileAttributesA(lpFileName)
uint32_t ebx

if (eax_2 != 0xffffffff)
    ebx.b = not.b((eax_2 u>> 4).b)
    ebx.b &= 1
else
    ebx.b = 0

int32_t var_c

if (var_c u>= 0x10)
    sub_403160(var_20, var_c + 1, 1)

int32_t eax_3
eax_3.b = ebx.b
@__security_check_cookie@4(var_8 ^ &var_20)
return eax_3
