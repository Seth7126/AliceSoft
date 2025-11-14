// 函数: sub_430d80
// 地址: 0x430d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
int32_t* edx

if (arg5[5] u< 0x10)
    edx = arg5
else
    edx = *arg5

int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
void* eax_2

if (*edx != 0)
    int32_t* eax_3 = edx
    void* var_24_1 = eax_3 + 1
    void* ecx
    
    do
        ecx.b = *eax_3
        eax_3 += 1
    while (ecx.b != 0)
    eax_2 = eax_3 - var_24_1
else
    eax_2 = nullptr

sub_402110(&var_20, edx, eax_2)
SetTextColor(arg2, arg6)
char* eax_4 = &var_20

if (var_c u>= 0x10)
    eax_4 = var_20.d

sub_42c0d0(arg1, arg2, *arg3, arg4, eax_4)
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = sx.q(*(arg1 + 0xc8) * var_10)
*arg3 += (eax_7 - edx_1) s>> 1

if (var_c u>= 0x10)
    j__free(var_20.d)

int32_t eax_11 = arg7 - arg5[4]
int32_t eax_12

if (eax_11 s> 0)
    eax_12 = sub_430f30(arg1, arg2, arg3, arg4, eax_11)
else
    eax_12 = 0

sub_69a5bc(eax_1 ^ &var_2c)
return eax_12 + var_10
