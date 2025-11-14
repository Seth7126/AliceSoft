// 函数: sub_585990
// 地址: 0x585990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7500
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_88
int32_t eax_2 = __security_cookie ^ &var_88
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = *(arg1 + 8)

for (int32_t* i = *(arg1 + 4); i != edi; i = &i[0xa])
    (**i)(0)

*(arg1 + 8) = *(arg1 + 4)
struct sealengine::CTokenFile::VTable* const var_80 = &sealengine::CTokenFile::`vftable'
int32_t var_4 = 0
char* var_7c = arg2
void* var_74 = arg3 + arg2

while (true)
    struct sealengine::CPRPDefine::VTable* var_50 = &sealengine::CPRPDefine::`vftable'
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    int32_t* var_34 = nullptr
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_54_1 = 0xf
    int32_t var_58_1 = 0
    char var_68 = 0
    var_4.b = 2
    int32_t var_84
    char* eax_9
    int32_t i_2
    char* edx_1
    eax_9, i_2, edx_1 = sub_59ce30(&var_68, &var_84)
    int32_t var_a0_9
    
    if (eax_9.b == 0)
        int32_t result
        
        if (var_84 == 1)
            if (var_54_1 u>= 0x10)
                j__free(var_68.d)
            
            int32_t var_54_4 = 0xf
            int32_t var_58_4 = 0
            var_68 = 0
            sub_586950(&var_50)
            result.b = 1
            goto label_585d80
        
        var_a0_9 = 0x6e5700
    label_585ce6:
        sub_59f4e0(eax_9, edx_1, i_2, var_a0_9, eax_4)
    label_585cf3:
        
        if (var_54_1 u>= 0x10)
            j__free(var_68.d)
        
        var_4.b = 0
        int32_t var_54_3 = 0xf
        int32_t var_58_3 = 0
        var_68 = 0
        var_50 = &sealengine::CPRPDefine::`vftable'
        sub_51def0(&var_34)
        
        if (var_38_1 u>= 0x10)
            j__free(var_4c.d)
        
        result.b = 0
    label_585d80:
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_69a5bc(eax_2 ^ &var_88)
        return result
    
    char* eax_10 = &var_68
    
    if (var_84 != 4)
        if (var_54_1 u>= 0x10)
            eax_10 = var_68.d
        
        sub_59f4e0(eax_10, edx_1, i_2, 0x6e56c8, eax_10)
        goto label_585cf3
    
    sub_401ff0(&var_4c, &var_68, 0, 0xffffffff)
    int32_t var_14_1 = 0xf
    int32_t i_3 = 0
    char var_28 = 0
    var_4.b = 3
    void var_6c
    char* eax_11
    eax_11, i_2, edx_1 = sub_59ce30(&var_28, &var_6c)
    
    if (eax_11.b == 0)
        eax_9 = arg2
        var_4.b = 2
        char* var_7c_2 = eax_9
        
        if (var_14_1 u>= 0x10)
            eax_9, i_2, edx_1 = j__free(var_28.d)
        
        var_a0_9 = 0x6e56a0
        goto label_585ce6
    
    edx_1 = &var_28
    char* ebx_1 = var_28.d
    i_2 = 1
    
    if (var_14_1 u>= 0x10)
        edx_1 = ebx_1
    
    if (i_3 u< 1)
        i_2 = i_3
    
    int32_t eax_13
    bool cond:3_1
    
    if (i_2 == 0)
    label_585b73:
        
        if (i_3 u>= 1)
            eax_13.b = i_3 != 1
        else
            eax_13 = 0xffffffff
        
        cond:3_1 = eax_13 == 0
    else
        void* const esi = &data_6e56c4
        int32_t i_4 = i_2
        i_2 -= 4
        
        if (i_4 u>= 4)
            int32_t i_1
            
            do
                if (*edx_1 != *esi)
                    goto label_585b36
                
                edx_1 = &edx_1[4]
                esi += 4
                i_1 = i_2
                i_2 -= 4
            while (i_1 u>= 4)
        
        if (i_2 == 0xfffffffc)
            eax_13 = 0
        else
        label_585b36:
            eax_11.b = *edx_1
            char temp2_1 = *esi
            
            if (eax_11.b != temp2_1)
                eax_13 = sbb.d(eax_11, eax_11, eax_11.b u< temp2_1) | 1
            else if (i_2 == 0xfffffffd)
                eax_13 = 0
            else
                eax_11.b = edx_1[1]
                char temp5_1 = *(esi + 1)
                
                if (eax_11.b != temp5_1)
                    eax_13 = sbb.d(eax_11, eax_11, eax_11.b u< temp5_1) | 1
                else if (i_2 == 0xfffffffe)
                    eax_13 = 0
                else
                    eax_11.b = edx_1[2]
                    char temp6_1 = *(esi + 2)
                    
                    if (eax_11.b != temp6_1)
                        eax_13 = sbb.d(eax_11, eax_11, eax_11.b u< temp6_1) | 1
                    else if (i_2 == 0xffffffff)
                        eax_13 = 0
                    else
                        eax_11.b = edx_1[3]
                        char temp7_1 = *(esi + 3)
                        
                        if (eax_11.b == temp7_1)
                            eax_13 = 0
                        else
                            eax_13 = sbb.d(eax_11, eax_11, eax_11.b u< temp7_1) | 1
        
        cond:3_1 = eax_13 == 0
        
        if (eax_13 == 0)
            goto label_585b73
    
    eax_13.b = cond:3_1
    eax_13.b = eax_13.b == 0
    
    if (eax_13.b != 0)
        eax_9 = arg2
        char* var_7c_1 = eax_9
        var_4.b = 2
        
        if (var_14_1 u< 0x10)
            var_a0_9 = 0x6e56a0
            goto label_585ce6
        
        eax_9, i_2, edx_1 = j__free(ebx_1)
        var_a0_9 = 0x6e56a0
        goto label_585ce6
    
    var_4.b = 2
    
    if (var_14_1 u>= 0x10)
        j__free(ebx_1)
    
    eax_9, i_2, edx_1 = sub_585da0(&var_50, &var_80)
    
    if (eax_9.b == 0)
        var_a0_9 = 0x6e5680
        goto label_585ce6
    
    sub_586370(arg1 + 4, &var_50)
    
    if (var_54_1 u>= 0x10)
        j__free(var_68.d)
    
    var_4.b = 0
    int32_t* esi_1 = var_34
    int32_t var_54_2 = 0xf
    int32_t var_58_2 = 0
    var_68 = 0
    var_50 = &sealengine::CPRPDefine::`vftable'
    
    if (esi_1 != 0)
        if (esi_1 != var_30_1)
            do
                (**esi_1)(0)
                esi_1 = &esi_1[0x10]
            while (esi_1 != var_30_1)
            
            esi_1 = var_34
        
        j__free(esi_1)
        var_34 = nullptr
        int32_t var_30_2 = 0
        int32_t var_2c_2 = 0
    
    if (var_38_1 u>= 0x10)
        j__free(var_4c.d)
