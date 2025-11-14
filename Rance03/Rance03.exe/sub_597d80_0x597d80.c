// 函数: sub_597d80
// 地址: 0x597d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c85fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct fileimage::CFileImageAnalyser::VTable* const var_b4
int32_t eax_2 = __security_cookie ^ &var_b4
int32_t ebx
int32_t var_b8 = ebx
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CResourceData::VTable* const var_7c = &sealengine::CResourceData::`vftable'
int96_t var_78 = (zx.o(0)).12
int32_t var_4 = 0
int32_t* ecx_1 = var_78.d
int32_t result = var_78:4.d

if (sub_58f630(arg2, arg1 + 0x34, &var_7c) == 0)
    ebx.b = 1
else
    int32_t edx_1
    int32_t result_2
    
    if (ecx_1 != 0)
        int32_t* ecx_2 = var_78.d
        result_2 = (*(*ecx_1 + 0x18))(eax_4)
        int32_t esi_1
        
        if (ecx_2 == 0)
            edx_1 = var_78:8.d
            result = var_78:4.d
        label_597e4f:
            esi_1 = edx_1 - result
        label_597e53:
            
            if (result == edx_1)
                result = 0
        else
            int32_t* ecx_3 = var_78.d
            esi_1 = (*(*ecx_2 + 0x14))()
            
            if (ecx_3 == 0)
                edx_1 = var_78:8.d
                result = var_78:4.d
                goto label_597e53
            
            result = (*(*ecx_3 + 0x18))()
        
        int32_t result_1 = result
        var_b4 = &fileimage::CFileImageAnalyser::`vftable'
        int32_t var_ac_1 = esi_1 + result_2
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        var_4.b = 2
        
        if (sub_468d00(&var_b4, &var_2c) == 0)
        labelid_12:
            ebx.b = 0
        else
            uint32_t var_a8
            
            if (sub_40c250(&var_2c, 0x6e5d08) == 0)
            labelid_12:
                ebx.b = 0
            else if (sub_468b20(&var_b4, &var_a8) == 0 || var_a8 != 0)
            labelid_12:
                ebx.b = 0
            else if (sub_468b20(&var_b4, &var_a8) == 0)
            labelid_12:
                ebx.b = 0
            else
                int32_t eax_15
                int32_t edx_4
                edx_4:eax_15 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
                uint32_t ecx_10 = var_a8
                int32_t edx_5 = edx_4 s>> 5
                
                if (ecx_10 != (edx_5 u>> 0x1f) + edx_5)
                label_598294:
                    ebx.b = 0
                else
                    int32_t esi_3 = 0
                    uint32_t var_a4
                    uint32_t var_a0
                    uint32_t var_9c
                    uint32_t var_98
                    uint32_t var_94
                    uint32_t var_90
                    uint32_t var_8c
                    uint32_t var_88
                    uint32_t var_84
                    uint32_t var_80
                    
                    if (ecx_10 s> 0)
                        int32_t edi_1 = 0
                        
                        do
                            if (sub_468b20(&var_b4, &var_88) == 0)
                                goto label_598294_2
                            
                            bool cond:1_1 = var_88 != 0
                            var_94 = 0
                            ebx.b = cond:1_1
                            var_90 = 0
                            var_8c = 0
                            
                            if (sub_468bc0(&var_b4, &var_94) == 0)
                                goto label_598294_2
                            
                            if (sub_468bc0(&var_b4, &var_90) == 0)
                                goto label_598294_2
                            
                            if (sub_468bc0(&var_b4, &var_8c) == 0)
                                goto label_598294_2
                            
                            var_a0 = 0
                            var_9c = 0
                            var_98 = 0
                            
                            if (sub_468bc0(&var_b4, &var_a0) == 0)
                                goto label_598294_2
                            
                            if (sub_468bc0(&var_b4, &var_9c) == 0)
                                goto label_598294_2
                            
                            if (sub_468bc0(&var_b4, &var_98) == 0)
                                goto label_598294_2
                            
                            if (sub_468bc0(&var_b4, &var_80) == 0)
                                goto label_598294_2
                            
                            if (sub_468bc0(&var_b4, &var_84) == 0)
                                goto label_598294_2
                            
                            if (sub_468bc0(&var_b4, &var_a4) == 0)
                                goto label_598294_2
                            
                            esi_3 += 1
                            void* ecx_22 = *(arg1 + 8) + edi_1
                            uint32_t eax_29 = var_8c
                            edi_1 += 0xac
                            *(ecx_22 + 0x54) = var_94.q
                            *(ecx_22 + 0x60) = var_a0.q
                            *(ecx_22 + 0x78) = var_80
                            *(ecx_22 + 0x88) = var_84
                            uint32_t xmm0_5 = var_a4
                            *(ecx_22 + 0x5c) = eax_29
                            uint32_t eax_30 = var_98
                            *(ecx_22 + 0x50) = ebx.b
                            *(ecx_22 + 0x68) = eax_30
                            *(ecx_22 + 0x9c) = xmm0_5
                        while (esi_3 s< var_a8)
                    
                    if (sub_468b20(&var_b4, &var_a4) == 0)
                    label_598294_1:
                        ebx.b = 0
                    else
                        sub_52bf90(arg1 + 0x24)
                        uint32_t ebp_1 = var_a4
                        ebx = 0
                        
                        if (ebp_1 s<= 0)
                        label_598287:
                            ebx.b = 1
                        else
                            while (true)
                                struct sealengine::CBoneCollisionShape::VTable* var_64
                                sub_52b520(&var_64)
                                var_4.b = 3
                                
                                if (sub_468b20(&var_b4, &var_a4) != 0)
                                    var_a0 = 0
                                    var_9c = 0
                                    var_98 = 0
                                    
                                    if (sub_468bc0(&var_b4, &var_a0) != 0
                                            && sub_468bc0(&var_b4, &var_9c) != 0
                                            && sub_468bc0(&var_b4, &var_98) != 0)
                                        var_94 = 0
                                        var_90 = 0
                                        var_8c = 0
                                        
                                        if (sub_468bc0(&var_b4, &var_94) != 0
                                                && sub_468bc0(&var_b4, &var_90) != 0
                                                && sub_468bc0(&var_b4, &var_8c) != 0
                                                && sub_468bc0(&var_b4, &var_84) != 0)
                                            uint32_t var_5c_1 = var_a4
                                            uint32_t var_50_1 = var_98
                                            int64_t var_58_1 = var_a0.q
                                            uint32_t var_44_1 = var_8c
                                            int64_t var_4c_1 = var_94.q
                                            uint32_t var_40_1 = var_84
                                            
                                            if (sub_468b20(&var_b4, &var_80) != 0)
                                                uint32_t var_3c_1 = var_80
                                                
                                                if (sub_468b20(&var_b4, &var_88) != 0)
                                                    uint32_t edi_2 = var_88
                                                    int32_t esi_4 = 0
                                                    
                                                    if (edi_2 s> 0)
                                                        do
                                                            if (sub_468b20(&var_b4, &var_a8) == 0)
                                                                goto label_59828f
                                                            
                                                            sub_52b620(&var_64, var_a8)
                                                            esi_4 += 1
                                                        while (esi_4 s< edi_2)
                                                    
                                                    sub_52c030(arg1 + 0x28, &var_64)
                                                    sub_52b5e0(&var_64)
                                                    ebx += 1
                                                    
                                                    if (ebx s>= ebp_1)
                                                        goto label_598287
                                                    
                                                    continue
                                
                            label_59828f:
                                sub_52b5e0(&var_64)
                                break
                            
                        label_598294_2:
                            ebx.b = 0
        
        if (var_18_1 u>= 0x10)
            j__free(var_2c.d)
        
        result = var_78:4.d
        ecx_1 = var_78.d
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
    else
        edx_1 = var_78:8.d
        
        if (result != edx_1)
            result_2 = result
            goto label_597e4f
        
        ebx.b = 1

var_7c = &sealengine::CResourceData::`vftable'
int32_t var_4_1 = 4

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_4)
    result = var_78:4.d

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b4)
return result
