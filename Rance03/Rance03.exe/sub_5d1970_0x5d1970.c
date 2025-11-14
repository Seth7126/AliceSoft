// 函数: sub_5d1970
// 地址: 0x5d1970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca36c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** ecx
int32_t edx
ecx, edx = __chkstk(0x4070)
int32_t eax_2 = __security_cookie ^ &ExceptionList
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
int32_t arg_4064
fsbase->NtTib.ExceptionList = &arg_4064
void** ebp = ecx
void** arg_c = ecx
int32_t (* ecx_1)(void* arg1) = nullptr
int32_t* esi = nullptr
var_8 = nullptr
int32_t* var_4 = nullptr
int32_t arg_406c = 0
void* eax_5 = ebp[4]

if (eax_5 != 0)
    if (eax_5 u> 0xffffffff)
    label_5d19ec:
        sub_69a551("vector<T> too long")
        noreturn
    
    sub_403640(&var_8, eax_5)
    esi = var_4
    ecx_1 = var_8

void* edx_1 = ebp[4]
void* arg_8 = edx_1

if (ebp[5] u>= 0x10)
    ebp = *ebp
    arg_c = ebp

char* ebx_1 = nullptr

if (edx_1 s> 0)
    while (true)
        eax_5.b = *(ebx_1 + ebp)
        char* edi_1 = ebx_1 + ebp
        
        if ((eax_5.b u>= 0x81 && eax_5.b u<= 0x9f) || (eax_5.b u>= 0xe0 && eax_5.b u<= 0xef))
            if (edi_1 u>= esi || ecx_1 u> edi_1)
                if (esi == 0)
                    sub_403590(&var_8, 1)
                    esi = var_4
                
                if (esi != 0)
                    eax_5.b = *edi_1
                    *esi = eax_5.b
            else
                char* edi_2 = edi_1 - ecx_1
                
                if (esi == 0)
                    sub_403590(&var_8, 1)
                    esi = var_4
                    ecx_1 = var_8
                
                if (esi != 0)
                    eax_5.b = *(edi_2 + ecx_1)
                    *esi = eax_5.b
            
            char* esi_1 = esi + 1
            char* edi_3 = &ebx_1[1] + ebp
            
            if (edi_3 u< esi_1)
                eax_5 = var_8
            
            if (edi_3 u>= esi_1 || eax_5 u> edi_3)
                if (esi_1 == 0)
                    sub_403590(&var_8, 1)
                
                if (esi_1 == 0)
                    goto label_5d1ae9
                
                eax_5.b = *edi_3
                *esi_1 = eax_5.b
            label_5d1ae9:
                esi = &esi_1[1]
                ebx_1 = &ebx_1[2]
                var_4 = esi
            else
                char* edi_4 = edi_3 - eax_5
                
                if (esi_1 == 0)
                    sub_403590(&var_8, 1)
                    eax_5 = var_8
                
                if (esi_1 == 0)
                    goto label_5d1ae9
                
                eax_5.b = *(edi_4 + eax_5)
                *esi_1 = eax_5.b
                esi = &esi_1[1]
                var_4 = esi
                ebx_1 = &ebx_1[2]
            
            edx_1 = arg_8
        else if (eax_5.b == 0x25)
            eax_5.b = *(ebx_1 + ebp + 1)
            
            if (eax_5.b != 0x25)
                char arg_5c
                char arg_5d
                
                if (eax_5.b == 0x2a || (&ebx_1[2] s< edx_1 && *(ebx_1 + ebp + 2) == 0x2a))
                    int32_t var_24_16 = edx
                    __swprintf_c(&arg_5c, 0x4000, 0x6ea734)
                    ExceptionList:3.b = 0x25
                    sub_414b60(&var_8, &ExceptionList:3)
                    void* eax_24 = ebp + 1 + ebx_1
                    void* ebx_7
                    
                    if (*eax_24 == 0x2a)
                        ebx_7 = &ebx_1[2]
                    else
                        sub_414b60(&var_8, eax_24)
                        ebx_7 = &ebx_1[3]
                    
                    char* ecx_48 = &arg_5c
                    
                    do
                        eax_24.b = *ecx_48
                        ecx_48 = &ecx_48[1]
                    while (eax_24.b != 0)
                    
                    char* var_24_19 = arg1
                    sub_468ff0(&var_8, var_4, &arg_5c, &(&arg_5c)[ecx_48 - &arg_5d])
                    char* var_24_20 = arg1
                    sub_468ff0(&var_8, var_4, ebx_7 + ebp, arg_8 + ebp)
                    break
                
                char* var_24_2 = edi_1
                char* arg_10 = nullptr
                char* arg_14 = nullptr
                int32_t arg_18 = 0
                sub_5d3160(&arg_10, ecx_1)
                void* ebx_3 = &ebx_1[1]
                arg_406c.b = 1
                char* edi_7 = arg_10
                arg1 = ebx_3
                ExceptionList:2.b = 0
                
                if (ebx_3 s< arg_8)
                    int32_t edx_2 = arg_18
                    char* ebp_1 = ebp + ebx_3
                    char* eax_7 = arg_14
                    char* arg_28 = ebp_1
                    
                    while (true)
                        void* ecx_12
                        ecx_12.b = *ebp_1
                        void** esi_5
                        
                        if (ecx_12.b == 0x64)
                            esi_5 = arg_c
                            sub_414b60(&arg_10, ebx_3 + esi_5)
                        else if (ecx_12.b == 0x44)
                            ExceptionList:2.b = 0x64
                            sub_414b60(&arg_10, &ExceptionList:2)
                            esi_5 = arg_c
                            ExceptionList:2.b = 1
                        else
                            if (ecx_12.b == 0x63)
                                arg_5c = edx.b
                                
                                if (edx s> 0xff)
                                    arg_5d = (edx s>> 8).b
                                    char arg_5e = 0
                                else
                                    arg_5d = 0
                                
                                int32_t esi_3 = esi - var_8
                                char* edi_12 = &arg_5c
                                int32_t eax_14
                                
                                do
                                    eax_14.b = *edi_12
                                    edi_12 = &edi_12[1]
                                while (eax_14.b != 0)
                                void* edi_13 = edi_12 - &arg_5d
                                sub_403540(&var_8, edi_13 + esi_3)
                                sub_69d850(var_8 + esi_3, &arg_5c, edi_13, eax_4)
                                char* var_24_10 = arg1
                                sub_468ff0(&var_8, var_4, ebx_3 + 1 + arg_c, arg_8 + arg_c)
                                arg_406c.b = 0
                                sub_403510(&arg_10)
                                goto label_5d20a0
                            
                            if (ecx_12.b == 0x62)
                                int32_t* edx_7 = "false"
                                
                                if (edx != 0)
                                    edx_7 = "true"
                                
                                sub_5d3120(&var_8, edx_7)
                                char* var_24_7 = arg1
                                sub_468ff0(&var_8, var_4, ebx_3 + 1 + arg_c, arg_8 + arg_c)
                                arg_406c.b = 0
                                sub_403510(&arg_10)
                                goto label_5d20a0
                            
                            if (ecx_12.b != 0x78 && ecx_12.b != 0x58)
                                if ((ecx_12.b u< 0x61 || ecx_12.b u> 0x7a)
                                        && (ecx_12.b u< 0x41 || ecx_12.b u> 0x5a)
                                        && (ecx_12.b u< 0x81 || ecx_12.b u> 0x9f)
                                        && (ecx_12.b u< 0xe0 || ecx_12.b u> 0xef))
                                    if (ebp_1 u>= eax_7 || edi_7 u> ebp_1)
                                        if (eax_7 == edx_2 && edx_2 - eax_7 u< 1)
                                            if (edi_7 - eax_7 - 1 u< 1)
                                                goto label_5d19ec
                                            
                                            void* edx_5 = edx_2 - edi_7
                                            uint32_t edi_11 = edx_5 u>> 1
                                            void* edx_6
                                            
                                            if (0xffffffff - edi_11 u>= edx_5)
                                                edx_6 = edx_5 + edi_11
                                            else
                                                edx_6 = nullptr
                                            
                                            if (edx_6 u< eax_7 - edi_7 + 1)
                                                edx_6 = eax_7 - edi_7 + 1
                                            
                                            sub_403640(&arg_10, edx_6)
                                            edx_2 = arg_18
                                            eax_7 = arg_14
                                            edi_7 = arg_10
                                        
                                        if (eax_7 != 0)
                                            ecx_12.b = *ebp_1
                                            *eax_7 = ecx_12.b
                                    else
                                        void* ebp_2 = ebp_1 - edi_7
                                        
                                        if (eax_7 == edx_2 && edx_2 - eax_7 u< 1)
                                            if (edi_7 - eax_7 - 1 u< 1)
                                                goto label_5d19ec
                                            
                                            void* edx_3 = edx_2 - edi_7
                                            uint32_t edi_9 = edx_3 u>> 1
                                            void* edx_4
                                            
                                            if (0xffffffff - edi_9 u>= edx_3)
                                                edx_4 = edx_3 + edi_9
                                            else
                                                edx_4 = nullptr
                                            
                                            if (edx_4 u< eax_7 - edi_7 + 1)
                                                edx_4 = eax_7 - edi_7 + 1
                                            
                                            sub_403640(&arg_10, edx_4)
                                            edx_2 = arg_18
                                            eax_7 = arg_14
                                            edi_7 = arg_10
                                        
                                        if (eax_7 != 0)
                                            ecx_12.b = *(edi_7 + ebp_2)
                                            *eax_7 = ecx_12.b
                                        
                                        ebp_1 = arg_28
                                    
                                    eax_7 = &eax_7[1]
                                    ebx_3 += 1
                                    ebp_1 = &ebp_1[1]
                                    arg_14 = eax_7
                                    arg_28 = ebp_1
                                    
                                    if (ebx_3 s< arg_8)
                                        continue
                                
                                ebp = arg_c
                                break
                            
                            esi_5 = arg_c
                            sub_414b60(&arg_10, ebx_3 + esi_5)
                        
                        ExceptionList:3.b = 0
                        sub_414b60(&arg_10, &ExceptionList:3)
                        arg_5c = 0
                        _memset(&arg_5d, 0, 0x3fff)
                        int32_t var_30_3 = edx
                        __swprintf_c(&arg_5c, 0x4000, arg_10)
                        
                        if (ExceptionList:2.b == 0)
                            sub_5d3120(&var_8, &arg_5c)
                        else
                            void arg_44
                            sub_401f60(&arg_44, &arg_5c)
                            arg_406c.b = 2
                            int32_t* arg_2c
                            sub_5d2ce0(&arg_2c, &arg_44)
                            arg_406c.b = 4
                            sub_401fb0(&arg_44)
                            int32_t* edx_9 = &arg_2c
                            
                            if (arg2 u>= 0x10)
                                edx_9 = arg_2c
                            
                            sub_5d3120(&var_8, edx_9)
                            arg_406c.b = 1
                            sub_401fb0(&arg_2c)
                        
                        char* var_24_15 = arg1
                        sub_468ff0(&var_8, var_4, ebx_3 + 1 + esi_5, arg_8 + esi_5)
                        arg_406c.b = 0
                        sub_403510(&arg_10)
                        goto label_5d20a0
                
                ExceptionList:2.b = 0x25
                sub_414b60(&var_8, &ExceptionList:2)
                ebx_1 = arg1
                arg_406c.b = 0
                
                if (edi_7 != 0)
                    j__free(edi_7)
                    arg_10 = nullptr
                    arg_14 = nullptr
                    arg_18 = 0
                
                esi = var_4
                edx_1 = arg_8
            else
                char arg_7 = eax_5.b
                
                if (&arg_7 u>= esi || ecx_1 u> &arg_7)
                    if (esi == 0)
                        sub_403590(&var_8, 1)
                        esi = var_4
                        edx_1 = arg_8
                    
                    if (esi == 0)
                        goto label_5d1bce
                    
                    *esi = 0x25
                label_5d1bce:
                    esi += 1
                    ebx_1 = &ebx_1[2]
                    var_4 = esi
                else
                    char* edi_6 = &arg_7 - ecx_1
                    
                    if (esi == 0)
                        sub_403590(&var_8, 1)
                        esi = var_4
                        ecx_1 = var_8
                        edx_1 = arg_8
                    
                    if (esi == 0)
                        goto label_5d1bce
                    
                    eax_5.b = *(edi_6 + ecx_1)
                    *esi = eax_5.b
                    esi += 1
                    var_4 = esi
                    ebx_1 = &ebx_1[2]
        else if (edi_1 u>= esi || ecx_1 u> edi_1)
            if (esi == 0)
                sub_403590(&var_8, 1)
                esi = var_4
                edx_1 = arg_8
            
            if (esi == 0)
                goto label_5d1b54
            
            eax_5.b = *edi_1
            *esi = eax_5.b
        label_5d1b54:
            esi += 1
            ebx_1 = &ebx_1[1]
            var_4 = esi
        else
            char* edi_5 = edi_1 - ecx_1
            
            if (esi == 0)
                sub_403590(&var_8, 1)
                esi = var_4
                ecx_1 = var_8
                edx_1 = arg_8
            
            if (esi == 0)
                goto label_5d1b54
            
            eax_5.b = *(edi_5 + ecx_1)
            *esi = eax_5.b
            esi += 1
            var_4 = esi
            ebx_1 = &ebx_1[1]
        
        if (ebx_1 s>= edx_1)
            break
        
        ecx_1 = var_8

label_5d20a0:
ExceptionList:3.b = 0
sub_414b60(&var_8, &ExceptionList:3)
int32_t (* esi_6)(void* arg1) = var_8
void* ecx_54

if (*esi_6 != 0)
    int32_t (* ecx_55)(void* arg1) = esi_6
    int32_t (* edx_11)(void* arg1) = ecx_55 + 1
    char i
    
    do
        i = *ecx_55
        ecx_55 += 1
    while (i != 0)
    ecx_54 = ecx_55 - edx_11
else
    ecx_54 = nullptr

sub_402110(arg3, esi_6, ecx_54)
j__free(esi_6)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = arg_4064
sub_69a5bc(eax_2 ^ &ExceptionList)
return result
