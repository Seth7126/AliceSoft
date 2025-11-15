// 函数: sub_6e3437
// 地址: 0x6e3437
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
void* ecx = arg1[4]

if (ecx u< arg2)
    sub_6321b0()
    noreturn

if (not.d(ecx) u<= arg3)
    sub_631dd0()
    noreturn

void* eax_2 = ecx + arg3

if (arg3 != 0 && sub_6319a0(arg1, eax_2, 0) != 0)
    int32_t* edx_1
    
    if (arg1[5] u< 8)
        edx_1 = arg1
    else
        edx_1 = *arg1
    
    int32_t* ecx_2
    
    if (arg1[5] u< 8)
        ecx_2 = arg1
    else
        ecx_2 = *arg1
    
    int32_t var_18_1 = arg1[4] - arg2
    sub_62bf20(ecx_2 + ((arg2 + arg3) << 1), edx_1 + (arg2 << 1))
    sub_631f50(arg1, arg2, arg3, arg4)
    bool cond:0_1 = arg1[5] u< 8
    arg1[4] = eax_2
    int32_t* eax_9
    
    if (cond:0_1)
        eax_9 = arg1
    else
        eax_9 = *arg1
    
    *(eax_9 + (eax_2 << 1)) = 0

return arg1
