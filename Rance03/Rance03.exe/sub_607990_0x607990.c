// 函数: sub_607990
// 地址: 0x607990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg2
int32_t var_8 = arg3
int32_t var_c = esi
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi - 1)
int32_t eax_3 = (eax_1 - edx) s>> 1
int32_t var_4 = eax_3

if (arg4 s< esi)
    do
        int32_t* edi_1 = arg3 + eax_3 * 0x18
        int32_t eax_5 = arg5[4]
        int32_t* esi_1
        
        if (arg5[5] u< 0x10)
            esi_1 = arg5
        else
            esi_1 = *arg5
        
        int32_t ebp_1 = edi_1[4]
        int32_t* edx_1
        
        if (edi_1[5] u< 0x10)
            edx_1 = edi_1
        else
            edx_1 = *edi_1
        
        int32_t ecx = eax_5
        
        if (ebp_1 u< eax_5)
            ecx = ebp_1
        
        if (ecx == 0)
            goto label_607a47
        
        int32_t i_1 = ecx - 4
        
        if (ecx u>= 4)
            int32_t i
            
            do
                if (*edx_1 != *esi_1)
                    goto label_607a0a
                
                edx_1 = &edx_1[1]
                esi_1 = &esi_1[1]
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        int32_t eax_7
        
        if (i_1 == 0xfffffffc)
            eax_7 = 0
        else
        label_607a0a:
            eax_5.b = *edx_1
            char temp2_1 = *esi_1
            
            if (eax_5.b != temp2_1)
                eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp2_1) | 1
            else if (i_1 == 0xfffffffd)
                eax_7 = 0
            else
                eax_5.b = *(edx_1 + 1)
                char temp6_1 = *(esi_1 + 1)
                
                if (eax_5.b != temp6_1)
                    eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp6_1) | 1
                else if (i_1 == 0xfffffffe)
                    eax_7 = 0
                else
                    eax_5.b = *(edx_1 + 2)
                    char temp7_1 = *(esi_1 + 2)
                    
                    if (eax_5.b != temp7_1)
                        eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp7_1) | 1
                    else if (i_1 == 0xffffffff)
                        eax_7 = 0
                    else
                        eax_5.b = *(edx_1 + 3)
                        char temp8_1 = *(esi_1 + 3)
                        
                        if (eax_5.b == temp8_1)
                            eax_7 = 0
                        else
                            eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp8_1) | 1
        
        bool cond:3_1 = eax_7 s>= 0
        
        if (eax_7 != 0)
            goto label_607a55
        
        eax_5 = arg5[4]
    label_607a47:
        
        if (ebp_1 u>= eax_5)
            int32_t eax_8
            eax_8.b = ebp_1 != arg5[4]
            cond:3_1 = eax_8 s>= 0
        label_607a55:
            
            if (cond:3_1)
                esi = var_c
                break
        
        arg3 = var_8
        int32_t* esi_2 = arg3 + var_c * 0x18
        
        if (esi_2 != edi_1)
            if (esi_2[5] u>= 0x10)
                j__free(*esi_2)
            
            esi_2[5] = 0xf
            esi_2[4] = 0
            *esi_2 = 0
            
            if (edi_1[5] u>= 0x10)
                *esi_2 = *edi_1
                *edi_1 = 0
            else
                void* eax_11 = edi_1[4]
                
                if (eax_11 != 0xffffffff)
                    _memcpy(esi_2, edi_1, eax_11 + 1)
            
            arg3 = var_8
            esi_2[4] = edi_1[4]
            esi_2[5] = edi_1[5]
            edi_1[5] = 0xf
            edi_1[4] = 0
            *edi_1 = 0
        
        esi = var_4
        var_c = esi
        int32_t eax_18
        int32_t edx_2
        edx_2:eax_18 = sx.q(var_4 - 1)
        eax_3 = (eax_18 - edx_2) s>> 1
        var_4 = eax_3
    while (arg4 s< esi)
    
    arg3 = var_8

int32_t result = esi * 3
int32_t* esi_3 = arg3 + (result << 3)

if (esi_3 != arg5)
    if (esi_3[5] u>= 0x10)
        j__free(*esi_3)
    
    esi_3[5] = 0xf
    esi_3[4] = 0
    *esi_3 = 0
    
    if (arg5[5] u>= 0x10)
        *esi_3 = *arg5
        *arg5 = 0
    else
        void* eax_20 = arg5[4]
        
        if (eax_20 != 0xffffffff)
            _memcpy(esi_3, arg5, eax_20 + 1)
    
    esi_3[4] = arg5[4]
    result = arg5[5]
    esi_3[5] = result
    arg5[5] = 0xf
    arg5[4] = 0
    *arg5 = 0

return result
