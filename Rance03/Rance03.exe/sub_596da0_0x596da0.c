// 函数: sub_596da0
// 地址: 0x596da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8560
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_54 = ebx
sub_596fd0(arg1)
int32_t* result

if (arg2 != 0)
    int32_t edi_3 = (*(arg2 + 0x44) - *(arg2 + 0x40)) s/ 0x3c
    
    if (edi_3 s> 0)
        int32_t* result_1
        sub_42f420(&result_1, edi_3)
        int32_t esi_1 = 0
        int32_t var_4 = 0
        
        if (edi_3 s> 0)
            ebx = nullptr
            
            do
                if (esi_1 s< 0)
                    goto label_596f91
                
                if (esi_1 s>= (*(arg2 + 0x44) - *(arg2 + 0x40)) s/ 0x3c)
                    goto label_596f91
                
                int32_t eax_11 = *(*(arg2 + 0x40) + ebx + 0x18)
                
                if (eax_11 != 0xffffffff)
                    if (eax_11 s< 0)
                        goto label_596f91
                    
                    if (eax_11 s>= edi_3)
                        goto label_596f91
                
                ebx += 0x3c
                result_1[esi_1] = eax_11
                esi_1 += 1
            while (esi_1 s< edi_3)
            
            ebx = var_54
        
        char eax_12 = sub_52c5f0(ebx + 4, &result_1)
        char eax_15
        
        if (eax_12 != 0)
            sub_5987e0(ebx)
            int32_t var_2c_1 = 0xf
            int32_t var_30_1 = 0
            char var_40 = 0
            sub_402110(&var_40, ".bone", 5)
            var_4.b = 1
            char var_28
            char* eax_14 = sub_402f50(&var_40, arg2 + 0x70, &var_28, &var_40)
            
            if (ebx + 0x34 != eax_14)
                if (*(ebx + 0x48) u>= 0x10)
                    j__free(*(ebx + 0x34))
                
                *(ebx + 0x48) = 0xf
                *(ebx + 0x44) = 0
                *(ebx + 0x34) = 0
                sub_4030b0(ebx + 0x34, eax_14)
            
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28.d)
            
            var_4.b = 0
            int32_t var_14_1 = 0xf
            int32_t var_18_1 = 0
            var_28 = 0
            
            if (var_2c_1 u>= 0x10)
                j__free(var_40.d)
            
            eax_15 = sub_597d80(ebx, arg3)
        
        if (eax_12 == 0 || eax_15 == 0)
        label_596f91:
            ebx.b = 0
        else
            void* eax_16 = *(ebx + 8)
            int32_t ecx_12 = *(ebx + 0xc)
            
            if (eax_16 == ecx_12)
            label_596f81:
                *(ebx + 0x20) = 0
                ebx.b = 1
            else
                while (*(eax_16 + 0x50) == 0)
                    eax_16 += 0xac
                    
                    if (eax_16 == ecx_12)
                        goto label_596f81
                
                *(ebx + 0x20) = 1
                ebx.b = 1
        
        result = result_1
        
        if (result != 0)
            j__free(result)
        
        result.b = ebx.b
    else
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
