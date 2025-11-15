// 函数: sub_49e690
// 地址: 0x49e690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_24
int32_t var_c = __security_cookie ^ &var_24
bool cond:0 = *arg2 != 0
int32_t var_10 = 0xf
int32_t var_14 = 0
var_24 = 0
void* ecx

if (cond:0)
    char* ecx_1 = arg2
    int32_t eax_1
    
    do
        eax_1.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_1.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_24, arg2, ecx)
HWND hWnd = **(arg1 + 0xc)
int32_t* result

if (hWnd != 0)
    char* lpString = &var_24
    
    if (var_10 u>= 0x10)
        lpString = var_24.d
    
    result = SetWindowTextA(hWnd, lpString)

int32_t ebx

if (hWnd == 0 || result == 0)
    ebx.b = 0
else
    ebx.b = 1

if (var_10 u>= 0x10)
    sub_403160(var_24.d, var_10 + 1, 1)

result.b = ebx.b
@__security_check_cookie@4(var_c ^ &var_24)
return result
