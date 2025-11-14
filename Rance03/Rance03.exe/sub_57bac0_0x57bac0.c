// 函数: sub_57bac0
// 地址: 0x57bac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6c30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebp = 0
void* esi = *(arg2 + 0x20)
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x66666667, *(arg2 + 0x24) - esi)
int32_t edx_1 = edx s>> 4
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result s> 0)
    int32_t edi_1 = 0
    
    do
        int32_t var_3c_1 = 0xf
        int32_t var_40_1 = 0
        char var_50 = 0
        sub_401ff0(&var_50, esi + 4 + edi_1, 0, 0xffffffff)
        int32_t var_4 = 0
        int32_t eax_11 = *(arg2 + 0x20)
        int32_t ecx_3 = *(edi_1 + eax_11 + 0x20)
        int32_t esi_1 = *(edi_1 + eax_11 + 0x1c)
        int32_t eax_12 = *(edi_1 + eax_11 + 0x24)
        
        if (var_40_1 != 0)
            struct sealengine::CPolyTexture::VTable* const var_38 =
                &sealengine::CPolyTexture::`vftable'
            int32_t var_20_1 = 0xf
            int32_t var_24_1 = 0
            char var_34 = 0
            sub_401ff0(&var_34, &var_50, 0, 0xffffffff)
            int32_t var_18_1 = ecx_3
            int32_t var_1c_1 = esi_1
            int32_t var_14_1 = eax_12
            var_4.b = 1
            sub_57ee40(arg1, &var_38)
            var_38 = &sealengine::CPolyTexture::`vftable'
            
            if (var_20_1 u>= 0x10)
                j__free(var_34.d)
        
        int32_t var_4_1 = 0xffffffff
        
        if (var_3c_1 u>= 0x10)
            j__free(var_50.d)
        
        esi = *(arg2 + 0x20)
        ebp += 1
        edi_1 += 0x28
        int32_t eax_15
        int32_t edx_2
        edx_2:eax_15 = muls.dp.d(0x66666667, *(arg2 + 0x24) - esi)
        int32_t edx_3 = edx_2 s>> 4
        result = (edx_3 u>> 0x1f) + edx_3
    while (ebp s< result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
