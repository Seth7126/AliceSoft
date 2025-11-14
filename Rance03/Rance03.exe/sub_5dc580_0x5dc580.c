// 函数: sub_5dc580
// 地址: 0x5dc580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax = *arg1
void** edx = eax
int32_t eax_1 = arg1[1]

if (edx != eax_1)
    int32_t* eax_2 = arg2
    int32_t ebp_1 = eax_2[4]
    
    while (true)
        int32_t* esi_1
        
        if (eax_2[5] u< 0x10)
            esi_1 = eax_2
        else
            esi_1 = *eax_2
        
        int32_t ebx_1 = edx[4]
        void* edi_1
        
        if (edx[5] u< 0x10)
            edi_1 = edx
        else
            edi_1 = *edx
        
        int32_t eax_3 = ebp_1
        
        if (ebx_1 u< ebp_1)
            eax_3 = ebx_1
        
        if (eax_3 == 0)
        label_5dc620:
            
            if (ebx_1 u>= ebp_1)
                int32_t eax_6
                eax_6.b = ebx_1 != ebp_1
                
                if (eax_6 == 0)
                    return (edx - eax) s/ 0x28
        else
            int32_t i_1 = eax_3 - 4
            
            if (eax_3 u>= 4)
                int32_t i
                
                do
                    if (*edi_1 != *esi_1)
                        goto label_5dc5e6
                    
                    edi_1 += 4
                    esi_1 = &esi_1[1]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            int32_t eax_5
            
            if (i_1 == 0xfffffffc)
                eax_5 = 0
            else
            label_5dc5e6:
                arg1.b = *edi_1
                char temp2_1 = *esi_1
                
                if (arg1.b != temp2_1)
                    eax_5 = sbb.d(i_1, i_1, arg1.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_5 = 0
                else
                    arg1.b = *(edi_1 + 1)
                    char temp4_1 = *(esi_1 + 1)
                    
                    if (arg1.b != temp4_1)
                        eax_5 = sbb.d(i_1, i_1, arg1.b u< temp4_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_5 = 0
                    else
                        arg1.b = *(edi_1 + 2)
                        char temp5_1 = *(esi_1 + 2)
                        
                        if (arg1.b != temp5_1)
                            eax_5 = sbb.d(i_1, i_1, arg1.b u< temp5_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_5 = 0
                        else
                            i_1.b = *(edi_1 + 3)
                            char temp6_1 = *(esi_1 + 3)
                            
                            if (i_1.b == temp6_1)
                                eax_5 = 0
                            else
                                eax_5 = sbb.d(i_1, i_1, i_1.b u< temp6_1) | 1
            
            if (eax_5 == 0)
                goto label_5dc620
        
        edx = &edx[0xa]
        
        if (edx == eax_1)
            break
        
        eax_2 = arg2

return 0xffffffff
