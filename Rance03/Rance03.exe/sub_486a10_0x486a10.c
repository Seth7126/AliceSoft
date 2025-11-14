// 函数: sub_486a10
// 地址: 0x486a10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg2 + 4)
uint32_t eax

if (&edx[4] u<= *(arg2 + 8))
    int32_t* esi_1 = data_75d540
    uint32_t edi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    
    if (esi_1 != 0)
        char eax_3 = sub_43aa00(0x6dfb30, 0x6f1f40)
        
        if (eax_3 == 0)
            eax = sub_43aa00(0x6dfb30, 0x6f1f30)
        
        if (eax_3 != 0 || eax.b != 0)
            (**esi_1)()
            uint32_t* ebx_1 = data_75d540
            
            if (ebx_1 != 0)
                int32_t esi_2 = 0
                
                if (edi_7 s<= 0)
                label_486aad:
                    (*(*ebx_1 + 4))()
                    int32_t eax_7
                    eax_7.b = 1
                    return eax_7
                
                while (true)
                    if (sub_486b00(arg1, arg2, ebx_1) == 0)
                        (*(*ebx_1 + 4))()
                        break
                    
                    esi_2 += 1
                    
                    if (esi_2 s>= edi_7)
                        goto label_486aad

eax.b = 0
return eax
