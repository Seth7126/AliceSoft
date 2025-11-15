// 函数: sub_4177a0
// 地址: 0x4177a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
char* var_8 = arg3
int32_t* eax_4

if (arg4[4] u<= *(arg2 + 0x14) - *(arg2 + 0x10) || arg4[5] - arg4[4] u< *(arg2 + 0x10))
    eax_4 = sub_4055a0(arg2, arg4, 0, 0xffffffff)
else
    int32_t var_10_1 = 0xffffffff
    eax_4 = sub_407870(arg4, arg4, arg2, nullptr)

*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0
sub_4056a0(arg3, eax_4)
return arg3
