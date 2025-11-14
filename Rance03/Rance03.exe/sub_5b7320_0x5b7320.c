// 函数: sub_5b7320
// 地址: 0x5b7320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9134
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
BOOL* var_108
int32_t eax_2 = __security_cookie ^ &var_108
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg3
struct sys43vm::CReadFile::VTable* const var_104 = &sys43vm::CReadFile::`vftable'
struct memory::CFastMemory::VTable* const var_100 = &memory::CFastMemory::`vftable'
BOOL* lpMem_1 = nullptr
void** i_1 = nullptr
int32_t var_f4 = 0
int32_t var_f0 = 0
int32_t var_4 = 0
BOOL result
void** i_2
BOOL* lpMem

if (sub_5d1280(arg1[0x22], esi, &var_100).b == 0 || i_1 s<= 0)
    lpMem = lpMem_1
    i_2.b = 0
else
    void* var_f0_1 = nullptr
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    var_4.b = 1
    
    if (sub_5d7a10(&var_104, &var_48).b == 0)
        goto label_5b7499
    
    if (sub_40d280(&var_48, arg2).b == 0)
        if (i_1 s< var_f0_1 + 0x38)
            goto label_5b7499
        
        BOOL* lpMem_3 = lpMem_1
        
        if (i_1 == 0)
            lpMem_3 = nullptr
        
        int32_t var_98
        sub_69d850(&var_98, lpMem_3 + var_f0_1, 0x38, eax_4)
        void** i_4 = var_f0_1 + 0x38
        
        if (var_98 != 0x3e8)
            goto label_5b7499
        
        int32_t var_94
        
        if (var_94 == 7)
            if (sub_5d7a10(&var_104, &arg1[0x1a]).b == 0)
                goto label_5b7499
            
            i_2 = i_4
            void** i_10
            
            if (i_10 s>= 0)
                if (i_10 s< i_1)
                    i_2 = i_10
                
                i_4 = i_2
            
            int32_t ebp_1 = 0
            void** result_2
            BOOL result_3
            BOOL var_d8
            int32_t var_d4
            void** var_84
            
            if (var_84 s> 0)
                while (true)
                    var_d8 = 0
                    var_d4 = 0
                    int32_t var_d0_1 = 0
                    var_4.b = 2
                    
                    if (sub_5d7960(&var_104, &result_3) != 0
                            && sub_5d7960(&var_104, &result_2) != 0)
                        void** result_8 = result_2
                        int32_t esi_2 = 0
                        
                        if (result_8 s> 0)
                            do
                                if (sub_5d7960(&var_104, &var_108) == 0)
                                    goto label_5b783a
                                
                                sub_4158d0(&var_d8, &var_108)
                                esi_2 += 1
                            while (esi_2 s< result_8)
                        
                        sub_5b87e0(&arg1[1], &result_3)
                        var_4.b = 1
                        sub_5b7da0(&result_3)
                        ebp_1 += 1
                        
                        if (ebp_1 s< var_84)
                            continue
                        
                        i_2 = i_4
                        break
                    
                label_5b783a:
                    sub_5b7da0(&result_3)
                    goto label_5b7499
            
            void** i_11
            
            if (i_11 s>= 0)
                if (i_11 s< i_1)
                    i_2 = i_11
                
                i_4 = i_2
            
            int32_t esi_3 = 0
            int32_t var_7c
            
            if (var_7c s> 0)
                while (true)
                    int32_t var_14_1 = 0xf
                    int32_t var_18_1 = 0
                    char var_28 = 0
                    var_4.b = 3
                    void var_30
                    void var_2c
                    
                    if (sub_5d7960(&var_104, &var_30) != 0 && sub_5d7960(&var_104, &var_2c) != 0
                            && sub_5d7a10(&var_104, &var_28) != 0)
                        sub_5b8890(&arg1[4], &var_30)
                        var_4.b = 1
                        sub_405c60(&var_30)
                        esi_3 += 1
                        
                        if (esi_3 s< var_7c)
                            continue
                        
                        i_2 = i_4
                        break
                    
                    sub_405c60(&var_30)
                    goto label_5b7499
            
            void** i_12
            
            if (i_12 s>= 0)
                if (i_12 s< i_1)
                    i_2 = i_12
                
                i_4 = i_2
            
            int32_t esi_4 = 0
            int32_t var_74
            
            if (var_74 s> 0)
                while (true)
                    int32_t var_4c_1 = 0xf
                    int32_t var_50_1 = 0
                    char var_60 = 0
                    var_4.b = 4
                    
                    if (sub_5d7a10(&var_104, &var_60).b == 0)
                        if (var_4c_1 u>= 0x10)
                            j__free(var_60.d)
                        
                        int32_t var_4c_2 = 0xf
                        int32_t var_50_2 = 0
                        var_60 = 0
                        break
                    
                    sub_421cd0(&arg1[7], &var_60)
                    var_4.b = 1
                    
                    if (var_4c_1 u>= 0x10)
                        j__free(var_60.d)
                    
                    esi_4 += 1
                    
                    if (esi_4 s>= var_74)
                        i_2 = i_4
                        goto label_5b7745
                
                goto label_5b7499
            
        label_5b7745:
            void** i_3 = i_1
            BOOL i_13
            
            if (i_13 s>= 0 && i_13 s< i_3)
                i_2 = i_13
            
            BOOL* lpMem_10 = lpMem_1
            result_2 = nullptr
            int32_t var_6c
            
            if (var_6c s> 0)
                while (true)
                    int128_t var_c4
                    __builtin_memset(&var_c4, 0, 0x18)
                    void* esi_5 = &i_2[1]
                    var_4.b = 5
                    
                    if (i_3 s>= esi_5)
                        int32_t edi_3 = var_c4.d
                        BOOL* lpMem_11 = lpMem_10
                        
                        if (i_3 == 0)
                            lpMem_11 = nullptr
                        
                        result = *(lpMem_11 + i_2)
                        int32_t ebx = 0
                        BOOL result_4 = result
                        
                        if (result s> 0)
                            BOOL* ecx_19 = var_c4:4.d
                            
                            do
                                if (i_3 s< esi_5 + 4)
                                    goto label_5b7ae7
                                
                                BOOL* lpMem_4 = lpMem_1
                                var_108 = nullptr
                                
                                if (i_3 == 0)
                                    lpMem_4 = var_108
                                
                                result = *(lpMem_4 + esi_5)
                                esi_5 += 4
                                BOOL result_6 = result
                                var_108 = esi_5
                                void* var_f0_2 = esi_5
                                
                                if (&result_6 u>= ecx_19 || edi_3 u> &result_6)
                                    if (ecx_19 == var_c4:8.d)
                                        sub_415950(&var_c4, 1)
                                        ecx_19 = var_c4:4.d
                                        edi_3 = var_c4.d
                                    
                                    if (ecx_19 != 0)
                                        *ecx_19 = result
                                else
                                    int32_t esi_7 = (&result_6 - edi_3) s>> 2
                                    
                                    if (ecx_19 == var_c4:8.d)
                                        sub_415950(&var_c4, 1)
                                        ecx_19 = var_c4:4.d
                                        edi_3 = var_c4.d
                                    
                                    if (ecx_19 != 0)
                                        *ecx_19 = *(edi_3 + (esi_7 << 2))
                                    
                                    esi_5 = var_108
                                
                                ecx_19 = &ecx_19[1]
                                ebx += 1
                                var_c4:4.d = ecx_19
                            while (ebx s< result_4)
                            
                            lpMem_10 = lpMem_1
                        
                        i_2 = esi_5 + 4
                        int32_t i
                        
                        if (i_3 s>= i_2)
                            BOOL* lpMem_12 = lpMem_10
                            void** i_5 = i_2
                            var_108 = nullptr
                            
                            if (i_3 == 0)
                                lpMem_12 = nullptr
                            
                            result = *(lpMem_12 + esi_5)
                            BOOL result_5 = result
                            
                            if (result s<= 0)
                            label_5b7a4b:
                                sub_5b8960(&arg1[0xa], &result_4)
                                var_4.b = 1
                                void* eax_19 = var_c4:0xc.d
                                
                                if (eax_19 != 0)
                                    if (eax_19 != i)
                                        int32_t* esi_12 = eax_19 + 8
                                        
                                        do
                                            int32_t eax_20 = *esi_12
                                            
                                            if (eax_20 != 0)
                                                j__free(eax_20)
                                                *esi_12 = 0
                                                esi_12[1] = 0
                                                esi_12[2] = 0
                                            
                                            esi_12 = &esi_12[5]
                                        while (&esi_12[-2] != i)
                                        
                                        eax_19 = var_c4:0xc.d
                                    
                                    j__free(eax_19)
                                
                                int32_t eax_22 = var_c4.d
                                
                                if (eax_22 != 0)
                                    j__free(eax_22)
                                
                                result = result_2 + 1
                                result_2 = result
                                
                                if (result s>= var_6c)
                                    break
                                
                                lpMem_10 = lpMem_1
                                continue
                            else
                                while (true)
                                    int32_t edx_4 = 0
                                    BOOL* ecx_24 = nullptr
                                    int32_t edi_4 = 0
                                    var_d4 = 0
                                    BOOL* var_d0_2 = nullptr
                                    int32_t var_cc_1 = 0
                                    void* esi_8 = &i_2[1]
                                    var_4.b = 6
                                    
                                    if (i_3 s>= esi_8)
                                        BOOL* lpMem_5 = lpMem_1
                                        int32_t var_e8_2 = 0
                                        
                                        if (i_3 == 0)
                                            lpMem_5 = nullptr
                                        
                                        result = *(lpMem_5 + i_2)
                                        i_2 = esi_8 + 4
                                        result_3 = result
                                        
                                        if (i_3 s>= i_2)
                                            BOOL* lpMem_6 = lpMem_1
                                            int32_t var_e8_3 = 0
                                            
                                            if (i_3 == 0)
                                                lpMem_6 = nullptr
                                            
                                            void** i_6 = i_2
                                            int32_t ebp_3 = 0
                                            var_d8 = *(lpMem_6 + esi_8)
                                            
                                            if (result s<= 0)
                                            label_5b7a0a:
                                                sub_5b8630(&var_c4:0xc, &result_3)
                                                var_4.b = 5
                                                int32_t eax_17 = var_d4
                                                
                                                if (eax_17 != 0)
                                                    j__free(eax_17)
                                                
                                                i_3 = i_1
                                                result = var_108 + 1
                                                var_108 = result
                                                
                                                if (result s>= result_5)
                                                    goto label_5b7a4b
                                                
                                                continue
                                            else
                                                while (i_1 s>= &i_2[1])
                                                    BOOL* lpMem_7 = lpMem_1
                                                    
                                                    if (i_1 == 0)
                                                        lpMem_7 = nullptr
                                                    
                                                    result = *(lpMem_7 + i_2)
                                                    i_2 = &i_2[1]
                                                    BOOL result_7 = result
                                                    void** i_7 = i_2
                                                    
                                                    if (&result_7 u>= ecx_24 || edx_4 u> &result_7)
                                                        if (ecx_24 == edi_4)
                                                            sub_415950(&var_d4, 1)
                                                            edi_4 = var_cc_1
                                                            ecx_24 = var_d0_2
                                                            edx_4 = var_d4
                                                        
                                                        if (ecx_24 != 0)
                                                            *ecx_24 = result
                                                    else
                                                        int32_t esi_11 = (&result_7 - edx_4) s>> 2
                                                        
                                                        if (ecx_24 == edi_4)
                                                            sub_415950(&var_d4, 1)
                                                            edi_4 = var_cc_1
                                                            ecx_24 = var_d0_2
                                                            edx_4 = var_d4
                                                        
                                                        if (ecx_24 != 0)
                                                            *ecx_24 = *(edx_4 + (esi_11 << 2))
                                                    
                                                    ecx_24 = &ecx_24[1]
                                                    ebp_3 += 1
                                                    var_d0_2 = ecx_24
                                                    
                                                    if (ebp_3 s>= result_3)
                                                        goto label_5b7a0a
                                                
                                                if (edx_4 != 0)
                                                    j__free(edx_4)
                                    
                                    edi_3 = var_c4.d
                                    break
                        
                    label_5b7ae7:
                        i_2 = var_c4:0xc.d
                        
                        if (i_2 != 0)
                            if (i_2 != i)
                                void* esi_13 = &i_2[2]
                                
                                do
                                    int32_t eax_24 = *esi_13
                                    
                                    if (eax_24 != 0)
                                        j__free(eax_24)
                                        *esi_13 = 0
                                        *(esi_13 + 4) = 0
                                        *(esi_13 + 8) = 0
                                    
                                    esi_13 += 0x14
                                while (esi_13 - 8 != i)
                            
                            j__free(i_2)
                        
                        if (edi_3 != 0)
                            j__free(edi_3)
                    
                label_5b7b3d:
                    lpMem = lpMem_1
                    goto label_5b7b41
            
            BOOL i_14
            
            if (i_14 s>= 0 && i_14 s< i_3)
                i_2 = i_14
            
            BOOL* ecx_30 = nullptr
            var_108 = nullptr
            int32_t var_64
            
            if (var_64 s> 0)
                do
                    if (i_3 s< &i_2[1])
                        goto label_5b7b3d
                    
                    int32_t* lpMem_8 = lpMem_1
                    
                    if (i_3 == 0)
                        lpMem_8 = nullptr
                    
                    int32_t edi_6 = *(lpMem_8 + i_2)
                    i_2 = &i_2[1]
                    result = arg1[0xe]
                    int32_t var_a4 = edi_6
                    void** i_8 = i_2
                    int32_t edx_6
                    
                    if (&var_a4 u< result)
                        edx_6 = arg1[0xd]
                        i_3 = i_1
                    
                    if (&var_a4 u>= result || edx_6 u> &var_a4)
                        if (result == arg1[0xf])
                            sub_415950(&arg1[0xd], 1)
                            ecx_30 = var_108
                        
                        result = arg1[0xe]
                        
                        if (result != 0)
                            *result = edi_6
                    else
                        if (result == arg1[0xf])
                            sub_415950(&arg1[0xd], 1)
                            ecx_30 = var_108
                        
                        BOOL* edx_7 = arg1[0xe]
                        
                        if (edx_7 != 0)
                            *edx_7 = *(arg1[0xd] + ((&var_a4 - edx_6) s>> 2 << 2))
                    
                    arg1[0xe] += 4
                    ecx_30 += 1
                    var_108 = ecx_30
                while (ecx_30 s< var_64)
            
            lpMem = lpMem_1
            
            if (i_3 s< &i_2[1])
            label_5b7b41:
                i_2.b = 0
            else
                void* var_f0_3 = &i_2[1]
                BOOL* lpMem_2 = lpMem
                
                if (i_3 == 0)
                    lpMem_2 = nullptr
                
                void* esi_16 = &arg1[0x10]
                void* var_9c_1 = esi_16
                i_2 = *(i_2 + lpMem_2)
                void** i_9 = i_2
                sub_5b8a60(esi_16, i_2)
                result_2 = nullptr
                
                if (i_2 s<= 0)
                label_5b7d41:
                    i_2.b = 1
                else
                    result = 0
                    BOOL result_1 = 0
                    
                    while (true)
                        int32_t* esi_18 = *esi_16 + result
                        
                        if (sub_5d7a10(&var_104, esi_18).b == 0)
                            goto label_5b7b3d
                        
                        int32_t* edi_9 = var_f0_3
                        void* ebp_4 = &edi_9[1]
                        
                        if (i_1 s< ebp_4)
                            goto label_5b7b3d
                        
                        BOOL* lpMem_9 = lpMem_1
                        var_108 = lpMem_9
                        var_f0_3 = ebp_4
                        
                        if (i_1 == 0)
                            lpMem_9 = nullptr
                        
                        int32_t edi_10 = *(edi_9 + lpMem_9)
                        sub_5b8710(&esi_18[6], edi_10)
                        int32_t esi_19 = 0
                        
                        if (edi_10 s> 0)
                            int32_t edi_11 = 0
                            i_2 = i_1
                            
                            while (true)
                                int32_t* ecx_37 = esi_18[6]
                                
                                if (i_2 s< ebp_4 + 4)
                                    lpMem = var_108
                                    i_2.b = 0
                                    break
                                
                                BOOL* eax_28 = var_108
                                var_f0_3 = ebp_4 + 4
                                
                                if (i_2 == 0)
                                    eax_28 = nullptr
                                
                                *(ecx_37 + edi_11) = *(eax_28 + ebp_4)
                                
                                if (sub_5d7a10(&var_104, &ecx_37[1] + edi_11).b == 0)
                                    goto label_5b7b3d
                                
                                esi_19 += 1
                                edi_11 += 0x1c
                                
                                if (esi_19 s>= edi_10)
                                    goto label_5b7d20
                                
                                ebp_4 = var_f0_3
                                i_2 = i_1
                                var_108 = lpMem_1
                            
                            break
                        
                    label_5b7d20:
                        i_2 = result_2 + 1
                        lpMem = lpMem_1
                        result = result_1 + 0x24
                        esi_16 = var_9c_1
                        result_2 = i_2
                        result_1 = result
                        
                        if (i_2 s>= i_9)
                            goto label_5b7d41
        else
            int32_t var_120_3 = var_94
            sub_64b530(0x6e5eb8)
        label_5b7499:
            i_2.b = 0
            lpMem = lpMem_1
    else
        if (esi[5] u>= 0x10)
            esi = *esi
        
        void** var_120_2 = esi
        i_2.b = sub_64b530(0x6e5e78).b
        lpMem = lpMem_1
    
    if (var_34_1 u>= 0x10)
        j__free(var_48.d)
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)

result.b = i_2.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_108)
return result
