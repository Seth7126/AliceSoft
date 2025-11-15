// 函数: sub_5c2090
// 地址: 0x5c2090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** ecx_1 = *arg1
void** eax = ecx_1
void** edx = ecx_1[1]

while (*(edx + 0xd) == 0)
    if (edx[4] s>= arg2)
        eax = edx
        edx = *edx
    else
        edx = edx[2]

if (eax == ecx_1 || arg2 s< eax[4])
    eax = ecx_1

if (eax != ecx_1)
    void* ecx = eax[5]
    
    if (ecx != 0)
        if (((*(ecx + 0x4c) - *(ecx + 0x48)) & 0xfffffffc) s<= 0)
            return ecx
        
        if (arg3 s>= 0 && arg3 s< (*(ecx + 0x4c) - *(ecx + 0x48)) s>> 2)
            int32_t eax_9 = *(*(ecx + 0x48) + (arg3 << 2))
            
            if (eax_9 != 0)
                return eax_9
        
        if (((*(ecx + 0x4c) - *(ecx + 0x48)) & 0xfffffffc) s> 0)
            return **(ecx + 0x48)

return 0
