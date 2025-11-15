// 函数: sub_5bc680
// 地址: 0x5bc680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_10_2 = ecx
        sub_5bcb90(arg1)
    
    int32_t edi_1 = arg1[1]
    
    if (edi_1 != 0)
        __builtin_memcpy(edi_1, arg2, 0x78)
else
    if (ecx == arg1[2])
        int32_t var_10_1 = ecx
        sub_5bcb90(arg1)
    
    int32_t edi = arg1[1]
    
    if (edi != 0)
        __builtin_memcpy(edi, *arg1 + (arg2 - eax) s/ 0x78 * 0x78, 0x78)
        arg1[1] += 0x78
        return 

arg1[1] += 0x78
