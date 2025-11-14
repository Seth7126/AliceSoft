// 函数: sub_528db0
// 地址: 0x528db0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result_1
int32_t eax_1 = __security_cookie ^ &result_1
void* edi = arg2
void* var_24 = edi
int32_t result_2 = 0
result_1 = 0
int32_t esi_4 = (*(edi + 8) - *(edi + 4)) s/ 0x38
int32_t eax_3
int32_t edx_3
edx_3:eax_3 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x14) - *(arg1 + 0x10))
int32_t edx_4 = edx_3 s>> 2
int32_t result

if ((edx_4 u>> 0x1f) + edx_4 != esi_4 || (*(arg1 + 0x20) - *(arg1 + 0x1c)) s>> 2 != esi_4)
label_528e0e:
    result.b = 0
    sub_69a5bc(eax_1 ^ &result_1)
    return result

int32_t esi_5 = 0

if (esi_4 s> 0)
    int32_t ebp_1 = 0
    int32_t var_2c_1 = 0
    
    do
        int32_t var_1c
        char* edx_5 = sub_5272a0(edi, &var_1c, esi_5)
        result_1 = result_2 | 1
        void* ebx_1 = *(edx_5 + 0x10)
        int32_t* ecx_6 = *(arg1 + 0x10) + var_2c_1
        
        if (*(edx_5 + 0x14) u>= 0x10)
            edx_5 = *edx_5
        
        void* edi_1 = ecx_6[4]
        
        if (ecx_6[5] u>= 0x10)
            ecx_6 = *ecx_6
        
        void* eax_10 = ebx_1
        
        if (edi_1 u< ebx_1)
            eax_10 = edi_1
        
        if (sub_405190(eax_10, edx_5, ecx_6, eax_10) != 0 || edi_1 u< ebx_1)
            ebx_1.b = 1
        else
            int32_t eax_11
            eax_11.b = edi_1 != ebx_1
            
            if (eax_11 != 0)
                ebx_1.b = 1
            else
                int32_t edx_8
                
                if (esi_5 s>= 0)
                    int32_t ecx_8 = *(var_24 + 8) - *(var_24 + 4)
                    int32_t eax_12
                    int32_t edx_6
                    edx_6:eax_12 = muls.dp.d(0x92492493, ecx_8)
                    edx_8 = (edx_6 + ecx_8) s>> 5
                
                int32_t ecx_9
                
                if (esi_5 s< 0 || esi_5 s>= (edx_8 u>> 0x1f) + edx_8)
                    ecx_9 = 0xffffffff
                else
                    ecx_9 = *(*(var_24 + 4) + ebp_1 + 0x18)
                
                if (*(*(arg1 + 0x1c) + (esi_5 << 2)) != ecx_9)
                    ebx_1.b = 1
                else
                    ebx_1.b = 0
        
        result = result_1
        
        if ((result.b & 1) != 0)
            result_1 = result & 0xfffffffe
            int32_t var_8
            
            if (var_8 u>= 0x10)
                j__free(var_1c)
        
        if (ebx_1.b != 0)
            goto label_528e0e
        
        var_2c_1 += 0x18
        esi_5 += 1
        result_2 = result_1
        ebp_1 += 0x38
        edi = var_24
    while (esi_5 s< esi_4)

result.b = 1
sub_69a5bc(eax_1 ^ &result_1)
return result
