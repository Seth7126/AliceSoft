// 函数: sub_599450
// 地址: 0x599450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
void* eax = arg4
int32_t edx = arg5
int32_t edi = arg6
int32_t ebp = edx * 2

if (ebp s<= edi)
    do
        int32_t var_18_1 = 0
        int32_t* edx_1 = &arg3[edx]
        int32_t* esi_1 = &edx_1[edx]
        eax = sub_5994d0(eax, edx_1, arg3, edx_1, esi_1, eax, arg3.b)
        edi -= ebp
        arg3 = esi_1
    while (edi s>= ebp)
    
    edx = arg5

if (edi s<= edx)
    return sub_6feca0(eax, arg3, arg2 - arg3)

int32_t var_18_3 = 0
int32_t* edx_2 = &arg3[edx]
return sub_5994d0(eax, edx_2, arg3, edx_2, arg2, eax, arg3.b)
