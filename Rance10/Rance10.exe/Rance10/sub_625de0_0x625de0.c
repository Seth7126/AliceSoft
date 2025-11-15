// 函数: sub_625de0
// 地址: 0x625de0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t edi = arg2
char* edx = *(edi + 4)
uint32_t* eax

if (&edx[4] u<= *(edi + 8))
    uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(edi + 4) = &edx[4]
    arg1[0x11] = ecx_6
    
    if (*(edi + 4) + 4 u<= *(edi + 8))
        char* ecx_7 = *(edi + 4)
        uint32_t edx_7 =
            ((zx.d(ecx_7[3]) << 8 | zx.d(ecx_7[2])) << 8 | zx.d(ecx_7[1])) << 8 | zx.d(*ecx_7)
        *(edi + 4) = &ecx_7[4]
        arg1[0x10] = edx_7
        
        if (sub_61ec90(edi, &arg2).b != 0)
            uint32_t ebp = arg2
            int32_t ebx_1 = 0
            
            if (ebp s> 0)
                do
                    int32_t esi_1 = *(edi + 8)
                    char* edx_8
                    
                    if (*(edi + 4) + 4 u<= esi_1)
                        edx_8 = *(edi + 4)
                        uint32_t ecx_15 =
                            ((zx.d(edx_8[3]) << 8 | zx.d(edx_8[2])) << 8 | zx.d(edx_8[1])) << 8
                            | zx.d(*edx_8)
                        *(edi + 4) = &edx_8[4]
                        arg2 = ecx_15
                    
                    if (*(edi + 4) + 4 u> esi_1 || &edx_8[8] u> esi_1)
                        uint32_t eax_10
                        eax_10.b = 0
                        return eax_10
                    
                    uint32_t esi_8 =
                        ((zx.d(edx_8[7]) << 8 | zx.d(edx_8[6])) << 8 | zx.d(edx_8[5])) << 8
                        | zx.d(edx_8[4])
                    *(edi + 4) = &edx_8[8]
                    uint32_t* var_8
                    sub_626230(arg1, &var_8, &arg2)
                    ebx_1 += 1
                    var_8[3] = esi_8
                while (ebx_1 s< ebp)
            
            eax.b = 1
            return eax

eax.b = 0
return eax
