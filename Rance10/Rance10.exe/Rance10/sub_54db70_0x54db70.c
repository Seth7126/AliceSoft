// 函数: sub_54db70
// 地址: 0x54db70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = &data_7fd34c

if (data_7fd360 u>= 0x10)
    edx = data_7fd34c

int32_t* esi = arg2
int32_t edi = esi[5]

if (edi u< 0x10)
    arg2 = esi
else
    arg2 = *esi

int32_t ebx = esi[4]
int32_t eax_2 = data_7fd35c

if (ebx u< eax_2)
    eax_2 = ebx

if (sub_406ac0(eax_2, edx, arg2, eax_2) == 0)
    int32_t eax_4 = data_7fd35c
    
    if (ebx u>= eax_4 && ebx u<= eax_4)
        int32_t* ecx_1 = *arg1
        
        if (ecx_1 != 0)
            int32_t esi_1 = ecx_1[1]
            ecx_1[1] -= 1
            (**ecx_1)(esi_1 - 1)
            *arg1 = 0
            arg1[5].b = 1
        
        eax_4.b = 1
        return eax_4

int32_t* eax_7

if (arg4 != 0)
    if (edi u>= 0x10)
        esi = *esi
    
    eax_7 = sub_44c320(esi)
else
    if (edi u>= 0x10)
        esi = *esi
    
    eax_7 = sub_44bec0(data_7fcb48, esi)

if (eax_7 != 0)
    int32_t eax_9 = (*(*eax_7 + 0x10))()
    int32_t eax_10 = (*(*eax_7 + 0x14))()
    int32_t eax_11 = *(arg3 + 8)
    int32_t* edx_3 = *(arg3 + 0xc)
    int32_t ebx_1 = *(arg3 + 0x14)
    void* edi_1 = *(arg3 + 0x18)
    arg4.d = eax_11
    arg2 = edx_3
    
    if (eax_11 s< 0)
        ebx_1 += eax_11
        eax_11 = 0
        arg4.d = 0
    
    if (eax_11 + ebx_1 s> eax_9)
        ebx_1 = eax_9 - arg4.d
    
    if (edx_3 s< 0)
        edi_1 += edx_3
        edx_3 = nullptr
        arg2 = nullptr
    
    if (edi_1 + edx_3 s> eax_10)
        edi_1 = eax_10 - edx_3
    
    if (ebx_1 s> 0 && edi_1 s> 0)
        char eax_16 = (*(*eax_7 + 0x24))()
        char eax_19
        
        if (eax_16 != 0)
            eax_19 = (*(*eax_7 + 0x28))()
        
        int32_t* eax_22
        
        if (eax_16 == 0 || eax_19 == 0)
            char eax_25 = (*(*eax_7 + 0x24))()
            char eax_28
            
            if (eax_25 != 0)
                eax_28 = (*(*eax_7 + 0x28))()
            
            if (eax_25 == 0 || eax_28 != 0)
                if ((*(*eax_7 + 0x24))() == 0 && (*(*eax_7 + 0x28))() != 0)
                    int32_t* ecx_18 = arg1[2]
                    
                    if (ecx_18 != 0)
                        eax_22 = (*(*ecx_18 + 0x10))(ebx_1, edi_1)
                        goto label_54dd3f
            else
                int32_t eax_30 = (*(*eax_7 + 0x18))()
                int32_t* ecx_15 = arg1[2]
                
                if (ecx_15 != 0)
                    eax_22 = (*(*ecx_15 + 0xc))(ebx_1, edi_1, eax_30)
                    goto label_54dd3f
        else
            int32_t eax_21 = (*(*eax_7 + 0x18))()
            int32_t* ecx_11 = arg1[2]
            
            if (ecx_11 != 0)
                eax_22 = (*(*ecx_11 + 8))(ebx_1, edi_1, eax_21)
            label_54dd3f:
                
                if (eax_22 != 0)
                    int32_t* ecx_19 = arg1[4]
                    
                    if (ecx_19 != 0)
                        (*(*ecx_19 + 0x5c))(eax_22, 0, 0, eax_7, arg4.d, arg2, ebx_1, edi_1)
                    
                    (*(*eax_7 + 4))()
                    sub_54d770(arg1)
                    sub_54ea10(arg1, eax_22)
                    (*(*eax_22 + 4))()
                    int32_t eax_42
                    eax_42.b = 1
                    return eax_42
    
    (*(*eax_7 + 4))()

eax_7.b = 0
return eax_7
