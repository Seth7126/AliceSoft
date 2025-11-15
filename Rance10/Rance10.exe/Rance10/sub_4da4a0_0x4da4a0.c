// 函数: sub_4da4a0
// 地址: 0x4da4a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 8) == 0)
    return 

void* ebx_1 = *(arg1 + 0xc)

if (ebx_1 == 0 || *(arg1 + 0x14) == 0 || *(arg1 + 0x20) == 0)
    return 

int32_t* edi_1

if (*(ebx_1 + 8) == 4)
    void** ecx = *(ebx_1 + 0x50)
    void** eax = ecx
    void** edx_1 = ecx[1]
    
    while (*(edx_1 + 0xd) == 0)
        if (edx_1[4] s>= arg2)
            eax = edx_1
            edx_1 = *edx_1
        else
            edx_1 = edx_1[2]
    
    if (eax == ecx || arg2 s< eax[4])
        eax = ecx
    
    if (eax != ecx)
        edi_1 = eax[5]
    else
        edi_1 = nullptr
else
    edi_1 = nullptr

int32_t* ecx_1 = *(arg1 + 0x1c)

if (ecx_1 == edi_1)
    return 

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()

*(arg1 + 0x1c) = edi_1

if (edi_1 != 0)
    (**edi_1)()

if (*(arg1 + 0x1c) == 0)
    return 

int32_t* ecx_3 = *(arg1 + 0x18)

if (ecx_3 != 0 && arg3 != 0)
    (*(*ecx_3 + 8))()
