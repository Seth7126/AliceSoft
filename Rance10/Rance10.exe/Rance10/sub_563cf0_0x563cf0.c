// 函数: sub_563cf0
// 地址: 0x563cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_28
int32_t eax_1 = __security_cookie ^ &var_28
int32_t eax_2 = sub_563c60(arg1)

if (eax_2.b == 0)
    eax_2.b = 1
    @__security_check_cookie@4(eax_1 ^ &var_28)
    return eax_2

if (data_7fd464 == 0)
    eax_2.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_28)
    return eax_2

void* var_24
int32_t* lpFileName = sub_4079d0(eax_2, &data_7fd454, &var_24, arg1)

if (lpFileName[5] u>= 0x10)
    lpFileName = *lpFileName

int32_t ebx
ebx.b = DeleteFileA(lpFileName) != 0
int32_t var_10

if (var_10 u>= 0x10)
    sub_403160(var_24, var_10 + 1, 1)

BOOL eax_3
eax_3.b = ebx.b
@__security_check_cookie@4(eax_1 ^ &var_28)
return eax_3
