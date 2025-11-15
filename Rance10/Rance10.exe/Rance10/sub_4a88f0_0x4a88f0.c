// 函数: sub_4a88f0
// 地址: 0x4a88f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
int32_t esi = *arg1
int32_t eax_1 = ecx - esi

if (eax_1 u> arg2)
    int32_t eax_2 = esi + arg2
    arg1[1] = eax_2
    return eax_2

if (eax_1 u< arg2)
    char* ebp_1 = arg3
    
    if (ebp_1 u>= ecx || esi u> ebp_1)
        sub_405a20(arg1, esi - ecx + arg2)
    else
        sub_405a20(arg1, esi - ecx + arg2)
        ebp_1 = &ebp_1[*arg1 - esi]
    
    uint32_t (* ecx_3)[0x4] = arg1[1]
    _memset(ecx_3, *ebp_1, *arg1 - ecx_3 + arg2)
    eax_1 = *arg1 + arg2
    arg1[1] = eax_1

return eax_1
