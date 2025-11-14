// 函数: sub_5dd710
// 地址: 0x5dd710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_4107c0(*(arg1 + 4), *(arg1 + 8))
void* ebx = arg1 + 0x10
*(arg1 + 8) = *(arg1 + 4)
void* var_18 = ebx
sub_418220(*(*ebx + 4))
void* eax_2 = *ebx
int32_t* esi_1 = arg2
*(eax_2 + 4) = eax_2
int32_t* eax_3 = *ebx
*eax_3 = eax_3
void* eax_4 = *ebx
*(eax_4 + 8) = eax_4
*(ebx + 4) = 0
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x38e38e39, esi_1[1] - *esi_1)
int32_t edx_1 = edx s>> 4
int32_t ebp_2 = (edx_1 u>> 0x1f) + edx_1
void** result = sub_410480(arg1 + 4, ebp_2)
int32_t var_14 = 0

if (ebp_2 s> 0)
    void** ebp_3 = nullptr
    int32_t ecx_4 = 0
    void** var_1c = nullptr
    int32_t var_10_1 = 0
    int32_t edx_4
    
    do
        void** edi_2 = *esi_1 + ecx_4 + 8
        char* ecx_7 = *(arg1 + 4) + ebp_3
        
        if (ecx_7 != edi_2)
            sub_401ff0(ecx_7, edi_2, 0, 0xffffffff)
        
        void** eax_7
        int32_t* ecx_9
        eax_7, ecx_9 = sub_417ed0(ebx, edi_2)
        void** esi_2 = eax_7
        
        if (esi_2 == *ebx)
            goto label_5dd81b
        
        int32_t* edx_2 = &esi_2[4]
        int32_t ebp_4 = edx_2[4]
        
        if (esi_2[9] u>= 0x10)
            edx_2 = *edx_2
        
        int32_t ebx_1 = edi_2[4]
        int32_t* ecx_10
        
        if (edi_2[5] u< 0x10)
            ecx_10 = edi_2
        else
            ecx_10 = *edi_2
        
        int32_t eax_8 = ebp_4
        
        if (ebx_1 u< ebp_4)
            eax_8 = ebx_1
        
        result, ecx_9 = sub_405190(eax_8, edx_2, ecx_10, eax_8)
        bool cond:2_1 = result s>= 0
        
        if (result != 0)
            goto label_5dd807
        
        if (ebx_1 u< ebp_4)
            ebx = var_18
            ebp_3 = var_1c
        label_5dd81b:
            int32_t* var_30_5 = ecx_9
            var_1c = edi_2
            void*** var_34_1 = &var_1c
            int32_t* eax_9 = sub_427ff0(ecx_9)
            void** var_8
            result = sub_4280a0(ebx, &var_8, esi_2, &eax_9[4], eax_9)
            esi_2 = var_8
        else
            result.b = ebx_1 != ebp_4
            cond:2_1 = result s>= 0
        label_5dd807:
            ebx = var_18
            ebp_3 = var_1c
            
            if (not(cond:2_1))
                goto label_5dd81b
        
        ebp_3 = &ebp_3[6]
        esi_2[0xa] = var_14
        ecx_4 = var_10_1 + 0x48
        esi_1 = arg2
        edx_4 = var_14 + 1
        var_14 = edx_4
        var_10_1 = ecx_4
        var_1c = ebp_3
    while (edx_4 s< ebp_2)

return result
