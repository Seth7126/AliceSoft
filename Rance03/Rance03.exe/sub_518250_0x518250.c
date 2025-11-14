// 函数: sub_518250
// 地址: 0x518250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c26a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = arg1
void* result_1 = result
void** i = *(result + 0xa8)
int32_t edi = 0
void** i_1 = i
int32_t var_48 = 0

while (i != *(result + 0xac))
    void* ebp_1 = *i
    bool cond:0_1 = *(ebp_1 + 0x18) u< 0x10
    int32_t esi_1 = *(ebp_1 + 0x14)
    int32_t var_4c = esi_1
    void* edx_1
    
    if (cond:0_1)
        edx_1 = ebp_1 + 4
    else
        edx_1 = *(ebp_1 + 4)
    
    int32_t ecx = 1
    
    if (esi_1 u< 1)
        ecx = esi_1
    
    if (ecx == 0)
        goto label_518327
    
    wchar32 const* const esi_2 = &(*U"\n\n\n\n\n\n")[1]
    int32_t j_2 = ecx - 4
    
    if (ecx u>= 4)
        int32_t j
        
        do
            if (*edx_1 != *esi_2)
                goto label_5182e6
            
            edx_1 += 4
            esi_2 = &esi_2[1]
            j = j_2
            j_2 -= 4
        while (j u>= 4)
    
    int32_t eax_4
    
    if (j_2 == 0xfffffffc)
        eax_4 = 0
    else
    label_5182e6:
        result.b = *edx_1
        char temp1_1 = *esi_2
        
        if (result.b != temp1_1)
            eax_4 = sbb.d(result, result, result.b u< temp1_1) | 1
        else if (j_2 == 0xfffffffd)
            eax_4 = 0
        else
            result.b = *(edx_1 + 1)
            char temp4_1 = *(esi_2 + 1)
            
            if (result.b != temp4_1)
                eax_4 = sbb.d(result, result, result.b u< temp4_1) | 1
            else if (j_2 == 0xfffffffe)
                eax_4 = 0
            else
                result.b = *(edx_1 + 2)
                char temp5_1 = *(esi_2 + 2)
                
                if (result.b != temp5_1)
                    eax_4 = sbb.d(result, result, result.b u< temp5_1) | 1
                else if (j_2 == 0xffffffff)
                    eax_4 = 0
                else
                    result.b = *(edx_1 + 3)
                    char temp6_1 = *(esi_2 + 3)
                    
                    if (result.b == temp6_1)
                        eax_4 = 0
                    else
                        eax_4 = sbb.d(result, result, result.b u< temp6_1) | 1
    
    bool cond:1_1 = eax_4 == 0
    
    if (eax_4 == 0)
        esi_1 = var_4c
    label_518327:
        
        if (esi_1 u>= 1)
            eax_4.b = esi_1 != 1
        else
            eax_4 = 0xffffffff
        
        cond:1_1 = eax_4 == 0
    
    eax_4.b = cond:1_1
    
    if (eax_4.b == 0)
        sub_516200(ebp_1)
        int32_t esi_3 = sub_516250(ebp_1 + 4) + edi
        var_4c = esi_3
        void* j_1 = *(result_1 + 0x88)
        
        if (j_1 != *(result_1 + 0x8c))
            int32_t ebx = var_48
            
            do
                int32_t ecx_2 = *(j_1 + 4)
                void* eax_7
                
                if (ecx_2 s> ebx || ebx s> *(j_1 + 0xc))
                    eax_7:1.b = 0
                else
                    eax_7:1.b = 1
                
                char edx_2
                
                if (ecx_2 s> esi_3 || esi_3 s> *(j_1 + 0xc))
                    edx_2 = 0
                else
                    edx_2 = 1
                
                if (ebx s> ecx_2 || *(j_1 + 0xc) s> esi_3)
                    eax_7.b = 0
                else
                    eax_7.b = 1
                
                if (eax_7:1.b != 0 || edx_2 != 0 || eax_7.b != 0)
                    int32_t* k = *(ebp_1 + 0xd4)
                    int32_t var_3c = ecx_2
                    int32_t* eax_8 = &var_48
                    
                    if (ecx_2 s>= ebx)
                        eax_8 = &var_3c
                    
                    int32_t* ecx_3 = &var_4c
                    int32_t edx_4 = *eax_8 - ebx
                    int32_t eax_10 = *(j_1 + 0xc) + 1
                    bool cond:3_1 = var_4c s>= eax_10
                    var_3c = eax_10
                    
                    if (cond:3_1)
                        ecx_3 = &var_3c
                    
                    int32_t eax_11 = *(j_1 + 0x18)
                    int32_t eax_12 = *(j_1 + 0x14)
                    int32_t eax_13 = *(j_1 + 0x10)
                    int32_t ecx_6 = *ecx_3 - ebx - edx_4
                    var_3c = ecx_6
                    
                    if (k != *(ebp_1 + 0xd8))
                        do
                            int32_t* ecx_7 = *k
                            
                            if (ecx_7 != 0)
                                (**ecx_7)(1)
                            
                            k = &k[1]
                        while (k != *(ebp_1 + 0xd8))
                        
                        ecx_6 = var_3c
                    
                    *(ebp_1 + 0xd8) = *(ebp_1 + 0xd4)
                    struct partsengine::CTextHighlightModel::VTable* const var_28 =
                        &partsengine::CTextHighlightModel::`vftable'
                    int32_t var_1c_1 = ecx_6 - 1 + edx_4
                    int32_t var_18_1 = eax_13
                    int32_t var_14_1 = eax_12
                    int32_t var_24_1 = edx_4
                    int32_t var_20_1 = ecx_6
                    int32_t var_10_1 = eax_11
                    int32_t var_4 = 0
                    sub_5178c0(ebp_1 + 0xc8, &var_28)
                    int32_t var_4_1 = 0xffffffff
                    esi_3 = var_4c
                
                j_1 += 0x1c
            while (j_1 != *(result_1 + 0x8c))
            
            i = i_1
        
        edi = esi_3
        var_48 = edi
    
    result = result_1
    i = &i[1]
    i_1 = i

fsbase->NtTib.ExceptionList = ExceptionList
return result
