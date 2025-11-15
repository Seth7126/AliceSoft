// 函数: sub_5c2010
// 地址: 0x5c2010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** ecx_4 = *arg1
void** eax = ecx_4
void** edx = ecx_4[1]

while (*(edx + 0xd) == 0)
    if (edx[4] s>= arg2)
        eax = edx
        edx = *edx
    else
        edx = edx[2]

if (eax == ecx_4 || arg2 s< eax[4])
    eax = ecx_4

if (eax != ecx_4)
    void* edx_1 = eax[5]
    
    if (edx_1 != 0)
        if (((*(edx_1 + 0x4c) - *(edx_1 + 0x48)) & 0xfffffffc) s> 0 && (arg3 s< 0
                || arg3 s>= (*(edx_1 + 0x4c) - *(edx_1 + 0x48)) s>> 2
                || *(*(edx_1 + 0x48) + (arg3 << 2)) == 0))
            return 0

return arg3
