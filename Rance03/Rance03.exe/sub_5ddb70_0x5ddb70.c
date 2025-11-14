// 函数: sub_5ddb70
// 地址: 0x5ddb70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
void* ecx

if (arg2 s>= 0)
    ecx = *(arg1 + 4)

if (arg2 s< 0 || arg2 s>= *(ecx + 0x30))
    sub_64b530(0x6eab5c)
else
    switch (*(*(ecx + 0x2c) + (arg2 << 2)) - 0xc)
        case 0
            sub_401f60(&var_24, arg3)
            int32_t ebx
            ebx.b = sub_5dd0f0(arg1, arg2, &var_24) == 0
            sub_401fb0(&var_24)
            
            if (ebx.b == 0)
                sub_69a5bc(eax_1 ^ &var_24)
                return 1
        case 1, 2, 3, 4, 5, 0x26
            sub_64b530(0x6eab84)
        default
            if (sub_5d34a0(ecx, arg2, *arg3) != 0)
                sub_69a5bc(eax_1 ^ &var_24)
                return 1

sub_69a5bc(eax_1 ^ &var_24)
return 0
