// 函数: sub_41f2a0
// 地址: 0x41f2a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4801
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t var_a4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_80 = 0
LRESULT var_88 = SendMessageA(arg2, 0x110a, 9, 0)
int32_t* result_1
sub_420040(arg1 + 8, &result_1, &var_88)
int32_t* result = result_1

if (result != *(arg1 + 8))
    int32_t* result_2 = result[5]
    result_1 = result_2
    char var_7c
    int32_t var_68
    char var_4c
    char* eax_8
    int32_t ebx_1
    
    if (*result_2 != 5)
        eax_8 = sub_402b00(&var_4c, &result_2[7])
        ebx_1 = 2
    else
        var_68 = 0xf
        int32_t var_6c_1 = 0
        var_7c = 0
        sub_401ff0(&var_7c, &result_2[7], 0, 0xffffffff)
        eax_8 = &var_7c
        ebx_1 = 1
    
    int32_t* var_64
    sub_403000(&var_64, eax_8)
    int32_t var_c_1 = 1
    
    if ((ebx_1.b & 2) != 0)
        ebx_1 &= 0xfffffffd
        int32_t var_38
        
        if (var_38 u>= 0x10)
            j__free(var_4c.d)
        
        int32_t var_38_1 = 0xf
        int32_t var_3c_1 = 0
        var_4c = 0
    
    var_c_1.b = 2
    
    if ((ebx_1.b & 1) != 0)
        if (var_68 u>= 0x10)
            j__free(var_7c.d)
        
        int32_t var_68_1 = 0xf
        int32_t var_6c_2 = 0
        var_7c = 0
    
    int32_t ebx_2 = 0
    int32_t eax_9
    int32_t edx_2
    edx_2:eax_9 = muls.dp.d(0x2aaaaaab, data_75d5c8 - data_75d5c4)
    int32_t edx_3 = edx_2 s>> 2
    int32_t var_50
    
    if ((edx_3 u>> 0x1f) + edx_3 s<= 0)
    label_41f4ae:
        ebx_2.b = 0
    else
        while (true)
            int32_t* edx_5 = &var_64
            int32_t var_34
            char* ecx_7 = sub_420a40(&var_34, ebx_2)
            
            if (var_50 u>= 0x10)
                edx_5 = var_64
            
            int32_t edi_1 = *(ecx_7 + 0x10)
            
            if (*(ecx_7 + 0x14) u>= 0x10)
                ecx_7 = *ecx_7
            
            int32_t var_54
            int32_t eax_13 = var_54
            
            if (edi_1 u< var_54)
                eax_13 = edi_1
            
            int32_t eax_14 = sub_405190(eax_13, edx_5, ecx_7, eax_13)
            bool cond:3_1 = eax_14 == 0
            
            if (eax_14 == 0)
                if (edi_1 u>= var_54)
                    eax_14.b = edi_1 != var_54
                else
                    eax_14 = 0xffffffff
                
                cond:3_1 = eax_14 == 0
            
            eax_14.b = cond:3_1
            char var_8d_1 = eax_14.b
            int32_t var_20
            
            if (var_20 u>= 0x10)
                j__free(var_34)
                eax_14.b = var_8d_1
            
            if (eax_14.b != 0)
                int32_t edi_3 = result_1[0xd]
                void* esi_3 = *(arg1 + 0xc4)
                data_75d4a8 = edi_3
                bool cond:5_1 = *(esi_3 + 0xc) == 0
                *(esi_3 + 0x9c) = edi_3 - 1
                result = data_75d4b0
                *(esi_3 + 0x98) = ebx_2
                data_75d4b0 = ebx_2
                
                if (not(cond:5_1))
                    if (result != ebx_2)
                        sub_417c00(esi_3)
                    
                    sub_417c60(esi_3, edi_3)
                    InvalidateRect(*(esi_3 + 0xc), nullptr, 1)
                    UpdateWindow(*(esi_3 + 0xc))
                
                ebx_2.b = 1
                break
            
            ebx_2 += 1
            int32_t eax_15
            int32_t edx_6
            edx_6:eax_15 = muls.dp.d(0x2aaaaaab, data_75d5c8 - data_75d5c4)
            int32_t edx_7 = edx_6 s>> 2
            
            if (ebx_2 s>= (edx_7 u>> 0x1f) + edx_7)
                goto label_41f4ae
    
    if (var_50 u>= 0x10)
        j__free(var_64)
    
    result.b = ebx_2.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
