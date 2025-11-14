// 函数: sub_59a7c0
// 地址: 0x59a7c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg1
void* var_4 = ebp
int32_t* ecx = *(ebp + 0x10)

if (ecx == 0)
    int32_t eax
    eax.b = 0
    return eax

int16_t* esi = (*(*ecx + 0x18))()

if (esi == 0)
    int16_t* eax_2
    eax_2.b = 0
    return eax_2

int32_t ebx = *(ebp + 8)
int32_t edi = 0

if (ebx s> 0)
    do
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(edi + 1)
        *esi = 0
        esi[1] = edi.w + 1
        edi += 1
        esi[2] = (mods.dp.d(edx_1:eax_4, ebx)).w + 1
        esi = &esi[3]
        ebx = *(ebp + 8)
    while (edi s< ebx)

int32_t i = 0
int32_t i_1 = 0

if (*(ebp + 4) - 3 s> 0)
    do
        int32_t ecx_1 = *(ebp + 8)
        int16_t ebx_3 = ecx_1.w * i.w + 1
        int16_t eax_9 = ecx_1.w + ebx_3
        int32_t eax_10 = 0
        int16_t var_c_1 = 0
        
        if (ecx_1 s> 0)
            do
                ebp = var_4
                int16_t temp1_2 = (mods.dp.d(sx.q(eax_10 + 1), ecx_1)).w
                int16_t ecx_2 = var_c_1 + ebx_3
                esi[1] = var_c_1 + eax_9
                int16_t eax_17 = eax_9 + temp1_2
                *esi = ecx_2
                esi[2] = eax_17
                esi[4] = eax_17
                esi[5] = temp1_2 + ebx_3
                eax_10 += 1
                esi[3] = ecx_2
                esi = &esi[6]
                ecx_1 = *(ebp + 8)
                var_c_1 = eax_10.w
            while (eax_10 s< ecx_1)
            
            i = i_1
        
        i += 1
        i_1 = i
    while (i s< *(ebp + 4) - 3)

int32_t ecx_4 = *(ebp + 8)
int32_t eax_24 = 0
int16_t ebx_7 = (*(**(ebp + 0xc) + 0x20))() - ecx_4.w - 1
int16_t var_8 = 0

if (ecx_4 s> 0)
    void* edi_2 = &esi[2]
    
    do
        *(edi_2 - 4) = (mods.dp.d(sx.q(eax_24 + 1), ecx_4)).w + ebx_7
        *(edi_2 - 2) = var_8 + ebx_7
        edi_2 += 6
        *(edi_2 - 6) = (*(**(ebp + 0xc) + 0x20))() - 1
        eax_24 += 1
        ecx_4 = *(ebp + 8)
        var_8 = eax_24.w
    while (eax_24 s< ecx_4)

return (*(**(ebp + 0x10) + 0x1c))() != 0
