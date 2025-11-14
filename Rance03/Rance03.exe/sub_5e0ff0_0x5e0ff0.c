// 函数: sub_5e0ff0
// 地址: 0x5e0ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
int32_t edx_2 = (ecx - *arg1) s>> 2

if (edx_2 u> 0xa)
    arg1[1] = ecx + ((0xa - edx_2) << 2)
    return 

if (edx_2 u>= 0xa)
    return 

sub_5bcdf0(arg1, 0xa - edx_2)
int32_t* ecx_3 = arg1[1]
int32_t* var_10_2 = arg1
sub_5e1060(ecx_3, 0xa - ((ecx_3 - *arg1) s>> 2))
int32_t ecx_4 = arg1[1]
arg1[1] = ecx_4 + ((0xa - ((ecx_4 - *arg1) s>> 2)) << 2)
