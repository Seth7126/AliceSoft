// 函数: sub_56cec0
// 地址: 0x56cec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_3 = ecx
        sub_56d080(arg1)
    
    int32_t* ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        sub_56d4c0(ecx_4, arg2)
else
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x38e38e39, arg2 - eax)
    int32_t edx_2 = edx_1 s>> 3
    
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_56d080(arg1)
    
    int32_t* ecx_2 = arg1[1]
    
    if (ecx_2 != 0)
        sub_56d4c0(ecx_2, *arg1 + ((edx_2 u>> 0x1f) + edx_2) * 0x24)
        arg1[1] += 0x24
        return 

arg1[1] += 0x24
