// 函数: sub_4dcb80
// 地址: 0x4dcb80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = arg4
*eax = 0
*arg3 = 0

if (*(arg1 + 8) != 0)
    void* ebx_1 = *(arg1 + 0xc)
    
    if (ebx_1 != 0 && *(arg1 + 0x14) != 0)
        eax = arg2
        int32_t esi_1 = *eax
        
        if (*(ebx_1 + 8) != 5)
        label_4dcc3c:
            int32_t* ecx_5 = *(arg1 + 0x10)
            
            if (ecx_5 != 0)
                eax = (*(*ecx_5 + 4))()
                *(arg1 + 0x10) = 0
        else
            char* ecx = *(ebx_1 + 0x58)
            eax = ecx
            void** edx_1 = *(ecx + 4)
            
            while (*(edx_1 + 0xd) == 0)
                if (edx_1[4] s>= esi_1)
                    eax = edx_1
                    edx_1 = *edx_1
                else
                    edx_1 = edx_1[2]
            
            if (eax == ecx || esi_1 s< *(eax + 0x10))
                eax = ecx
            
            if (eax == ecx)
                goto label_4dcc3c
            
            int32_t* esi_2 = *(eax + 0x14)
            
            if (esi_2 == 0)
                goto label_4dcc3c
            
            int32_t* ecx_1 = *(arg1 + 0x10)
            
            if (ecx_1 != esi_2)
                if (ecx_1 != 0)
                    (*(*ecx_1 + 4))()
                
                *(arg1 + 0x10) = esi_2
                (**esi_2)()
                int32_t eax_3 = esi_2[2]
                
                if (eax_3 == 0xffffffff)
                    eax_3.b = esi_2[3].b
                    *arg4 = eax_3.b
                    return eax_3
                
                *arg3 = 1
                *arg2 = eax_3
                return eax_3

return eax
