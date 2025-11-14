// 函数: sub_68f5d0
// 地址: 0x68f5d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2
int32_t result_1 = result

if (arg1 != result)
    void* edi_1 = arg1 + 0x44
    void* var_60_1 = edi_1
    
    if (edi_1 != result)
        int32_t* ebp_1 = arg1 + 0xc
        var_64 = ebp_1
        
        do
            struct dpsound::CSoundData::VTable* var_54
            sub_68a6e0(&var_54, edi_1)
            int32_t var_4 = 0
            int32_t* esi_1 = ebp_1[4]
            int32_t* edx
            
            if (ebp_1[5] u< 0x10)
                edx = ebp_1
            else
                edx = *ebp_1
            
            int32_t* var_48
            int32_t* ecx_1 = &var_48
            int32_t* eax_5 = esi_1
            int32_t var_34
            
            if (var_34 u>= 0x10)
                ecx_1 = var_48
            
            int32_t* var_38
            
            if (var_38 u< esi_1)
                eax_5 = var_38
            
            int32_t eax_6 = sub_405190(eax_5, edx, ecx_1, eax_5)
            bool cond:0_1 = eax_6 s< 0
            
            if (eax_6 == 0)
                if (var_38 u>= esi_1)
                    eax_6.b = var_38 != esi_1
                else
                    eax_6 = 0xffffffff
                
                cond:0_1 = eax_6 s< 0
            
            eax_6.b = cond:0_1
            int32_t result_2
            char var_50
            int32_t var_4c
            int32_t var_30
            char var_20
            int32_t var_1c
            int32_t var_18
            int32_t var_14
            
            if (eax_6.b == 0)
                void** edi_2 = edi_1 + 0xc
                void* ebx_2 = edi_1
                int32_t eax_16
                
                while (true)
                    int32_t* ebp_4 = edi_2[-0xd]
                    edi_2 -= 0x44
                    void* edx_2
                    
                    if (edi_2[5] u< 0x10)
                        edx_2 = edi_2
                    else
                        edx_2 = *edi_2
                    
                    int32_t** ecx_5 = &var_48
                    int32_t* eax_14 = var_38
                    int32_t* esi_2 = ebp_4
                    
                    if (var_34 u>= 0x10)
                        ecx_5 = var_48
                    
                    if (eax_14 u< ebp_4)
                        esi_2 = eax_14
                    
                    if (esi_2 == 0)
                        goto label_68f79a
                    
                    void* i_1 = esi_2 - 4
                    
                    if (esi_2 u>= 4)
                        void* i
                        
                        do
                            if (*ecx_5 != *edx_2)
                                goto label_68f75a
                            
                            ecx_5 = &ecx_5[1]
                            edx_2 += 4
                            i = i_1
                            i_1 -= 4
                        while (i u>= 4)
                    
                    if (i_1 == 0xfffffffc)
                        eax_16 = 0
                    else
                    label_68f75a:
                        eax_14.b = *ecx_5
                        char temp2_1 = *edx_2
                        
                        if (eax_14.b != temp2_1)
                            eax_16 = sbb.d(eax_14, eax_14, eax_14.b u< temp2_1) | 1
                        else if (i_1 == 0xfffffffd)
                            eax_16 = 0
                        else
                            eax_14.b = *(ecx_5 + 1)
                            char temp5_1 = *(edx_2 + 1)
                            
                            if (eax_14.b != temp5_1)
                                eax_16 = sbb.d(eax_14, eax_14, eax_14.b u< temp5_1) | 1
                            else if (i_1 == 0xfffffffe)
                                eax_16 = 0
                            else
                                eax_14.b = *(ecx_5 + 2)
                                char temp6_1 = *(edx_2 + 2)
                                
                                if (eax_14.b != temp6_1)
                                    eax_16 = sbb.d(eax_14, eax_14, eax_14.b u< temp6_1) | 1
                                else if (i_1 == 0xffffffff)
                                    eax_16 = 0
                                else
                                    eax_14.b = *(ecx_5 + 3)
                                    char temp7_1 = *(edx_2 + 3)
                                    
                                    if (eax_14.b == temp7_1)
                                        eax_16 = 0
                                    else
                                        eax_16 = sbb.d(eax_14, eax_14, eax_14.b u< temp7_1) | 1
                    
                    bool cond:3_1 = eax_16 s< 0
                    
                    if (eax_16 == 0)
                        eax_14 = var_38
                    label_68f79a:
                        
                        if (eax_14 u>= ebp_4)
                            eax_16.b = var_38 != ebp_4
                        else
                            eax_16 = 0xffffffff
                        
                        cond:3_1 = eax_16 s< 0
                    
                    eax_16.b = cond:3_1
                    
                    if (eax_16.b == 0)
                        break
                    
                    eax_16.b = edi_2[-2].b
                    *(ebx_2 + 4) = eax_16.b
                    *(ebx_2 + 8) = edi_2[-1]
                    
                    if (ebx_2 + 0xc != edi_2)
                        sub_401ff0(ebx_2 + 0xc, edi_2, 0, 0xffffffff)
                    
                    *(ebx_2 + 0x24) = edi_2[6]
                    sub_4a6db0(ebx_2 + 0x28, &edi_2[7])
                    *(ebx_2 + 0x34) = edi_2[0xa].b
                    *(ebx_2 + 0x38) = edi_2[0xb]
                    *(ebx_2 + 0x3c) = edi_2[0xc]
                    *(ebx_2 + 0x40) = edi_2[0xd]
                    ebx_2 = &edi_2[-3]
                
                eax_16.b = var_50
                *(ebx_2 + 4) = eax_16.b
                *(ebx_2 + 8) = var_4c
                
                if (ebx_2 + 0xc != &var_48)
                    sub_401ff0(ebx_2 + 0xc, &var_48, 0, 0xffffffff)
                
                *(ebx_2 + 0x24) = var_30
                sub_4a6db0(ebx_2 + 0x28, &result_2)
                edi_1 = var_60_1
                *(ebx_2 + 0x34) = var_20
                *(ebx_2 + 0x3c) = var_18
                *(ebx_2 + 0x38) = var_1c
                *(ebx_2 + 0x40) = var_14
            else
                int32_t* var_7c_3 = var_64
                sub_6937f0(edi_1 + 0x44, edi_1, arg1, edi_1 + 0x44)
                *(arg1 + 4) = var_50
                *(arg1 + 8) = var_4c
                
                if (arg1 + 0xc != &var_48)
                    sub_401ff0(arg1 + 0xc, &var_48, 0, 0xffffffff)
                
                *(arg1 + 0x24) = var_30
                sub_4a6db0(arg1 + 0x28, &result_2)
                *(arg1 + 0x34) = var_20
                *(arg1 + 0x3c) = var_18
                *(arg1 + 0x38) = var_1c
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
            
            if (var_34 u>= 0x10)
                result = j__free(var_48)
            
            ebp_1 = var_64
            edi_1 += 0x44
            var_60_1 = edi_1
        while (edi_1 != result_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
