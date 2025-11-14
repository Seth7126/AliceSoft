// 函数: sub_649f60
// 地址: 0x649f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ce743
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct encodecg::CBMPInfo::VTable* var_4c
struct encodecg::CBMPInfo::VTable** ecx = &var_4c
sub_64a9f0(ecx)
int32_t var_c_1 = 0
struct IMemory::common::CIMemory::VTable** result

if (sub_64aad0(ecx, arg1) == 0)
    result = nullptr
else
    uint32_t ebx_1 = (*(*arg1 + 0x10))(eax_2)
    int32_t esi_1 = (*(*arg1 + 0x14))()
    uint32_t var_34
    
    if (ebx_1 s> var_34)
        ebx_1 = var_34
    
    if (ebx_1 s<= 0)
        result = nullptr
    else
        int32_t var_30
        
        if (esi_1 s> var_30)
            esi_1 = var_30
        
        if (esi_1 s<= 0)
            result = nullptr
        else
            uint32_t eax_8 = ebx_1 & 1
            int32_t ecx_4 = esi_1 & 1
            uint32_t edx_2 = eax_8 + ebx_1
            int32_t eax_9 = ecx_4 + esi_1
            uint32_t eax_10 = eax_9 * edx_2
            int16_t* var_64
            int32_t ecx_6 = sub_448e90(&var_64, (eax_10 << 4) + 0x444)
            var_c_1.b = 1
            int16_t* edi_1 = var_64
            void* var_8c = nullptr
            char var_20
            
            if (var_20 == 0)
                goto label_64a11a
            
            int32_t var_2c
            
            if (var_2c == 0x18 || var_2c == 0x20)
                uint32_t eax_15 = eax_10 * 3
                uint32_t var_88 = eax_15
                void var_58
                sub_448e90(&var_58, eax_15)
                var_c_1.b = 2
                
                if (sub_64a310(&var_58, &var_4c, 0, 0, ebx_1, esi_1, eax_8, ecx_4) == 0)
                    sub_403510(&var_58)
                    result = nullptr
                else
                    int32_t var_70
                    sub_448e90(&var_70, var_88)
                    var_c_1.b = 3
                    sub_64a550(&var_70, &var_58, edx_2, eax_9)
                    int32_t ecx_9 = var_70
                    int32_t var_60
                    void* eax_18 = var_60 - edi_1
                    edi_1 = var_64
                    int32_t* ecx_10 = &var_70
                    int32_t var_6c
                    
                    if (sub_64a270(&edi_1[0x22], eax_18 - 0x44, ecx_9, var_6c - ecx_9, &var_8c)
                            != 0)
                        sub_403510(ecx_10)
                        var_c_1.b = 1
                        ecx_6 = sub_403510(&var_58)
                    label_64a11a:
                        uint32_t eax_28 = 0
                        var_88 = 0
                        char var_1f
                        
                        if (var_1f == 0)
                            goto label_64a1ad
                        
                        sub_448e90(&var_70, eax_10)
                        var_c_1.b = 4
                        char eax_22 = sub_64a6b0(&var_70, &var_4c, 0, 0, ebx_1, esi_1, eax_8, ecx_4)
                        char eax_27
                        
                        if (eax_22 != 0)
                            int32_t eax_23 = var_70
                            void* edx_6 = var_60 - edi_1
                            edi_1 = var_64
                            void* eax_24 = var_8c
                            eax_27 = sub_64a270(eax_24 + 0x44 + edi_1, edx_6 - eax_24 - 0x44, 
                                eax_23, var_6c - eax_23, &var_88)
                        
                        if (eax_22 == 0 || eax_27 == 0)
                            sub_403510(&var_70)
                            result = nullptr
                        else
                            var_c_1.b = 1
                            ecx_6 = sub_403510(&var_70)
                            eax_28 = var_88
                        label_64a1ad:
                            int32_t var_a0_10 = ecx_6
                            sub_64a8f0(edi_1, 0, 0, ebx_1, esi_1, var_8c, eax_28)
                            void* ebx_4 = var_8c + 0x44 + var_88
                            struct IMemory::common::CIMemory::VTable** eax_29 = sub_69adc6(0x20)
                            struct IMemory::common::CIMemory::VTable** var_74_2 = eax_29
                            var_c_1.b = 5
                            
                            if (eax_29 == 0)
                                result = nullptr
                            else
                                result = sub_403380(eax_29)
                            
                            var_c_1.b = 1
                            bool cond:2_1 = (*result)->vFunc_2(ebx_4) != 0
                            struct IMemory::common::CIMemory::VTable* eax_34 = *result
                            
                            if (cond:2_1)
                                sub_69d850((*result)->vFunc_6(edi_1, eax_34->vFunc_5()))
                            else
                                eax_34->vFunc_1()
                                result = nullptr
                    else
                        sub_403510(ecx_10)
                        sub_403510(&var_58)
                        result = nullptr
            else
                result = nullptr
            
            if (edi_1 != 0)
                j__free(edi_1)

int32_t var_48

if (var_48 != 0)
    j__free(var_48)

fsbase->NtTib.ExceptionList = ExceptionList
return result
