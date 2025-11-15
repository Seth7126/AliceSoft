// 函数: _strncpy
// 地址: 0x706660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg3

if (ecx == 0)
    return arg1

int32_t ebx_1 = ecx
char* esi_1 = arg2
char* edi_1 = arg1
int32_t eax
uint32_t i_2
uint32_t i_3

if ((esi_1 & 3) != 0)
    do
        eax.b = *esi_1
        esi_1 = &esi_1[1]
        *edi_1 = eax.b
        edi_1 = &edi_1[1]
        int32_t temp0_1 = ecx
        ecx -= 1
        
        if (temp0_1 == 1)
            return arg1
        
        if (eax.b == 0)
            while ((edi_1 & 3) != 0)
                *edi_1 = eax.b
                edi_1 = &edi_1[1]
                int32_t temp2_1 = ecx
                ecx -= 1
                
                if (temp2_1 == 1)
                    return arg1
            
            ebx_1 = ecx
            i_3 = ecx u>> 2
            
            if (i_3 == 0)
                goto label_7066f3
            
        label_706767:
            eax = 0
            uint32_t i
            
            do
                *edi_1 = 0
                edi_1 = &edi_1[4]
                i = i_3
                i_3 -= 1
            while (i != 1)
        label_706773:
            ebx_1 &= 3
            
            if (ebx_1 != 0)
                goto label_7066f3
            
            return arg1
    while ((esi_1 & 3) != 0)
    
    ebx_1 = ecx
    i_2 = ecx u>> 2
    
    if (i_2 != 0)
        goto label_70670d
    
label_7066ae:
    ebx_1 &= 3
    
    if (ebx_1 != 0)
        goto label_7066b3
else
    i_2 = ecx u>> 2
    
    if (i_2 != 0)
    label_70670d:
        uint32_t i_1
        
        do
            int32_t eax_3 = *esi_1
            int32_t edx_2 = *esi_1
            esi_1 = &esi_1[4]
            
            if (((eax_3 ^ 0xffffffff ^ (0x7efefeff + eax_3)) & 0x81010100) != 0)
                if (edx_2.b == 0)
                    *edi_1 = 0
                label_70675d:
                    edi_1 = &edi_1[4]
                    eax = 0
                    i_3 = i_2 - 1
                    
                    if (i_2 == 1)
                        goto label_706773
                    
                    goto label_706767
                
                if (edx_2:1.b == 0)
                    *edi_1 = edx_2 & 0xff
                    goto label_70675d
                
                if ((edx_2 & 0xff0000) == 0)
                    *edi_1 = edx_2 & 0xffff
                    goto label_70675d
                
                if ((edx_2 & 0xff000000) == 0)
                    *edi_1 = edx_2
                    goto label_70675d
            
            *edi_1 = edx_2
            edi_1 = &edi_1[4]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        goto label_7066ae
    
label_7066b3:
    
    while (true)
        eax.b = *esi_1
        esi_1 = &esi_1[1]
        *edi_1 = eax.b
        edi_1 = &edi_1[1]
        
        if (eax.b == 0)
            while (true)
                int32_t temp3_1 = ebx_1
                ebx_1 -= 1
                
                if (temp3_1 == 1)
                    return arg1
                
            label_7066f3:
                *edi_1 = eax.b
                edi_1 = &edi_1[1]
        else
            int32_t temp4_1 = ebx_1
            ebx_1 -= 1
            
            if (temp4_1 == 1)
                break
return arg1
