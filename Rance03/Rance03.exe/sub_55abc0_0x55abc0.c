// 函数: sub_55abc0
// 地址: 0x55abc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5270
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CTokenFile::VTable* const var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_55aeb0(arg1)
var_44 = &sealengine::CTokenFile::`vftable'
int32_t var_4 = 0
int32_t var_40 = arg2
int32_t var_3c = arg2
int32_t var_38 = arg3 + arg2

while (true)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_4.b = 1
    int32_t var_34
    enum MESSAGEBOX_RESULT result
    
    if (sub_59ce30(&var_2c, &var_34).b == 0)
        if (var_34 == 1)
            if (var_18_1 u>= 0x10)
                j__free(var_2c.d)
            
            *(arg1 + 0x10) += 1
            result.b = 1
            goto label_55ae8c
        
        int32_t var_5c_12 = 0x6e4008
    label_55ae69:
        struct sealengine::CTokenFile::VTable* const* var_60_4 = &var_44
        sub_561610(arg1)
    label_55ae78:
        
        if (var_18_1 u>= 0x10)
            j__free(var_2c.d)
        
        result.b = 0
    label_55ae8c:
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_69a5bc(eax_2 ^ &var_44)
        return result
    
    char* edx_1 = &var_2c
    int32_t ecx_1 = 0x12
    
    if (var_18_1 u>= 0x10)
        edx_1 = var_2c.d
    
    if (var_1c_1 u< 0x12)
        ecx_1 = var_1c_1
    
    if (ecx_1 != 0)
        void* const esi_1 = &data_6e401c
        int32_t i_2 = ecx_1 - 4
        
        if (ecx_1 u>= 4)
            int32_t i
            
            do
                if (*edx_1 != *esi_1)
                    goto label_55aca7
                
                edx_1 = &edx_1[4]
                esi_1 += 4
                i = i_2
                i_2 -= 4
            while (i u>= 4)
        
        if (i_2 == 0xfffffffc)
            result = 0
        else
        label_55aca7:
            result.b = *edx_1
            char temp2_1 = *esi_1
            
            if (result.b != temp2_1)
                result = sbb.d(result, result, result.b u< temp2_1) | 1
            else if (i_2 == 0xfffffffd)
                result = 0
            else
                result.b = edx_1[1]
                char temp5_1 = *(esi_1 + 1)
                
                if (result.b != temp5_1)
                    result = sbb.d(result, result, result.b u< temp5_1) | 1
                else if (i_2 == 0xfffffffe)
                    result = 0
                else
                    result.b = edx_1[2]
                    char temp8_1 = *(esi_1 + 2)
                    
                    if (result.b != temp8_1)
                        result = sbb.d(result, result, result.b u< temp8_1) | 1
                    else if (i_2 == 0xffffffff)
                        result = 0
                    else
                        result.b = edx_1[3]
                        char temp10_1 = *(esi_1 + 3)
                        
                        if (result.b == temp10_1)
                            result = 0
                        else
                            result = sbb.d(result, result, result.b u< temp10_1) | 1
        
        if (result != 0 || var_1c_1 u< 0x12)
            goto label_55ad13
        
        goto label_55aceb
    
    if (var_1c_1 u< 0x12)
    label_55ad13:
        void* edx_2 = &var_2c
        int32_t ecx_3 = 0x12
        
        if (var_18_1 u>= 0x10)
            edx_2 = var_2c.d
        
        if (var_1c_1 u< 0x12)
            ecx_3 = var_1c_1
        
        if (ecx_3 != 0)
            enum MESSAGEBOX_RESULT* esi_2 = &data_6e3ff4
            int32_t i_3 = ecx_3 - 4
            
            if (ecx_3 u>= 4)
                int32_t i_1
                
                do
                    if (*edx_2 != *esi_2)
                        goto label_55ad4a
                    
                    edx_2 += 4
                    esi_2 = &esi_2[1]
                    i_1 = i_3
                    i_3 -= 4
                while (i_1 u>= 4)
            
            int32_t eax_11
            
            if (i_3 == 0xfffffffc)
                eax_11 = 0
            else
            label_55ad4a:
                result.b = *edx_2
                char temp6_1 = *esi_2
                
                if (result.b != temp6_1)
                    eax_11 = sbb.d(result, result, result.b u< temp6_1) | 1
                else if (i_3 == 0xfffffffd)
                    eax_11 = 0
                else
                    result.b = *(edx_2 + 1)
                    char temp9_1 = *(esi_2 + 1)
                    
                    if (result.b != temp9_1)
                        eax_11 = sbb.d(result, result, result.b u< temp9_1) | 1
                    else if (i_3 == 0xfffffffe)
                        eax_11 = 0
                    else
                        result.b = *(edx_2 + 2)
                        char temp11_1 = *(esi_2 + 2)
                        
                        if (result.b != temp11_1)
                            eax_11 = sbb.d(result, result, result.b u< temp11_1) | 1
                        else if (i_3 == 0xffffffff)
                            eax_11 = 0
                        else
                            result.b = *(edx_2 + 3)
                            char temp12_1 = *(esi_2 + 3)
                            
                            if (result.b == temp12_1)
                                eax_11 = 0
                            else
                                eax_11 = sbb.d(result, result, result.b u< temp12_1) | 1
            
            if (eax_11 != 0 || var_1c_1 u< 0x12)
                goto label_55adaf
            
            goto label_55ad8e
        
        if (var_1c_1 u< 0x12)
        label_55adaf:
            char* esi_3 = var_2c.d
            char* ecx_5 = &var_2c
            int32_t eax_14 = 0xc
            
            if (var_18_1 u>= 0x10)
                ecx_5 = esi_3
            
            if (var_1c_1 u< 0xc)
                eax_14 = var_1c_1
            
            if (sub_405190(eax_14, 0x6e3fb8, ecx_5, eax_14) != 0 || var_1c_1 u< 0xc)
            label_55ae22:
                char* eax_17 = &var_2c
                
                if (var_18_1 u>= 0x10)
                    eax_17 = esi_3
                
                char* var_5c_10 = eax_17
                int32_t var_60_3 = 0x6e3f60
                struct sealengine::CTokenFile::VTable* const* var_64_1 = &var_44
                sub_561610(arg1)
                goto label_55ae78
            
            int32_t eax_15
            eax_15.b = var_1c_1 != 0xc
            
            if (eax_15 != 0)
                goto label_55ae22
            
            if (sub_55b160(arg1, &var_44, arg4) == 0)
                int32_t var_5c_9 = 0x6e3f38
                goto label_55ae69
        else
        label_55ad8e:
            int32_t eax_12
            eax_12.b = var_1c_1 != 0x12
            
            if (eax_12 != 0)
                goto label_55adaf
            
            if (sub_55b010(arg1, &var_44) == 0)
                int32_t var_5c_5 = 0x6e3f8c
                goto label_55ae69
    else
    label_55aceb:
        result.b = var_1c_1 != 0x12
        
        if (result != 0)
            goto label_55ad13
        
        if (sub_55af00(arg1, &var_44) == 0)
            int32_t var_5c_3 = 0x6e3fc8
            goto label_55ae69
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
