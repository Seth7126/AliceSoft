// 函数: sub_58e310
// 地址: 0x58e310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73dbe8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_60 = arg1
void** var_54 = arg3
sub_58ee40(&arg1[1])
*arg1 = 0
int32_t ebx_3 = (*(arg2 + 0x64) - *(arg2 + 0x60)) s>> 2

if ((arg1[3] - arg1[1]) s>> 2 u< ebx_3)
    if (ebx_3 u> 0x3fffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_58eee0(&arg1[1], ebx_3)

int32_t edi_1 = 0
void* result

if (ebx_3 s<= 0)
label_58e47b:
    *var_60 = arg4
    result.b = 1
else
    while (true)
        void** esi_1
        
        if (edi_1 s< 0 || edi_1 s>= (*(arg2 + 0x64) - *(arg2 + 0x60)) s>> 2)
            esi_1 = nullptr
        else
            esi_1 = *(*(arg2 + 0x60) + (edi_1 << 2))
        
        void** var_70 = esi_1
        
        if (esi_1 != 0)
            if (esi_1[9] == esi_1[0xa])
            label_58e46c:
                edi_1 += 1
                
                if (edi_1 s>= ebx_3)
                    goto label_58e47b
                
                continue
            else
                result.b = *(esi_1 + 0x21)
                char var_68_1 = result.b
                void** var_5c = nullptr
                int32_t var_90_1 = esi_1[7]
                int32_t var_58 = 0
                
                if (sub_58c680(&arg4[0x24], &var_5c, &var_58, esi_1[6], var_90_1, var_68_1) != 0)
                    int32_t var_6c = *(*(arg4 + 0x2c) + (edi_1 << 2))
                    int32_t eax_11
                    eax_11.b = arg4[0x5c]
                    char var_49 = eax_11.b
                    int32_t* var_8c_3 = &var_6c
                    int32_t var_8_1 = 2
                    struct sealengine::CDrawInstance::sealengine::CMesh::VTable** var_74
                    sub_58f010(&var_60[1], 
                        sub_58ef80(&var_5c, &var_54, &var_74, &var_5c, &var_58, arg4, &var_49, 
                            &var_70))
                    int32_t var_8_2 = 0xffffffff
                    struct sealengine::CDrawInstance::sealengine::CMesh::VTable** ecx_8 = var_74
                    
                    if (ecx_8 != 0)
                        (*ecx_8)->vFunc_7(1)
                    
                    goto label_58e46c
                
                if (esi_1[5] u>= 0x10)
                    esi_1 = *esi_1
                
                var_54 = esi_1
                void* var_1c_1 = 0xf
                int32_t var_20_1 = 0
                char var_30 = 0
                sub_403490(&var_30, 0x7684a0, 0x2a)
                int32_t var_8_3 = 0
                var_8_3.b = 1
                char var_48
                sub_5e01e0(sub_409240(&var_54, &var_30, &var_48, &var_54))
                int32_t var_34
                
                if (var_34 u>= 0x10)
                    sub_403160(var_48.d, var_34 + 1, 1)
                
                int32_t var_34_1 = 0xf
                int32_t var_38_1 = 0
                var_48 = 0
                
                if (var_1c_1 u>= 0x10)
                    sub_403160(var_30.d, var_1c_1 + 1, 1)
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
