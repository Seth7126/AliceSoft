// 函数: sub_47cdd0
// 地址: 0x47cdd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
void* eax_1 = arg3 - arg2
int32_t edi = arg1[4]

if (edi u<= eax_1 && arg1[5] != eax_1 && sub_4036c0(arg1, eax_1, 1) != 0)
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = edi
    int32_t* eax_3
    
    if (cond:0_1)
        eax_3 = arg1
    else
        eax_3 = *arg1
    
    *(eax_3 + edi) = 0

int32_t var_14 = arg3
sub_47ce40(arg1, arg2, arg3)
return arg1
