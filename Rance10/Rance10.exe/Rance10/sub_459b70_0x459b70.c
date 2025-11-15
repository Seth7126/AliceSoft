// 函数: sub_459b70
// 地址: 0x459b70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
uint32_t ebx = arg3
char* ecx = *(ebx + 4)

if (&ecx[4] u<= *(ebx + 8))
    uint32_t eax_3 = zx.d(*ecx)
    uint32_t edx_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8
    *(ebx + 4) = &ecx[4]
    uint32_t i_1 = 0
    *(arg1 + 4) = edx_6 | eax_3
    arg3 = 0
    
    if (arg2 s>= 6)
        goto label_459bdd
    
    if (sub_61ec90(ebx, &arg3) != 0)
        i_1 = arg3
    label_459bdd:
        
        if (sub_61ed80(ebx, arg1 + 8) != 0)
            int32_t* result
            
            if (arg2 s< 6)
                if (*(arg1 + 4) - 0x4e u<= 3)
                    sub_45a0c0(arg1 + 0x20, 1)
                    
                    if (i_1 s> 0)
                        uint32_t i
                        
                        do
                            void* esi_2 = *(arg1 + 0x20)
                            *(esi_2 + 4) = *(arg1 + 4)
                            
                            if (esi_2 + 8 != arg1 + 8)
                                sub_403590(esi_2 + 8, arg1 + 8, 0, 0xffffffff)
                            
                            sub_45a1d0(esi_2 + 0x20, arg1 + 0x20)
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                
                result.b = 1
                return result
            
            if (sub_6c92b0(ebx, &arg3) != 0)
                sub_45a0c0(arg1 + 0x20, arg3)
                int32_t esi_1 = *(arg1 + 0x20)
                int32_t edi_2 = *(arg1 + 0x24)
                
                if (esi_1 == edi_2)
                    result.b = 1
                    return result
                
                while (sub_459b70(arg2, ebx) != 0)
                    esi_1 += 0x2c
                    
                    if (esi_1 == edi_2)
                        return 1

return 0
