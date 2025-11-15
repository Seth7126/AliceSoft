// 函数: sub_40cfc0
// 地址: 0x40cfc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result_1
int32_t eax_1 = __security_cookie ^ &result_1
void* esi = arg1
int32_t result_2 = 0
void* var_20 = esi
result_1 = 0

if ((*(**(esi + 4) + 0x1c))() s> 0)
    int32_t eax_10
    
    do
        void* var_1c
        char* ecx_2 = sub_40cf70(esi, &var_1c, result_2)
        int32_t* edx_1
        
        if (arg2[5] u< 0x10)
            edx_1 = arg2
        else
            edx_1 = *arg2
        
        if (*(ecx_2 + 0x14) u>= 0x10)
            ecx_2 = *ecx_2
        
        int32_t edi_1 = arg2[4]
        int32_t eax_5 = edi_1
        int32_t ebx_1 = ecx_2[0x10].d
        
        if (ebx_1 u< edi_1)
            eax_5 = ebx_1
        
        int32_t esi_1 = sub_406ac0(eax_5, edx_1, ecx_2, eax_5)
        
        if (esi_1 == 0)
            bool c_1 = edi_1 u< ebx_1
            
            if (edi_1 == ebx_1 || c_1)
                esi_1 = neg.d(sbb.d(esi_1, esi_1, c_1))
            else
                esi_1 = 0xffffffff
        
        int32_t var_8
        
        if (var_8 u>= 0x10)
            sub_403160(var_1c, var_8 + 1, 1)
        
        if (esi_1 == 0)
            int32_t result = result_1
            @__security_check_cookie@4(eax_1 ^ &result_1)
            return result
        
        esi = var_20
        result_2 = result_1 + 1
        result_1 = result_2
        eax_10 = (*(**(esi + 4) + 0x1c))()
    while (result_2 s< eax_10)

@__security_check_cookie@4(eax_1 ^ &result_1)
return 0xffffffff
