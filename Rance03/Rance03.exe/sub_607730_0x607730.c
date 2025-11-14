// 函数: sub_607730
// 地址: 0x607730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg4
void* ebx = (arg2 << 1) + 2
void* var_8 = arg2
int32_t var_c = arg3
void* var_4 = arg2
bool cond:0 = ebx != ebp

while (ebx s< ebp)
    void** ecx = arg3 + ebx * 0x18
    void* edx = &ecx[-6]
    int32_t ebp_1 = *(edx + 0x10)
    
    if (ecx[-1] u>= 0x10)
        edx = *edx
    
    int32_t edi_1 = ecx[4]
    
    if (ecx[5] u>= 0x10)
        ecx = *ecx
    
    int32_t esi_1 = ebp_1
    
    if (edi_1 u< ebp_1)
        esi_1 = edi_1
    
    bool cond:4_1
    
    if (esi_1 != 0)
        int32_t i_1 = esi_1 - 4
        
        if (esi_1 u>= 4)
            int32_t i
            
            do
                if (*ecx != *edx)
                    goto label_60779b
                
                ecx = &ecx[1]
                edx += 4
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        int32_t eax_2
        
        if (i_1 == 0xfffffffc)
            eax_2 = 0
        else
        label_60779b:
            void* eax
            eax.b = *ecx
            char temp2_1 = *edx
            
            if (eax.b != temp2_1)
                eax_2 = sbb.d(eax, eax, eax.b u< temp2_1) | 1
            else if (i_1 == 0xfffffffd)
                eax_2 = 0
            else
                eax.b = *(ecx + 1)
                char temp5_1 = *(edx + 1)
                
                if (eax.b != temp5_1)
                    eax_2 = sbb.d(eax, eax, eax.b u< temp5_1) | 1
                else if (i_1 == 0xfffffffe)
                    eax_2 = 0
                else
                    eax.b = *(ecx + 2)
                    char temp7_1 = *(edx + 2)
                    
                    if (eax.b != temp7_1)
                        eax_2 = sbb.d(eax, eax, eax.b u< temp7_1) | 1
                    else if (i_1 == 0xffffffff)
                        eax_2 = 0
                    else
                        eax.b = *(ecx + 3)
                        char temp8_1 = *(edx + 3)
                        
                        if (eax.b == temp8_1)
                            eax_2 = 0
                        else
                            eax_2 = sbb.d(eax, eax, eax.b u< temp8_1) | 1
        
        cond:4_1 = eax_2 s>= 0
        
        if (eax_2 != 0)
            goto label_6077e2
        
        goto label_6077d5
    
label_6077d5:
    
    if (edi_1 u< ebp_1)
        ebx -= 1
    else
        int32_t eax_3
        eax_3.b = edi_1 != ebp_1
        cond:4_1 = eax_3 s>= 0
    label_6077e2:
        
        if (not(cond:4_1))
            ebx -= 1
    
    arg3 = var_c
    int32_t* edi_2 = arg3 + ebx * 0x18
    arg1 = var_8 * 3
    int32_t* esi_2 = arg3 + (arg1 << 3)
    
    if (esi_2 != edi_2)
        if (esi_2[5] u>= 0x10)
            j__free(*esi_2)
        
        esi_2[5] = 0xf
        esi_2[4] = 0
        *esi_2 = 0
        
        if (edi_2[5] u>= 0x10)
            *esi_2 = *edi_2
            *edi_2 = 0
        else
            void* eax_6 = edi_2[4]
            
            if (eax_6 != 0xffffffff)
                _memcpy(esi_2, edi_2, eax_6 + 1)
        
        arg3 = var_c
        esi_2[4] = edi_2[4]
        arg1 = edi_2[5]
        esi_2[5] = arg1
        edi_2[5] = 0xf
        edi_2[4] = 0
        *edi_2 = 0
    
    ebp = arg4
    arg2 = ebx
    ebx = (ebx << 1) + 2
    var_8 = arg2
    cond:0 = ebx != ebp

if (not(cond:0))
    int32_t* edi_3 = arg3 + (ebp - 1) * 0x18
    arg1 = arg2 * 3
    int32_t* esi_3 = arg3 + (arg1 << 3)
    
    if (esi_3 != edi_3)
        if (esi_3[5] u>= 0x10)
            j__free(*esi_3)
        
        esi_3[5] = 0xf
        esi_3[4] = 0
        *esi_3 = 0
        
        if (edi_3[5] u>= 0x10)
            *esi_3 = *edi_3
            *edi_3 = 0
        else
            void* eax_12 = edi_3[4]
            
            if (eax_12 != 0xffffffff)
                _memcpy(esi_3, edi_3, eax_12 + 1)
        
        arg3 = var_c
        esi_3[4] = edi_3[4]
        arg1 = edi_3[5]
        esi_3[5] = arg1
        edi_3[5] = 0xf
        edi_3[4] = 0
        *edi_3 = 0
    
    arg2 = ebp - 1

int32_t var_20_5 = arg6
return sub_607990(arg1, arg2, arg3, var_4, arg5)
