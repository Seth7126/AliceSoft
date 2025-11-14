// 函数: sub_54c560
// 地址: 0x54c560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_38
int32_t eax_1 = __security_cookie ^ &var_38
void* esi = arg1 + 0x30
void* var_24 = esi
*(arg1 + 0x2c) = *(arg2 + 0xc)
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0x14) - *(arg2 + 0x10))
int32_t edx_1 = edx s>> 3
int32_t ebp_2 = (edx_1 u>> 0x1f) + edx_1
sub_54df10(esi, ebp_2)
int32_t ebx_1 = 0
int32_t eax_4

if (ebp_2 s> 0)
    eax_4 = 0
    var_38 = 0
    int32_t var_30_1 = 0
    
    while (true)
        int32_t* esi_2 = *esi + eax_4
        int32_t var_1c
        char* eax_5 = sub_54b470(arg2, &var_1c, ebx_1)
        
        if (esi_2 != eax_5)
            if (esi_2[5] u>= 0x10)
                j__free(*esi_2)
            
            esi_2[5] = 0xf
            esi_2[4] = 0
            *esi_2 = 0
            
            if (*(eax_5 + 0x14) u>= 0x10)
                *esi_2 = *eax_5
                *eax_5 = 0
            else
                void* eax_6 = *(eax_5 + 0x10)
                
                if (eax_6 != 0xffffffff)
                    _memcpy(esi_2, eax_5, eax_6 + 1)
            
            esi_2[4] = *(eax_5 + 0x10)
            esi_2[5] = *(eax_5 + 0x14)
            *(eax_5 + 0x14) = 0xf
            *(eax_5 + 0x10) = 0
            *eax_5 = 0
        
        int32_t var_8
        
        if (var_8 u>= 0x10)
            j__free(var_1c)
        
        int32_t edx_3
        
        if (ebx_1 s>= 0)
            int32_t eax_11
            int32_t edx_2
            edx_2:eax_11 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0x14) - *(arg2 + 0x10))
            edx_3 = edx_2 s>> 3
        
        int32_t eax_16
        int32_t ebp_4
        
        if (ebx_1 s< 0 || ebx_1 s>= (edx_3 u>> 0x1f) + edx_3)
            ebp_4 = var_38
            eax_16 = 0xffffffff
        else
            ebp_4 = var_38
            eax_16 = *(*(arg2 + 0x10) + ebp_4 + 0x18)
        
        esi_2[6] = eax_16
        int32_t edx_5
        
        if (ebx_1 s>= 0)
            int32_t eax_17
            int32_t edx_4
            edx_4:eax_17 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0x14) - *(arg2 + 0x10))
            edx_5 = edx_4 s>> 3
        
        int32_t eax_22
        
        if (ebx_1 s< 0 || ebx_1 s>= (edx_5 u>> 0x1f) + edx_5)
            eax_22 = 0xffffffff
        else
            eax_22 = *(*(arg2 + 0x10) + ebp_4 + 0x1c)
        
        esi_2[7] = eax_22
        void* esi_3 = &esi_2[9]
        void* var_20_1 = esi_3
        sub_54b4f0(esi_3, *(arg1 + 0x2c))
        int32_t i = 0
        
        if (*(arg1 + 0x2c) s> 0)
            int32_t ecx_9 = 0
            int32_t var_2c_1 = 0
            
            do
                void* esi_5 = *esi_3 + ecx_9
                void* eax_24
                
                if (ebx_1 s< 0)
                label_54c770:
                    eax_24.b = 0
                    sub_69a5bc(eax_1 ^ &var_38)
                    return eax_24
                
                int32_t eax_25
                int32_t edx_6
                edx_6:eax_25 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0x14) - *(arg2 + 0x10))
                int32_t edx_7 = edx_6 s>> 3
                
                if (ebx_1 s>= (edx_7 u>> 0x1f) + edx_7)
                    goto label_54c770
                
                eax_24 = *(arg2 + 0x10) + var_38
                
                if (i s< 0 || i s>= (*(eax_24 + 0x24) - *(eax_24 + 0x20)) s>> 5)
                    goto label_54c770
                
                int32_t eax_29 = *(eax_24 + 0x20)
                i += 1
                *(esi_5 + 4) = *(eax_29 + var_2c_1 + 4)
                *(esi_5 + 0x14) = *(eax_29 + var_2c_1 + 0x14)
                ecx_9 = var_2c_1 + 0x20
                *(esi_5 + 0x1c) = *(eax_29 + var_2c_1 + 0x1c)
                esi_3 = var_20_1
                var_2c_1 = ecx_9
            while (i s< *(arg1 + 0x2c))
        
        ebx_1 += 1
        var_38 += 0x2c
        eax_4 = var_30_1 + 0x30
        var_30_1 = eax_4
        
        if (ebx_1 s>= ebp_2)
            break
        
        esi = var_24

eax_4.b = 1
sub_69a5bc(eax_1 ^ &var_38)
return eax_4
