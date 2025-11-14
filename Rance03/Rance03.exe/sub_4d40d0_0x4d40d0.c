// 函数: sub_4d40d0
// 地址: 0x4d40d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 4)

if (eax != *(arg1 + 8))
    *(arg1 + 8) = eax
    int32_t* ecx = *(arg1 + 0x10)
    
    if (ecx != 0)
        (**ecx)()

int32_t i_1
int32_t i_2 = i_1
char* edx = *(i_2 + 4)

if (&edx[4] u> *(i_2 + 8))
    eax.b = 0
    return eax

int32_t ecx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(i_2 + 4) = &edx[4]
int32_t ebx = 0
int32_t eax_4

if (ecx_7 s> 0)
    do
        char* edx_1 = *(i_2 + 4)
        
        if (&edx_1[4] u> *(i_2 + 8))
            eax_4.b = 0
            return eax_4
        
        uint32_t ecx_12 = (zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])
        uint32_t eax_7 = zx.d(*edx_1)
        *(i_2 + 4) = &edx_1[4]
        uint32_t i = ecx_12 << 8 | eax_7
        int32_t* eax_8 = *(arg1 + 4)
        i_1 = i
        int32_t edx_2 = *(arg1 + 8)
        
        if (eax_8 != edx_2)
            while (*eax_8 != i)
                eax_8 = &eax_8[1]
                
                if (eax_8 == edx_2)
                    break
            
            if (eax_8 != edx_2)
                _memcpy(eax_8, &eax_8[1], (*(arg1 + 8) - &eax_8[1]) & 0xfffffffc)
                *(arg1 + 8) -= 4
                int32_t* ecx_17 = *(arg1 + 0x10)
                
                if (ecx_17 != 0)
                    (**ecx_17)()
        
        sub_4158d0(arg1 + 4, &i_1)
        int32_t* ecx_19 = *(arg1 + 0x10)
        
        if (ecx_19 != 0)
            (**ecx_19)()
        
        ebx += 1
    while (ebx s< ecx_7)

eax_4.b = 1
return eax_4
