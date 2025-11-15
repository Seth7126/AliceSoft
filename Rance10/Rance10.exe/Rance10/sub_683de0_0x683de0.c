// 函数: sub_683de0
// 地址: 0x683de0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_110
int32_t var_4 = __security_cookie ^ &var_110
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 4) = 0

int32_t eax_1
eax_1.b = arg3
char temp1 = eax_1.b
eax_1.b = neg.b(eax_1.b)
var_110 = 0
eax_1.b = sbb.b(eax_1.b, eax_1.b, temp1 != 0)
int32_t var_10c = 0
eax_1.b &= 0xf
int32_t var_f8 = 2
int32_t var_f4 = 1
int32_t var_f0 = 1
char var_ec = eax_1.b
int32_t var_fc = 1
int32_t result

if (arg2 == 0)
    int32_t var_108_2 = 0
label_683e96:
    int32_t var_100_6
    
    switch (jump_table_683f28[arg2])
        case 0x683e9d
            int32_t var_104_1 = 2
            var_100_6 = 1
        case 0x683ea7
            int32_t var_104_2 = 5
            int32_t var_100_1 = 6
        case 0x683eb9
            int32_t var_104_3 = 2
            int32_t var_100_2 = 2
        case 0x683ecb
            int32_t var_104_4 = 5
            int32_t var_100_3 = 2
        case 0x683edd
            int32_t var_104_5 = 0xa
            int32_t var_100_4 = 2
        case 0x683eef
            int32_t var_104_6 = 1
            int32_t var_100_5 = 3
        case 0x683f01
            int32_t var_104_7 = 6
            var_100_6 = 1
    
    result.b = (*(*arg4 + 0x50))(arg4, &var_110, arg1 + 4) s>= 0
else
    if (arg2 - 1 u<= 5)
        int32_t var_108_1 = 1
    
    if (arg2 - 1 u<= 5 && arg2 u<= 6)
        goto label_683e96
    
    result.b = 0

@__security_check_cookie@4(var_4 ^ &var_110)
return result
