// 函数: sub_607af0
// 地址: 0x607af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7428f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* i = arg1
void* i_2 = i
struct sys43vm::CWriteFile::VTable* const var_30 = &sys43vm::CWriteFile::`vftable'
struct memory::CFastMemory::VTable* const var_2c = &memory::CFastMemory::`vftable'
int32_t* lpMem = nullptr
void* i_3 = nullptr
int32_t var_20 = 0
void* var_1c = nullptr
void** ecx = arg4
int32_t var_8_1 = 0
void* eax_3 = ecx[4]

if (ecx[5] u>= 0x10)
    ecx = *ecx

uint32_t result

if (sub_62ab00(&var_30, ecx, eax_3 + 1).b == 0)
labelid_6:
    i.b = 0
else
    void* esi_1 = var_1c
    void* var_4c_1 = esi_1
    int32_t var_8c
    _memset(&var_8c, 0, 0x40)
    int32_t var_80_1 = arg2
    int32_t var_78_1 = (*(i + 8) - *(i + 4)) s>> 4
    int32_t var_70_1 = (*(i + 0x14) - *(i + 0x10)) s>> 5
    int32_t eax_12
    int32_t edx_1
    edx_1:eax_12 = muls.dp.d(0x2aaaaaab, *(i + 0x20) - *(i + 0x1c))
    int32_t ecx_5 = *(i + 0x2c) - *(i + 0x28)
    int32_t edx_2 = edx_1 s>> 2
    var_8c = 0x3e8
    int32_t var_88_1 = 8
    int32_t var_68_1 = (edx_2 u>> 0x1f) + edx_2
    int32_t var_84_1 = 0x40
    int32_t var_50_1 = 0
    void* i_6 = i_3
    int32_t var_60_1 = ecx_5 s/ 0x1c
    int32_t var_58_1 = (*(i + 0x38) - *(i + 0x34)) s>> 2
    void* eax_23 = esi_1 + 0x40
    
    if (i_6 s>= eax_23)
        goto label_607c37
    
    if (sub_405df0(&var_2c, i_6 + 0x40040).b == 0)
    labelid_6:
        i.b = 0
    else
        esi_1 = var_1c
        i_6 = i_3
    label_607c37:
        void* const lpMem_1 = lpMem
        
        if (i_6 == 0)
            lpMem_1 = nullptr
        
        sub_700660(lpMem_1 + esi_1, &var_8c, 0x40)
        void** ecx_7 = arg3
        void* var_1c_1 = esi_1 + 0x40
        void* eax_26 = ecx_7[4]
        
        if (ecx_7[5] u>= 0x10)
            ecx_7 = *ecx_7
        
        if (sub_62ab00(&var_30, ecx_7, eax_26 + 1).b == 0)
        labelid_6:
            i.b = 0
        else
            void** esi_3 = *(i + 4)
            int32_t edi_1 = *(i + 8)
            void* ecx_9 = var_1c_1
            void* var_7c_1 = ecx_9
            
            if (esi_3 != edi_1)
                while (true)
                    i = *esi_3
                    int32_t var_a0_3
                    
                    if (i != 0)
                        result = *(i_2 + 0x44)
                        int32_t* ecx_11 = *(i_2 + 0x40)
                        int32_t* edx_6 = ecx_11
                        
                        if (ecx_11 != result)
                            while (*edx_6 != i)
                                edx_6 = &edx_6[1]
                                
                                if (edx_6 == result)
                                    break
                        
                        if (edx_6 == result)
                            goto label_6082f8_2
                        
                        var_a0_3 = (edx_6 - ecx_11) s>> 2
                    else
                        var_a0_3 = 0xffffffff
                    
                    if (sub_62ab60(&var_30, var_a0_3).b == 0)
                        goto label_6082f8_2
                    
                    if (sub_62ab60(&var_30, (esi_3[2] - esi_3[1]) s>> 2).b == 0)
                        goto label_6082f8_2
                    
                    char* ecx_14 = esi_3[1]
                    int32_t eax_31 = esi_3[2]
                    
                    if (ecx_14 != eax_31
                            && sub_62ab00(&var_30, ecx_14, (eax_31 - ecx_14) & 0xfffffffc).b == 0)
                        goto label_6082f8_2
                    
                    esi_3 = &esi_3[4]
                    
                    if (esi_3 == edi_1)
                        ecx_9 = var_1c_1
                        i = i_2
                        break
            
            void* esi_4 = *(i + 0x10)
            int32_t edi_2 = *(i + 0x14)
            void* var_74_1 = ecx_9
            
            if (esi_4 != edi_2)
                i = esi_4 + 0x1c
                
                do
                    int32_t eax_34 = *esi_4
                    void* i_10 = i_3
                    
                    if (i_10 s< ecx_9 + 4)
                        if (sub_405df0(&var_2c, i_10 + 0x40004).b == 0)
                            goto label_6082f8_2
                        
                        i_10 = i_3
                        ecx_9 = var_1c_1
                    
                    int32_t* lpMem_2 = lpMem
                    
                    if (i_10 == 0)
                        lpMem_2 = nullptr
                    
                    *(lpMem_2 + ecx_9) = eax_34
                    void* ecx_17 = ecx_9 + 4
                    int32_t eax_37 = *(i - 0x18)
                    void* i_11 = i_3
                    
                    if (i_11 s< ecx_17 + 4)
                        if (sub_405df0(&var_2c, i_11 + 0x40004).b == 0)
                            goto label_6082f8_2
                        
                        i_11 = i_3
                    
                    int32_t* lpMem_3 = lpMem
                    
                    if (i_11 == 0)
                        lpMem_3 = nullptr
                    
                    *(lpMem_3 + ecx_17) = eax_37
                    var_1c_1 = ecx_17 + 4
                    char* ecx_20
                    
                    if (*i u< 0x10)
                        ecx_20 = i - 0x14
                    else
                        ecx_20 = *(i - 0x14)
                    
                    if (sub_62ab00(&var_30, ecx_20, *(i - 4) + 1).b == 0)
                        goto label_6082f8_2
                    
                    ecx_9 = var_1c_1
                    esi_4 += 0x20
                    i += 0x20
                while (esi_4 != edi_2)
                
                i = i_2
            
            void* esi_5 = *(i + 0x1c)
            int32_t edi_3 = *(i + 0x20)
            void* var_6c_1 = ecx_9
            
            if (esi_5 != edi_3)
                do
                    void* ecx_22
                    
                    if (*(esi_5 + 0x14) u< 0x10)
                        ecx_22 = esi_5
                    else
                        ecx_22 = *esi_5
                    
                    if (sub_62ab00(&var_30, ecx_22, *(esi_5 + 0x10) + 1).b == 0)
                        goto label_6082f8_2
                    
                    esi_5 += 0x18
                while (esi_5 != edi_3)
                
                ecx_9 = var_1c_1
            
            void* i_14 = i_2
            i = *(i + 0x28)
            void* var_64_1 = ecx_9
            int32_t eax_44 = *(i_14 + 0x2c)
            
            if (i != eax_44)
                void* i_12 = i_3
                void* esi_6 = i + 0x14
                void* var_38_3 = esi_6
                
                do
                    int32_t edi_4 = *i
                    
                    if (i_12 s< ecx_9 + 4)
                        if (sub_405df0(&var_2c, i_12 + 0x40004).b == 0)
                            goto label_6082f8_2
                        
                        ecx_9 = var_1c_1
                        i_12 = i_3
                    
                    int32_t* lpMem_4 = lpMem
                    
                    if (i_12 == 0)
                        lpMem_4 = nullptr
                    
                    *(lpMem_4 + ecx_9) = edi_4
                    void* ecx_25 = ecx_9 + 4
                    char* edi_5 = *(esi_6 - 0x10)
                    int32_t esi_7 = *(esi_6 - 0xc)
                    void* var_1c_3 = ecx_25
                    
                    if (edi_5 != esi_7)
                        void* esi_9 = (esi_7 - edi_5) & 0xfffffffc
                        
                        if (esi_9 != 0)
                            if (i_12 s< esi_9 + ecx_25)
                                if (sub_405df0(&var_2c, i_12 + 0x40000 + esi_9).b == 0)
                                    goto label_6082f8_2
                                
                                ecx_25 = var_1c_3
                                i_12 = i_3
                            
                            int32_t* lpMem_5 = lpMem
                            
                            if (i_12 == 0)
                                lpMem_5 = nullptr
                            
                            sub_700660(lpMem_5 + ecx_25, edi_5, esi_9)
                            i_12 = i_3
                            ecx_25 = var_1c_3 + esi_9
                            var_1c_3 = ecx_25
                    
                    int32_t esi_12 = (*var_38_3 - *(var_38_3 - 4)) s>> 4
                    
                    if (i_12 s< ecx_25 + 4)
                        if (sub_405df0(&var_2c, i_12 + 0x40004).b == 0)
                            goto label_6082f8_2
                        
                        ecx_25 = var_1c_3
                        i_12 = i_3
                    
                    int32_t* lpMem_6 = lpMem
                    
                    if (i_12 == 0)
                        lpMem_6 = nullptr
                    
                    *(lpMem_6 + ecx_25) = esi_12
                    ecx_9 = ecx_25 + 4
                    void* i_1 = *(var_38_3 - 4)
                    int32_t edi_7 = *var_38_3
                    var_1c_1 = ecx_9
                    
                    for (; i_1 != edi_7; i_1 += 0x10)
                        int32_t eax_55 = (*(i_1 + 8) - *(i_1 + 4)) s>> 2
                        
                        if (i_12 s< ecx_9 + 4)
                            if (sub_405df0(&var_2c, i_12 + 0x40004).b == 0)
                                goto label_6082f8_2
                            
                            ecx_9 = var_1c_1
                            i_12 = i_3
                        
                        int32_t* lpMem_7 = lpMem
                        
                        if (i_12 == 0)
                            lpMem_7 = nullptr
                        
                        *(lpMem_7 + ecx_9) = eax_55
                        void* ecx_30 = ecx_9 + 4
                        int32_t eax_58 = *i_1
                        void* i_13 = i_3
                        
                        if (i_13 s< ecx_30 + 4)
                            if (sub_405df0(&var_2c, i_13 + 0x40004).b == 0)
                                goto label_6082f8_2
                            
                            i_13 = i_3
                        
                        int32_t* lpMem_8 = lpMem
                        
                        if (i_13 == 0)
                            lpMem_8 = nullptr
                        
                        *(lpMem_8 + ecx_30) = eax_58
                        ecx_9 = ecx_30 + 4
                        char* eax_61 = *(i_1 + 4)
                        i_12 = i_3
                        int32_t eax_62 = *(i_1 + 8)
                        var_1c_1 = ecx_9
                        
                        if (eax_61 != eax_62)
                            void* eax_64 = (eax_62 - eax_61) & 0xfffffffc
                            void* var_18_1 = eax_64
                            
                            if (eax_64 != 0)
                                if (i_12 s< ecx_9 + eax_64)
                                    if (sub_405df0(&var_2c, eax_64 + i_12 + 0x40000).b == 0)
                                        goto label_6082f8_2
                                    
                                    eax_64 = var_18_1
                                    i_12 = i_3
                                
                                int32_t* lpMem_13 = lpMem
                                
                                if (i_12 == 0)
                                    lpMem_13 = nullptr
                                
                                sub_700660(var_1c_1 + lpMem_13, eax_61, eax_64)
                                ecx_9 = var_1c_1 + var_18_1
                                i_12 = i_3
                                var_1c_1 = ecx_9
                    
                    i += 0x1c
                    esi_6 = var_38_3 + 0x1c
                    var_38_3 = esi_6
                while (i != eax_44)
                
                i_14 = i_2
            
            int32_t* esi_14 = *(i_14 + 0x34)
            int32_t edi_8 = *(i_14 + 0x38)
            i = i_3
            void* var_5c_1 = ecx_9
            
            if (esi_14 != edi_8)
                do
                    int32_t eax_68 = *esi_14
                    
                    if (i s< ecx_9 + 4)
                        if (sub_405df0(&var_2c, i + 0x40004).b == 0)
                            goto label_6082f8_2
                        
                        ecx_9 = var_1c_1
                        i = i_3
                    
                    int32_t* lpMem_9 = lpMem
                    
                    if (i == 0)
                        lpMem_9 = nullptr
                    
                    esi_14 = &esi_14[1]
                    *(ecx_9 + lpMem_9) = eax_68
                    ecx_9 += 4
                    var_1c_1 = ecx_9
                while (esi_14 != edi_8)
                
                i_14 = i_2
            
            int32_t esi_17 = (*(i_14 + 0x44) - *(i_14 + 0x40)) s>> 2
            
            if (i s>= ecx_9 + 4)
                goto label_608109
            
            if (sub_405df0(&var_2c, i + 0x40004).b == 0)
            label_6082f8:
                i.b = 0
            else
                ecx_9 = var_1c_1
                i = i_3
                i_14 = i_2
            label_608109:
                int32_t* lpMem_10 = lpMem
                
                if (i == 0)
                    lpMem_10 = nullptr
                
                *(ecx_9 + lpMem_10) = esi_17
                void* i_7 = ecx_9 + 4
                int32_t* esi_18 = *(i_14 + 0x40)
                int32_t edi_9 = *(i_14 + 0x44)
                void* i_4 = i_7
                
                if (esi_18 != edi_9)
                    while (true)
                        void** ecx_37 = *esi_18
                        void* eax_73 = ecx_37[4]
                        
                        if (ecx_37[5] u>= 0x10)
                            ecx_37 = *ecx_37
                        
                        if (sub_62ab00(&var_30, ecx_37, eax_73 + 1).b == 0)
                            goto label_6082f8_2
                        
                        int32_t* eax_76 = *esi_18 + 0x2c
                        i = i_4
                        int32_t ecx_40 = eax_76[1] - *eax_76
                        void* i_8 = i_3
                        
                        if (i_8 s< i + 4)
                            if (sub_405df0(&var_2c, i_8 + 0x40004).b == 0)
                                goto label_6082f8_2
                            
                            i = i_4
                            i_8 = i_3
                        
                        int32_t* lpMem_11 = lpMem
                        void* i_5 = nullptr
                        
                        if (i_8 == 0)
                            lpMem_11 = nullptr
                        
                        *(i + lpMem_11) = ecx_40 s/ 0x70
                        i += 4
                        i_4 = i
                        
                        if ((eax_76[1] - *eax_76) s/ 0x70 s> 0)
                            int32_t ecx_45 = 0
                            int32_t var_34_4 = 0
                            
                            while (true)
                                void* eax_89 = *eax_76 + ecx_45
                                void* i_9 = i_3
                                int32_t eax_90 = *(eax_89 + 0x34)
                                
                                if (i_9 s< i + 4)
                                    if (sub_405df0(&var_2c, i_9 + 0x40004).b == 0)
                                        goto label_6082f8_2
                                    
                                    i = i_4
                                    i_9 = i_3
                                
                                int32_t* lpMem_12 = lpMem
                                
                                if (i_9 == 0)
                                    lpMem_12 = nullptr
                                
                                *(i + lpMem_12) = eax_90
                                void* ecx_49 = eax_89 + 0x18
                                i_4 = i + 4
                                void* eax_93 = *(ecx_49 + 0x10)
                                
                                if (*(ecx_49 + 0x14) u>= 0x10)
                                    ecx_49 = *ecx_49
                                
                                if (sub_62ab00(&var_30, ecx_49, eax_93 + 1).b == 0)
                                    goto label_6082f8_2
                                
                                var_34_4 += 0x70
                                i = i_5 + 1
                                i_5 = i
                                
                                if (i s>= (eax_76[1] - *eax_76) s/ 0x70)
                                    break
                                
                                i = i_4
                                ecx_45 = var_34_4
                        
                        esi_18 = &esi_18[1]
                        
                        if (esi_18 == edi_9)
                            i_7 = i_4
                            i = i_3
                            break
                
                void* i_15 = i_7
                
                if (i s>= eax_23)
                    goto label_6082b5
                
                if (sub_405df0(&var_2c, i + 0x40040).b == 0)
                label_6082f8_1:
                    i.b = 0
                else
                    i = i_3
                label_6082b5:
                    int32_t* lpMem_14 = lpMem
                    int32_t* lpMem_15 = lpMem_14
                    
                    if (i == 0)
                        lpMem_15 = nullptr
                    
                    sub_700660(lpMem_15 + var_4c_1, &var_8c, 0x40)
                    
                    if (i == 0)
                        lpMem_14 = nullptr
                    
                    if (sub_61eb40(*(i_2 + 0x4c), arg5, lpMem_14, i_4).b == 0)
                    label_6082f8_2:
                        i.b = 0
                    else
                        i.b = 1

if (lpMem != 0)
    HeapFree(data_7fcbf4, HEAP_NONE, lpMem)

result.b = i.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
