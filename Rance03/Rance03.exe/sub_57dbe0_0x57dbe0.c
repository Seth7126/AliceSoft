// 函数: sub_57dbe0
// 地址: 0x57dbe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6e27
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CPolyMaterial::VTable** var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg3
int32_t* edx = arg4
int32_t ebp = 0
var_64 = nullptr
struct sealengine::CPolyMaterial::VTable** var_58 = nullptr
int32_t* var_30 = ecx
int32_t* var_38 = edx
int32_t var_54 = 0
int32_t* esi = arg2[3]
int32_t* result

if (esi == arg2[4])
label_57dec7:
    result.b = 1
else
    int32_t var_44
    int32_t ebx_1 = var_44
    int32_t* var_48
    int32_t* var_5c_1 = var_48
    
    while (true)
        void* edi_1 = *esi
        result = sub_52e5b0(edi_1, ecx, edx, eax_4)
        
        if (result != 0)
            int32_t var_7c_2 = (*(edi_1 + 0x20) - *(edi_1 + 0x1c)) s>> 2
            int32_t var_80_2 = ebp
            void* var_2c
            sub_4691f0(&var_2c, "Combine(%d) Numof(%d)")
            int32_t var_4 = 0
            struct sealengine::CPolyMaterial::VTable** ebp_3 = *(arg1 + 0x3c) + var_54
            struct sealengine::CPolyMaterial::VTable** eax_6 = sub_69adc6(0x54)
            struct sealengine::CPolyMaterial::VTable** var_60 = eax_6
            int32_t* edi_2
            
            if (eax_6 == 0)
                edi_2 = var_5c_1
                var_64 = nullptr
            else
                edi_2 = nullptr
                ebx_1 = 0
                var_5c_1 = nullptr
                var_48 = nullptr
                int32_t var_44_1 = 0
                int32_t var_40_1 = 0
                var_4.b = 2
                struct sealengine::CPolyMaterial::VTable** ecx_6 = var_58 | 1
                var_58 = ecx_6
                var_64 = ecx_6
                var_64 = sub_5812d0(eax_6, &var_2c, 0, &var_48)
            
            int32_t var_4_1 = 0
            
            if ((var_58.b & 1) != 0)
                var_58 &= 0xfffffffe
                
                if (edi_2 != 0)
                    int32_t* eax_10 = var_5c_1
                    
                    if (eax_10 != ebx_1)
                        do
                            (**edi_2)(0)
                            edi_2 = &edi_2[0xa]
                        while (edi_2 != ebx_1)
                        
                        eax_10 = var_5c_1
                    
                    j__free(eax_10)
                    var_5c_1 = nullptr
                    ebx_1 = 0
                    int32_t var_40_2 = 0
            
            struct sealengine::CPolyMaterial::VTable** eax_12 = sub_69adc6(0x40)
            var_60 = eax_12
            var_4_1.b = 4
            struct sealengine::CGameTexture::VTable** edi_3
            
            if (eax_12 == 0)
                edi_3 = nullptr
            else
                edi_3 = sub_53a200(eax_12, 0)
            
            var_4_1.b = 0
            int32_t* ecx_10 = edi_3[5]
            
            if (ecx_10 != 0)
                (*(*ecx_10 + 4))()
                edi_3[5] = 0
            
            int32_t* ecx_11 = edi_3[4]
            
            if (ecx_11 != 0)
                (*(*ecx_11 + 4))()
                edi_3[4] = 0
            
            edi_3[4] = result
            (**result)()
            int32_t var_18
            
            if (sub_53a7b0(edi_3, edi_3[4]) == 0)
                (*edi_3)->vFunc_0(1)
                struct sealengine::CPolyMaterial::VTable** ecx_24 = var_64
                
                if (ecx_24 != 0)
                    (*ecx_24)->vFunc_0(1)
                
                (*(*result + 4))()
                
                if (var_18 u>= 0x10)
                    j__free(var_2c)
            else
                if (&edi_3[6] != &var_2c)
                    sub_401ff0(&edi_3[6], &var_2c, 0, 0xffffffff)
                
                sub_53ada0(edi_3)
                struct sealengine::CPolyMaterial::VTable** ecx_16 = var_64
                var_60 = edi_3
                sub_412de0(&ecx_16[0xc], &var_60)
                var_60 = ebp_3
                void** ecx_18 = *(arg1 + 0x34)
                void** edi_4 = ecx_18
                void** edx_1 = ecx_18[1]
                
                while (*(edx_1 + 0xd) == 0)
                    if (edx_1[4] s>= ebp_3)
                        edi_4 = edx_1
                        edx_1 = *edx_1
                    else
                        edx_1 = edx_1[2]
                
                void** eax_20
                
                if (edi_4 == ecx_18 || ebp_3 s< edi_4[4])
                    void** var_34 = ecx_18
                    eax_20 = &var_34
                else
                    void** var_3c = edi_4
                    eax_20 = &var_3c
                
                if (*eax_20 == ecx_18)
                    void* eax_21 = sub_42f350(arg1 + 0x34, &var_60)
                    *eax_21 = var_64
                
                (*(*result + 4))()
                ebp = var_54 + 1
                int32_t var_4_2 = 0xffffffff
                var_54 = ebp
                
                if (var_18 u>= 0x10)
                    j__free(var_2c)
                
                esi = &esi[1]
                
                if (esi == arg2[4])
                    goto label_57dec7
                
                ecx = var_30
                edx = var_38
                continue
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
