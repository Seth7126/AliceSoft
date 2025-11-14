// 函数: sub_544ad0
// 地址: 0x544ad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg2 + 4)
void* result

if (&edx[4] u<= *(arg2 + 8))
    uint32_t ecx_4 = (zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])
    uint32_t eax_2 = zx.d(*edx)
    void* edx_1 = arg1
    *(arg2 + 4) = &edx[4]
    int32_t* esi_1 = edx_1 + 4
    uint32_t i_1 = ecx_4 << 8 | eax_2
    uint32_t i_2 = i_1
    int32_t eax_6 = esi_1[1]
    struct sealengine::CInstance::VTable*** var_c
    
    if ((esi_1[1] - *esi_1) s>> 2 s> i_1)
        uint32_t i = i_1
        
        if (i_1 s< (eax_6 - *esi_1) s>> 2)
            do
                if (i s>= 0 && i s< (esi_1[1] - *esi_1) s>> 2)
                    int32_t* ecx_6 = *(*esi_1 + (i << 2))
                    
                    if (ecx_6 != 0)
                        sub_53a360(ecx_6)
                        *(*esi_1 + (i << 2)) = 0
                
                i += 1
            while (i s< (esi_1[1] - *esi_1) s>> 2)
            
            i_1 = i_2
        
        sub_42f470(esi_1, i_1)
        edx_1 = arg1
        i_1 = i_2
    else if ((eax_6 - *esi_1) s>> 2 s< i_1)
        var_c = nullptr
        sub_420c80(esi_1, i_1, &var_c)
        edx_1 = arg1
        i_1 = i_2
    
    int32_t edi_1 = 0
    
    if (i_1 s> 0)
        while (true)
            result = *(arg2 + 4)
            
            if (result + 1 u> *(arg2 + 8))
                goto label_544c67
            
            bool cond:2_1 = *result == 1
            *(arg2 + 4) = result + 1
            result.b = cond:2_1
            
            if (result.b != 0)
                struct sealengine::CInstance::VTable*** eax_25 = *esi_1 + (edi_1 << 2)
                var_c = eax_25
                
                if (*eax_25 == 0)
                    *var_c = sub_5447f0(edx_1, arg3)
                
                if (sub_542d80((*esi_1)[edi_1], arg2).b == 0)
                    goto label_544c67
            else if (edi_1 s>= 0 && edi_1 s< (esi_1[1] - *esi_1) s>> 2)
                int32_t* ecx_10 = *(*esi_1 + (edi_1 << 2))
                
                if (ecx_10 != 0)
                    sub_53a360(ecx_10)
                    *(*esi_1 + (edi_1 << 2)) = 0
            
            edi_1 += 1
            
            if (edi_1 s>= i_2)
                break
            
            edx_1 = arg1
    
    void* ecx_16 = *(arg2 + 4)
    
    if (ecx_16 + 1 u<= *(arg2 + 8))
        result.b = *ecx_16 == 1
        *(arg1 + 0x14) = result.b
        result.b = 1
        *(arg2 + 4) += 1
        return result

label_544c67:
result.b = 0
return result
