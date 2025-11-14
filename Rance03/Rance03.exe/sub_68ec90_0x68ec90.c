// 函数: sub_68ec90
// 地址: 0x68ec90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d17a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg2
var_58 = esi

if (arg1 != esi)
    for (void* i = arg1 + 0x44; i != esi; i += 0x44)
        void* i_1 = i
        struct dpsound::CSoundData::VTable* var_54
        sub_68a6e0(&var_54, i)
        int32_t var_4 = 0
        int32_t var_4c
        int32_t ecx_2 = var_4c
        void* var_48
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        char var_50
        int32_t var_30
        char var_20
        int32_t var_1c
        int32_t var_18
        int32_t var_14
        
        if (ecx_2 s>= *(arg1 + 8))
            void* esi_1 = i + 8
            struct dpsound::CSoundData::VTable** eax_5
            
            while (true)
                bool cond:0_1 = ecx_2 s>= *(esi_1 - 0x44)
                esi_1 -= 0x44
                
                if (cond:0_1)
                    break
                
                eax_5.b = *(esi_1 - 4)
                *(i_1 + 4) = eax_5.b
                *(i_1 + 8) = *esi_1
                
                if (i_1 + 0xc != esi_1 + 4)
                    sub_401ff0(i_1 + 0xc, esi_1 + 4, 0, 0xffffffff)
                
                *(i_1 + 0x24) = *(esi_1 + 0x1c)
                sub_4a6db0(i_1 + 0x28, esi_1 + 0x20)
                ecx_2 = var_4c
                *(i_1 + 0x34) = *(esi_1 + 0x2c)
                *(i_1 + 0x38) = *(esi_1 + 0x30)
                *(i_1 + 0x3c) = *(esi_1 + 0x34)
                *(i_1 + 0x40) = *(esi_1 + 0x38)
                i_1 = esi_1 - 8
            
            eax_5.b = var_50
            *(i_1 + 4) = eax_5.b
            *(i_1 + 8) = ecx_2
            
            if (i_1 + 0xc != &var_48)
                sub_401ff0(i_1 + 0xc, &var_48, 0, 0xffffffff)
            
            *(i_1 + 0x24) = var_30
            sub_4a6db0(i_1 + 0x28, &result_1)
            esi = var_58
            *(i_1 + 0x34) = var_20
            *(i_1 + 0x3c) = var_18
            *(i_1 + 0x38) = var_1c
            *(i_1 + 0x40) = var_14
        else
            int32_t var_70_2 = var_58
            sub_6937f0(i + 0x44, i, arg1, i + 0x44)
            *(arg1 + 4) = var_50
            *(arg1 + 8) = var_4c
            
            if (arg1 + 0xc != &var_48)
                sub_401ff0(arg1 + 0xc, &var_48, 0, 0xffffffff)
            
            *(arg1 + 0x24) = var_30
            sub_4a6db0(arg1 + 0x28, &result_1)
            *(arg1 + 0x34) = var_20
            *(arg1 + 0x3c) = var_18
            *(arg1 + 0x38) = var_1c
            *(arg1 + 0x40) = var_14
        int32_t var_4_1 = 0xffffffff
        result = result_1
        var_54 = &dpsound::CSoundData::`vftable'
        struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
        
        if (result != 0)
            result = j__free(result)
            result_1 = nullptr
            int32_t var_28_1 = 0
            int32_t var_24_1 = 0
        
        int32_t var_34
        
        if (var_34 u>= 0x10)
            result = j__free(var_48)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
