// 函数: sub_655430
// 地址: 0x655430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
int32_t* ebp = esi[0x6c]
arg1 = ebp

if (*(esi + 0xc9) == 0)
    if (esi[0x5e] != 0 || esi[0x60] != 0 || esi[0x61] != 0)
        *(*esi + 0x14) = 0x7d
        (*(*esi + 4))(esi, 0xffffffff)
    else
        int32_t eax_28 = esi[0x5f]
        
        if (eax_28 s< 0x40 && eax_28 != esi[0x64])
            *(*esi + 0x14) = 0x7d
            (*(*esi + 4))(esi, 0xffffffff)
    
    ebp[1] = sub_6550c0
else
    int32_t eax_1 = esi[0x5e]
    bool cond:1_1
    
    if (eax_1 != 0)
        int32_t ecx_1 = esi[0x5f]
        
        if (ecx_1 s>= eax_1 && ecx_1 s<= esi[0x64])
            cond:1_1 = esi[0x4c] != 1
            goto label_65547d
        
    label_65549e:
        *(*esi + 0x14) = 0x11
        *(*esi + 0x18) = esi[0x5e]
        *(*esi + 0x1c) = esi[0x5f]
        *(*esi + 0x20) = esi[0x60]
        *(*esi + 0x24) = esi[0x61]
        (**esi)(esi)
    else
        cond:1_1 = esi[0x5f] != eax_1
    label_65547d:
        
        if (cond:1_1)
            goto label_65549e
        
        int32_t eax_2 = esi[0x60]
        
        if ((eax_2 != 0 && eax_2 - 1 != esi[0x61]) || esi[0x61] s> 0xd)
            goto label_65549e
    int32_t i = 0
    int32_t i_2 = 0
    
    if (esi[0x4c] s> 0)
        void* eax_11 = &esi[0x4d]
        void* var_4_1 = eax_11
        
        do
            int32_t ebp_1 = *(*eax_11 + 4)
            int32_t* ebx_3 = (ebp_1 << 8) + esi[0x23]
            
            if (esi[0x5e] != 0 && *ebx_3 s< 0)
                *(*esi + 0x14) = 0x76
                *(*esi + 0x18) = ebp_1
                *(*esi + 0x1c) = 0
                (*(*esi + 4))(esi, 0xffffffff)
                i = i_2
            
            int32_t j = esi[0x5e]
            
            if (j s<= esi[0x5f])
                do
                    int32_t eax_18 = ebx_3[j]
                    
                    if (eax_18 s< 0)
                        eax_18 = 0
                    
                    if (esi[0x60] != eax_18)
                        *(*esi + 0x14) = 0x76
                        *(*esi + 0x18) = ebp_1
                        *(*esi + 0x1c) = j
                        (*(*esi + 4))(esi, 0xffffffff)
                    
                    ebx_3[j] = esi[0x61]
                    j += 1
                while (j s<= esi[0x5f])
                
                i = i_2
            
            i += 1
            eax_11 = var_4_1 + 4
            i_2 = i
            var_4_1 = eax_11
        while (i s< esi[0x4c])
        
        ebp = arg1
    
    if (esi[0x60] != 0)
        void* (* eax_27)(int32_t* arg1, int32_t* arg2) = sub_654f20
        
        if (esi[0x5e] == 0)
            eax_27 = sub_654ea0
        
        ebp[1] = eax_27
    else
        int32_t (* eax_26)(int32_t* arg1, int32_t* arg2) = sub_654cd0
        
        if (esi[0x5e] == 0)
            eax_26 = sub_654ae0
        
        ebp[1] = eax_26

int32_t i_1 = 0
int32_t i_3 = 0

if (esi[0x4c] s> 0)
    void* ecx_6 = &esi[0x4d]
    void* ebx_4 = &ebp[0xa]
    void* var_4_2 = ecx_6
    
    do
        void* ebp_2 = *ecx_6
        
        if (*(esi + 0xc9) == 0)
        label_65567d:
            int32_t edi_1 = *(ebp_2 + 0x14)
            
            if (edi_1 s< 0 || edi_1 s>= 0x10)
                *(*esi + 0x14) = 0x32
                *(*esi + 0x18) = edi_1
                (**esi)(esi)
            
            int32_t* eax_39 = arg1
            
            if (eax_39[edi_1 + 0xf] == 0)
                arg1[edi_1 + 0xf] = (*esi[1])(esi, 1, 0x40)
                eax_39 = arg1
            
            _memset(eax_39[edi_1 + 0xf], 0, 0x40)
            i_1 = i_3
            ecx_6 = var_4_2
            *(ebx_4 - 0x10) = 0
            *ebx_4 = 0
        else if (esi[0x5e] == 0 && esi[0x60] == 0)
            goto label_65567d
        
        if (*(esi + 0xc9) == 0)
            if (esi[0x64] != 0)
                goto label_65574a
            
            ebp = arg1
        else if (esi[0x5e] == 0)
            ebp = arg1
        else
        label_65574a:
            int32_t edi_2 = *(ebp_2 + 0x18)
            
            if (edi_2 s< 0 || edi_2 s>= 0x10)
                *(*esi + 0x14) = 0x32
                *(*esi + 0x18) = edi_2
                (**esi)(esi)
            
            ebp = arg1
            
            if (ebp[edi_2 + 0x1f] == 0)
                ebp[edi_2 + 0x1f] = (*esi[1])(esi, 1, 0x100)
            
            _memset(ebp[edi_2 + 0x1f], 0, 0x100)
            i_1 = i_3
            ecx_6 = var_4_2
        
        i_1 += 1
        ecx_6 += 4
        ebx_4 += 4
        i_3 = i_1
        var_4_2 = ecx_6
    while (i_1 s< esi[0x4c])

ebp[3] = 0
ebp[4] = 0
ebp[5] = 0xfffffff0
int32_t result = esi[0x3f]
ebp[0xe] = result
return result
