// 函数: sub_57bc50
// 地址: 0x57bc50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6c73
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t arg_4
int32_t ebx = arg_4
sub_57bac0(&var_18, ebx)
struct sealengine::CPolyMaterial::VTable** eax_3 = sub_69adc6(0x54)
struct sealengine::CPolyMaterial::VTable** var_1c = eax_3
var_4.b = 1
struct sealengine::CPolyMaterial::VTable** result

if (eax_3 == 0)
    result = nullptr
else
    arg_4.b = *(ebx + 0x1c)
    result = sub_5812d0(eax_3, ebx + 4, arg_4.b, &var_18)

var_4.b = 0
int32_t esi = 0
int32_t ebp_2 = (*(ebx + 0x30) - *(ebx + 0x2c)) s>> 2

if (ebp_2 s> 0)
    while (true)
        if (esi s>= 0 && esi s< (*(ebx + 0x30) - *(ebx + 0x2c)) s>> 2)
            int32_t eax_10 = *(*(ebx + 0x2c) + (esi << 2))
            
            if (eax_10 != 0)
                int32_t eax_11 = sub_57bc50(eax_10)
                
                if (eax_11 != 0)
                    arg_4 = eax_11
                    sub_412de0(&result[0x12], &arg_4)
                    esi += 1
                    
                    if (esi s>= ebp_2)
                        break
                    
                    continue
        
        if (result != 0)
            (*result)->vFunc_0(1)
        
        result = nullptr
        break

int32_t var_4_1 = 0xffffffff
struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = var_18

if (ebx_1 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = ebx_1
    
    if (ebx_1 != var_14)
        do
            (*esi_1)->Next(0)
            esi_1 = &esi_1[0xa]
        while (esi_1 != var_14)
    
    j__free(ebx_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
