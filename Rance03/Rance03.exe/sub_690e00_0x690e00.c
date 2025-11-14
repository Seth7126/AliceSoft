// 函数: sub_690e00
// 地址: 0x690e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2
int32_t result_1 = result

if (arg1 != result)
    void* ebp_1 = arg1 + 0x44
    
    if (ebp_1 != result)
        void* esi_1 = ebp_1 - 0x38
        var_60 = esi_1
        
        do
            void* edi_1 = ebp_1
            struct dpsound::CSoundData::VTable* var_54
            sub_68a6e0(&var_54, ebp_1)
            int32_t var_4 = 0
            void* var_48
            int32_t result_2
            float i
            char var_50
            int32_t var_4c
            int32_t var_30
            char var_20
            int32_t var_18
            int32_t var_14
            
            if (*(arg1 + 0x38) f<= i)
                void* var_58_1 = esi_1 - 0xc
                void* eax_12
                
                if (not(*(esi_1 + 0x2c) <= i))
                    do
                        eax_12.b = *(esi_1 - 8)
                        *(edi_1 + 4) = eax_12.b
                        *(edi_1 + 8) = *(esi_1 - 4)
                        
                        if (edi_1 + 0xc != esi_1)
                            sub_401ff0(edi_1 + 0xc, esi_1, 0, 0xffffffff)
                        
                        *(edi_1 + 0x24) = *(esi_1 + 0x18)
                        sub_4a6db0(edi_1 + 0x28, esi_1 + 0x1c)
                        *(edi_1 + 0x34) = *(esi_1 + 0x28)
                        *(edi_1 + 0x38) = *(esi_1 + 0x2c)
                        *(edi_1 + 0x3c) = *(esi_1 + 0x30)
                        eax_12 = *(esi_1 + 0x34)
                        esi_1 -= 0x44
                        *(edi_1 + 0x40) = eax_12
                        edi_1 = var_58_1
                        var_58_1 -= 0x44
                    while (*(esi_1 + 0x2c) f> i)
                    
                    esi_1 = var_60
                
                eax_12.b = var_50
                *(edi_1 + 4) = eax_12.b
                *(edi_1 + 8) = var_4c
                
                if (edi_1 + 0xc != &var_48)
                    sub_401ff0(edi_1 + 0xc, &var_48, 0, 0xffffffff)
                
                *(edi_1 + 0x24) = var_30
                sub_4a6db0(edi_1 + 0x28, &result_2)
                *(edi_1 + 0x34) = var_20
                *(edi_1 + 0x3c) = var_18
                *(edi_1 + 0x38) = i
                *(edi_1 + 0x40) = var_14
            else
                int32_t result_4 = result_1
                sub_6937f0(esi_1 + 0x7c, ebp_1, arg1, esi_1 + 0x7c)
                *(arg1 + 4) = var_50
                *(arg1 + 8) = var_4c
                
                if (arg1 + 0xc != &var_48)
                    sub_401ff0(arg1 + 0xc, &var_48, 0, 0xffffffff)
                
                *(arg1 + 0x24) = var_30
                sub_4a6db0(arg1 + 0x28, &result_2)
                *(arg1 + 0x34) = var_20
                *(arg1 + 0x3c) = var_18
                *(arg1 + 0x38) = i
                *(arg1 + 0x40) = var_14
            int32_t var_4_1 = 0xffffffff
            result = result_2
            var_54 = &dpsound::CSoundData::`vftable'
            int32_t result_3 = result
            
            if (result != 0)
                result = j__free(result)
                result_2 = 0
                int32_t var_28_1 = 0
                int32_t var_24_1 = 0
            
            int32_t var_34
            
            if (var_34 u>= 0x10)
                result = j__free(var_48)
            
            ebp_1 += 0x44
            esi_1 += 0x44
            var_60 = esi_1
        while (ebp_1 != result_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
