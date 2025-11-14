// 函数: sub_5d2730
// 地址: 0x5d2730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca416
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** ecx
void** edx
ecx, edx = __chkstk(0x403c)
int32_t eax_2 = __security_cookie ^ &ExceptionList
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
int32_t arg_4030
fsbase->NtTib.ExceptionList = &arg_4030
void** edx_1 = ecx
void** arg_c = edx_1
int32_t (* ecx_1)(void* arg1) = nullptr
int32_t* esi = nullptr
var_8 = nullptr
int32_t* var_4 = nullptr
int32_t arg_4038 = 0
void* eax_5 = edx_1[4]

if (eax_5 != 0)
    if (eax_5 u> 0xffffffff)
    label_5d27ac:
        sub_69a551("vector<T> too long")
        noreturn
    
    sub_403640(&var_8, eax_5)
    esi = var_4
    ecx_1 = var_8
    edx_1 = arg_c

int32_t ebp_1 = edx_1[4]
int32_t arg_8 = ebp_1

if (edx_1[5] u>= 0x10)
    edx_1 = *edx_1
    arg_c = edx_1

void* ebx_1 = nullptr
int32_t* result
int32_t (* ebp_5)(void* arg1)

if (ebp_1 s<= 0)
label_5d2c68:
    ExceptionList:3.b = 0
    sub_414b60(&var_8, &ExceptionList:3)
    ebp_5 = var_8
    void* ecx_34
    
    if (*ebp_5 != 0)
        int32_t (* ecx_35)(void* arg1) = ebp_5
        int32_t (* edx_8)(void* arg1) = ecx_35 + 1
        char i
        
        do
            i = *ecx_35
            ecx_35 += 1
        while (i != 0)
        ecx_34 = ecx_35 - edx_8
    else
        ecx_34 = nullptr
    
    sub_402110(arg1, ebp_5, ecx_34)
    ebx_1.b = 1
else
    while (true)
        eax_5.b = *(ebx_1 + edx_1)
        char* edi_1 = ebx_1 + edx_1
        
        if ((eax_5.b u>= 0x81 && eax_5.b u<= 0x9f) || (eax_5.b u>= 0xe0 && eax_5.b u<= 0xef))
            if (edi_1 u>= esi || ecx_1 u> edi_1)
                if (esi == 0)
                    sub_403590(&var_8, 1)
                    esi = var_4
                    edx_1 = arg_c
                
                if (esi != 0)
                    eax_5.b = *edi_1
                    *esi = eax_5.b
            else
                char* edi_2 = edi_1 - ecx_1
                
                if (esi == 0)
                    sub_403590(&var_8, 1)
                    esi = var_4
                    ecx_1 = var_8
                    edx_1 = arg_c
                
                if (esi != 0)
                    eax_5.b = *(edi_2 + ecx_1)
                    *esi = eax_5.b
            
            char* esi_1 = esi + 1
            void* edi_3 = ebx_1 + 1 + edx_1
            int32_t (* ebp_2)(void* arg1)
            
            if (edi_3 u< esi_1)
                ebp_2 = var_8
            
            if (edi_3 u>= esi_1 || ebp_2 u> edi_3)
                if (esi_1 == 0)
                    sub_403590(&var_8, 1)
                
                if (esi_1 == 0)
                    goto label_5d28b8
                
                eax_5.b = *edi_3
                *esi_1 = eax_5.b
            label_5d28b8:
                ebp_1 = arg_8
                esi = &esi_1[1]
                var_4 = esi
                ebx_1 += 2
            else
                char* edi_4 = edi_3 - ebp_2
                
                if (esi_1 == 0)
                    sub_403590(&var_8, 1)
                    ebp_2 = var_8
                
                if (esi_1 == 0)
                    goto label_5d28b8
                
                eax_5.b = *(edi_4 + ebp_2)
                ebp_1 = arg_8
                *esi_1 = eax_5.b
                esi = &esi_1[1]
                var_4 = esi
                ebx_1 += 2
        else if (eax_5.b == 0x25)
            if (*(ebx_1 + edx_1 + 1) != 0x25)
                char* var_24_2 = edi_1
                int32_t* result_1 = nullptr
                char* arg_14 = nullptr
                int32_t arg_18 = 0
                sub_5d3160(&result_1, ecx_1)
                void* ebx_3 = ebx_1 + 1
                arg_4038.b = 1
                char* result_3 = result_1
                void* arg_28 = ebx_3
                
                if (ebx_3 s< ebp_1)
                    int32_t edx_2 = arg_18
                    void* ebp_4 = arg_c + ebx_3
                    char* eax_6 = arg_14
                    
                    while (true)
                        void* ecx_12
                        ecx_12.b = *ebp_4
                        
                        if (ecx_12.b == 0x73)
                            sub_414b60(&result_1, arg_c + ebx_3)
                            ExceptionList:3.b = 0
                            sub_414b60(&result_1, &ExceptionList:3)
                            char arg_2c = 0
                            char arg_2d[0x3fff]
                            _memset(&arg_2d, 0, 0x3fff)
                            void** eax_13 = edx
                            
                            if (eax_13[4] u>= 0x4000)
                                result = result_1
                                
                                if (result != 0)
                                    j__free(result)
                                
                                ebp_5 = var_8
                                ebx_1.b = 0
                                break
                            
                            if (eax_13[5] u>= 0x10)
                                eax_13 = *eax_13
                            
                            int32_t* result_2 = result_1
                            void** var_24_10 = eax_13
                            __swprintf_c(&arg_2c, 0x4000, result_2)
                            char* edi_11 = &arg_2c
                            char i_1
                            
                            do
                                i_1 = *edi_11
                                edi_11 = &edi_11[1]
                            while (i_1 != 0)
                            void* edi_12 = edi_11 - &arg_2d
                            
                            if (edi_11 != &arg_2d)
                                void* esi_2 = esi - var_8
                                sub_403540(&var_8, esi_2 + edi_12)
                                sub_69d850(var_8 + esi_2, &arg_2c, edi_12, eax_4)
                                esi = var_4
                                result_2 = result_1
                            
                            void** var_24_13 = edx
                            sub_468ff0(&var_8, esi, ebx_3 + 1 + arg_c, arg_8 + arg_c)
                            arg_4038.b = 0
                            
                            if (result_2 != 0)
                                j__free(result_2)
                            
                            goto label_5d2c68
                        
                        if ((ecx_12.b u< 0x61 || ecx_12.b u> 0x7a)
                                && (ecx_12.b u< 0x41 || ecx_12.b u> 0x5a)
                                && (ecx_12.b u< 0x81 || ecx_12.b u> 0x9f)
                                && (ecx_12.b u< 0xe0 || ecx_12.b u> 0xef))
                            if (ebp_4 u>= eax_6 || result_3 u> ebp_4)
                                if (eax_6 == edx_2 && edx_2 - eax_6 u< 1)
                                    if (result_3 - eax_6 - 1 u< 1)
                                        goto label_5d27ac
                                    
                                    void* edx_5 = edx_2 - result_3
                                    uint32_t edi_10 = edx_5 u>> 1
                                    void* edx_6
                                    
                                    if (0xffffffff - edi_10 u>= edx_5)
                                        edx_6 = edx_5 + edi_10
                                    else
                                        edx_6 = nullptr
                                    
                                    if (edx_6 u< eax_6 - result_3 + 1)
                                        edx_6 = eax_6 - result_3 + 1
                                    
                                    sub_403640(&result_1, edx_6)
                                    edx_2 = arg_18
                                    eax_6 = arg_14
                                    result_3 = result_1
                                
                                if (eax_6 != 0)
                                    ecx_12.b = *ebp_4
                                    *eax_6 = ecx_12.b
                            else
                                ecx_12 = ebp_4 - result_3
                                
                                if (eax_6 == edx_2 && edx_2 - eax_6 u< 1)
                                    if (result_3 - eax_6 - 1 u< 1)
                                        goto label_5d27ac
                                    
                                    void* edx_3 = edx_2 - result_3
                                    uint32_t edi_8 = edx_3 u>> 1
                                    void* edx_4
                                    
                                    if (0xffffffff - edi_8 u>= edx_3)
                                        edx_4 = edx_3 + edi_8
                                    else
                                        edx_4 = nullptr
                                    
                                    if (edx_4 u< eax_6 - result_3 + 1)
                                        edx_4 = eax_6 - result_3 + 1
                                    
                                    sub_403640(&result_1, edx_4)
                                    edx_2 = arg_18
                                    eax_6 = arg_14
                                    result_3 = result_1
                                
                                if (eax_6 != 0)
                                    ecx_12.b = *(result_3 + ecx_12)
                                    *eax_6 = ecx_12.b
                            
                            eax_6 = &eax_6[1]
                            ebx_3 += 1
                            ebp_4 += 1
                            arg_14 = eax_6
                            
                            if (ebx_3 s< arg_8)
                                continue
                        
                        ebp_1 = arg_8
                        goto label_5d2b0f
                    
                    break
                
            label_5d2b0f:
                ExceptionList:3.b = 0x25
                sub_414b60(&var_8, &ExceptionList:3)
                ebx_1 = arg_28
                arg_4038.b = 0
                
                if (result_3 != 0)
                    j__free(result_3)
                    result_1 = nullptr
                    arg_14 = nullptr
                    arg_18 = 0
                
                esi = var_4
            else
                char arg_7 = 0x25
                
                if (&arg_7 u>= esi || ecx_1 u> &arg_7)
                    if (esi == 0)
                        sub_403590(&var_8, 1)
                        esi = var_4
                    
                    if (esi == 0)
                        goto label_5d2991
                    
                    *esi = 0x25
                label_5d2991:
                    esi += 1
                    ebx_1 += 2
                    var_4 = esi
                else
                    char* edi_6 = &arg_7 - ecx_1
                    
                    if (esi == 0)
                        sub_403590(&var_8, 1)
                        esi = var_4
                        ecx_1 = var_8
                    
                    if (esi == 0)
                        goto label_5d2991
                    
                    eax_5.b = *(edi_6 + ecx_1)
                    *esi = eax_5.b
                    esi += 1
                    var_4 = esi
                    ebx_1 += 2
        else if (edi_1 u>= esi || ecx_1 u> edi_1)
            if (esi == 0)
                sub_403590(&var_8, 1)
                esi = var_4
            
            if (esi == 0)
                goto label_5d291f
            
            eax_5.b = *edi_1
            *esi = eax_5.b
        label_5d291f:
            esi += 1
            ebx_1 += 1
            var_4 = esi
        else
            char* edi_5 = edi_1 - ecx_1
            
            if (esi == 0)
                sub_403590(&var_8, 1)
                esi = var_4
                ecx_1 = var_8
            
            if (esi == 0)
                goto label_5d291f
            
            eax_5.b = *(edi_5 + ecx_1)
            *esi = eax_5.b
            esi += 1
            var_4 = esi
            ebx_1 += 1
        
        if (ebx_1 s>= ebp_1)
            goto label_5d2c68
        
        ecx_1 = var_8
        edx_1 = arg_c

if (ebp_5 != 0)
    j__free(ebp_5)

result.b = ebx_1.b
fsbase->NtTib.ExceptionList = arg_4030
sub_69a5bc(eax_2 ^ &ExceptionList)
return result
