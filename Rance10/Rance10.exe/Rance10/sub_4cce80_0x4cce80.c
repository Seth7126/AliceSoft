// 函数: sub_4cce80
// 地址: 0x4cce80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg2 + 4)
uint32_t eax

if (&edx[4] u<= *(arg2 + 8))
    int32_t* esi_1 = data_7fcb58
    uint32_t edi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    
    if (esi_1 != 0)
        char eax_3 = sub_41ac20(0x7636ac, 0x75e0dc)
        
        if (eax_3 == 0)
            eax = sub_41ac20(0x7636ac, 0x75e0ec)
        
        if (eax_3 != 0 || eax.b != 0)
            (**esi_1)()
            void** ebx_1 = data_7fcb58
            
            if (ebx_1 != 0)
                int32_t esi_2 = 0
                
                if (edi_7 s<= 0)
                label_4ccf1d:
                    (*(*ebx_1 + 4))()
                    int32_t eax_7
                    eax_7.b = 1
                    return eax_7
                
                while (true)
                    if (sub_4cd410(arg1, arg2, ebx_1) == 0)
                        (*(*ebx_1 + 4))()
                        break
                    
                    esi_2 += 1
                    
                    if (esi_2 s>= edi_7)
                        goto label_4ccf1d

eax.b = 0
return eax
