// 函数: sub_5d2110
// 地址: 0x5d2110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca3cc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** ecx
int32_t* edx
ecx, edx = __chkstk(0x406c)
int32_t eax_2 = __security_cookie ^ &ExceptionList
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
int32_t arg_4060
fsbase->NtTib.ExceptionList = &arg_4060
void** ebp = ecx
void** arg_8 = ecx
int32_t (* ecx_1)(void* arg1) = nullptr
int32_t* esi = nullptr
var_8 = nullptr
int32_t* var_4 = nullptr
int32_t arg_4068 = 0
uint32_t eax_5 = ebp[4]

if (eax_5 != 0)
    if (eax_5 u> 0xffffffff)
    label_5d2189:
        sub_69a551("vector<T> too long")
        noreturn
    
    sub_403640(&var_8, eax_5)
    esi = var_4
    ecx_1 = var_8

int32_t (* eax_6)(void* arg1) = ebp[4]
int32_t (* arg_18)(void* arg1) = eax_6

if (ebp[5] u>= 0x10)
    ebp = *ebp
    arg_8 = ebp

void* ebx_1 = nullptr
char arg_6

if (eax_6 s> 0)
    while (true)
        eax_6.b = *(ebx_1 + ebp)
        void* edi_2 = ebx_1 + ebp
        
        if ((eax_6.b u>= 0x81 && eax_6.b u<= 0x9f) || (eax_6.b u>= 0xe0 && eax_6.b u<= 0xef))
            if (edi_2 u>= esi || ecx_1 u> edi_2)
                if (esi == 0)
                    sub_403590(&var_8, 1)
                    esi = var_4
                
                if (esi != 0)
                    eax_6.b = *edi_2
                    *esi = eax_6.b
            else
                char* edi_3 = edi_2 - ecx_1
                
                if (esi == 0)
                    sub_403590(&var_8, 1)
                    esi = var_4
                    ecx_1 = var_8
                
                if (esi != 0)
                    eax_6.b = *(edi_3 + ecx_1)
                    *esi = eax_6.b
            
            ebx_1 += 1
            esi += 1
            var_4 = esi
            edi_2 = ebx_1 + ebp
            
            if (edi_2 u>= esi)
                goto label_5d22aa
            
            eax_6 = var_8
            
            if (eax_6 u> edi_2)
                goto label_5d22aa
            
            char* edi_4 = edi_2 - eax_6
            
            if (esi == 0)
                sub_403590(&var_8, 1)
                esi = var_4
                eax_6 = var_8
            
            if (esi == 0)
                goto label_5d22c3
            
            eax_6.b = *(edi_4 + eax_6)
            *esi = eax_6.b
            esi += 1
            var_4 = esi
            ebx_1 += 1
        else if (eax_6.b == 0x25)
            if (*(ebx_1 + ebp + 1) != 0x25)
                void* var_24_2 = edi_2
                char* arg_c = nullptr
                char* arg_10 = nullptr
                int32_t arg_14 = 0
                sub_5d3160(&arg_c, ecx_1)
                void* ebx_2 = ebx_1 + 1
                arg_4068.b = 1
                char* edi_7 = arg_c
                void* arg_28 = ebx_2
                ExceptionList:3.b = 0
                
                if (ebx_2 s< arg_18)
                    int32_t edx_1 = arg_14
                    char* ebp_1 = ebp + ebx_2
                    char* ecx_11 = arg_10
                    
                    while (true)
                        void* eax_7
                        eax_7.b = *ebp_1
                        
                        if (eax_7.b == 0x66)
                            sub_414b60(&arg_c, arg_8 + ebx_2)
                        else
                            if (eax_7.b != 0x46)
                                if ((eax_7.b u< 0x61 || eax_7.b u> 0x7a)
                                        && (eax_7.b u< 0x41 || eax_7.b u> 0x5a)
                                        && (eax_7.b u< 0x81 || eax_7.b u> 0x9f)
                                        && (eax_7.b u< 0xe0 || eax_7.b u> 0xef))
                                    if (ebp_1 u>= ecx_11 || edi_7 u> ebp_1)
                                        if (ecx_11 == edx_1 && edx_1 - ecx_11 u< 1)
                                            if (edi_7 - ecx_11 - 1 u< 1)
                                                goto label_5d2189
                                            
                                            void* edx_4 = edx_1 - edi_7
                                            uint32_t edi_11 = edx_4 u>> 1
                                            void* edx_5
                                            
                                            if (0xffffffff - edi_11 u>= edx_4)
                                                edx_5 = edx_4 + edi_11
                                            else
                                                edx_5 = nullptr
                                            
                                            if (edx_5 u< ecx_11 - edi_7 + 1)
                                                edx_5 = ecx_11 - edi_7 + 1
                                            
                                            sub_403640(&arg_c, edx_5)
                                            edx_1 = arg_14
                                            ecx_11 = arg_10
                                            edi_7 = arg_c
                                        
                                        if (ecx_11 != 0)
                                            eax_7.b = *ebp_1
                                            *ecx_11 = eax_7.b
                                    else
                                        eax_7 = ebp_1 - edi_7
                                        
                                        if (ecx_11 == edx_1 && edx_1 - ecx_11 u< 1)
                                            if (edi_7 - ecx_11 - 1 u< 1)
                                                goto label_5d2189
                                            
                                            void* edx_2 = edx_1 - edi_7
                                            uint32_t edi_9 = edx_2 u>> 1
                                            void* edx_3
                                            
                                            if (0xffffffff - edi_9 u>= edx_2)
                                                edx_3 = edx_2 + edi_9
                                            else
                                                edx_3 = nullptr
                                            
                                            if (edx_3 u< ecx_11 - edi_7 + 1)
                                                edx_3 = ecx_11 - edi_7 + 1
                                            
                                            sub_403640(&arg_c, edx_3)
                                            edx_1 = arg_14
                                            ecx_11 = arg_10
                                            edi_7 = arg_c
                                        
                                        if (ecx_11 != 0)
                                            eax_7.b = *(edi_7 + eax_7)
                                            *ecx_11 = eax_7.b
                                    
                                    ecx_11 = &ecx_11[1]
                                    ebx_2 += 1
                                    ebp_1 = &ebp_1[1]
                                    arg_10 = ecx_11
                                    
                                    if (ebx_2 s< arg_18)
                                        continue
                                
                                ebp = arg_8
                                break
                            
                            ExceptionList:3.b = 0x66
                            sub_414b60(&arg_c, &ExceptionList:3)
                            ExceptionList:3.b = 1
                        
                        arg_6 = 0
                        sub_414b60(&arg_c, &arg_6)
                        char arg_5c = 0
                        int32_t var_28_2 = 0
                        char arg_5d[0x3fff]
                        _memset(&arg_5d, 0, 0x3fff)
                        var_28_2.q = _mm_cvtps_pd(arg1)
                        __swprintf_c(&arg_5c, 0x4000, arg_c)
                        
                        if (ExceptionList:3.b == 0)
                            void* esi_2 = esi - var_8
                            char* edi_15 = &arg_5c
                            char i
                            
                            do
                                i = *edi_15
                                edi_15 = &edi_15[1]
                            while (i != 0)
                            void* edi_16 = edi_15 - &arg_5d
                            sub_403540(&var_8, esi_2 + edi_16)
                            sub_69d850(var_8 + esi_2, &arg_5c, edi_16, eax_4)
                        else
                            void* arg_2c
                            sub_401f60(&arg_2c, &arg_5c)
                            arg_4068.b = 2
                            int32_t* arg_44
                            sub_5d2ce0(&arg_44, &arg_2c)
                            arg_4068.b = 4
                            
                            if (arg2 u>= 0x10)
                                j__free(arg_2c)
                            
                            int32_t* ebp_2 = &arg_44
                            arg2 = 0xf
                            
                            if (arg3 u>= 0x10)
                                ebp_2 = arg_44
                            
                            int32_t esi_1 = esi - var_8
                            int32_t arg_3c = 0
                            arg_2c.b = 0
                            int32_t* edi_13 = ebp_2
                            char i_1
                            
                            do
                                i_1 = *edi_13
                                edi_13 += 1
                            while (i_1 != 0)
                            void* edi_14 = edi_13 - (ebp_2 + 1)
                            sub_403540(&var_8, edi_14 + esi_1)
                            sub_69d850(var_8 + esi_1, ebp_2, edi_14, eax_4)
                            arg_4068.b = 1
                            
                            if (arg3 u>= 0x10)
                                j__free(arg_44)
                        
                        int32_t var_24_17 = arg1
                        sub_468ff0(&var_8, var_4, ebx_2 + 1 + arg_8, arg_8 + arg_18)
                        arg_4068.b = 0
                        char* eax_30 = arg_c
                        
                        if (eax_30 != 0)
                            j__free(eax_30)
                        
                        goto label_5d26bd
                
                ExceptionList:3.b = 0x25
                sub_414b60(&var_8, &ExceptionList:3)
                ebx_1 = arg_28
                arg_4068.b = 0
                
                if (edi_7 != 0)
                    j__free(edi_7)
                    arg_c = nullptr
                    arg_10 = nullptr
                    arg_14 = 0
                
                esi = var_4
            else
                char arg_7 = 0x25
                
                if (&arg_7 u>= esi || ecx_1 u> &arg_7)
                    if (esi == 0)
                        sub_403590(&var_8, 1)
                        esi = var_4
                    
                    if (esi == 0)
                        goto label_5d2335
                    
                    *esi = 0x25
                label_5d2335:
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
                        goto label_5d2335
                    
                    eax_6.b = *(edi_6 + ecx_1)
                    *esi = eax_6.b
                    esi += 1
                    var_4 = esi
                    ebx_1 += 2
        else if (edi_2 u>= esi || ecx_1 u> edi_2)
        label_5d22aa:
            
            if (esi == 0)
                sub_403590(&var_8, 1)
                esi = var_4
            
            if (esi == 0)
                goto label_5d22c3
            
            eax_6.b = *edi_2
            *esi = eax_6.b
        label_5d22c3:
            esi += 1
            ebx_1 += 1
            var_4 = esi
        else
            char* edi_5 = edi_2 - ecx_1
            
            if (esi == 0)
                sub_403590(&var_8, 1)
                esi = var_4
                ecx_1 = var_8
            
            if (esi == 0)
                goto label_5d22c3
            
            eax_6.b = *(edi_5 + ecx_1)
            *esi = eax_6.b
            esi += 1
            var_4 = esi
            ebx_1 += 1
        
        if (ebx_1 s>= arg_18)
            break
        
        ecx_1 = var_8

label_5d26bd:
arg_6 = 0
sub_414b60(&var_8, &arg_6)
int32_t (* esi_3)(void* arg1) = var_8
void* ecx_30

if (*esi_3 != 0)
    int32_t (* ecx_31)(void* arg1) = esi_3
    int32_t (* edx_7)(void* arg1) = ecx_31 + 1
    char i_2
    
    do
        i_2 = *ecx_31
        ecx_31 += 1
    while (i_2 != 0)
    ecx_30 = ecx_31 - edx_7
else
    ecx_30 = nullptr

sub_402110(edx, esi_3, ecx_30)
j__free(esi_3)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = arg_4060
sub_69a5bc(eax_2 ^ &ExceptionList)
return result
