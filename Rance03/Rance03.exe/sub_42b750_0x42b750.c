// 函数: sub_42b750
// 地址: 0x42b750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t eax_2 = data_75dd38
int32_t var_38 = eax_2
data_75dd38 = eax_2 + 1
int32_t var_20
int32_t* eax_4 = sub_4691f0(&var_20, "DPVariable_TextChildWnd%d")

if (arg1 + 8 != eax_4)
    if (*(arg1 + 0x1c) u>= 0x10)
        j__free(*(arg1 + 8))
    
    *(arg1 + 0x1c) = 0xf
    *(arg1 + 0x18) = 0
    *(arg1 + 8) = 0
    sub_4030b0(arg1 + 8, eax_4)

int32_t var_c

if (var_c u>= 0x10)
    j__free(var_20)

**(arg1 + 4) = 0xb
int32_t var_38_4 = *(arg1 + 0xc8)
*(arg1 + 0x38) = 0x200
*(arg1 + 0x3c) = 0x50000000
*(arg1 + 0x50) = arg2
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 0
sub_42b860(arg1, var_38_4)
char eax_7 = sub_431d40(arg1, arg3)

if (eax_7 == 0)
    sub_69a5bc(eax_1 ^ &var_24)
    return eax_7

sub_432470(arg1)
ShowWindow(*(arg1 + 0x5c), SW_SHOW)
UpdateWindow(*(arg1 + 0x5c))
BOOL eax_8
eax_8.b = 1
sub_69a5bc(eax_1 ^ &var_24)
return eax_8
