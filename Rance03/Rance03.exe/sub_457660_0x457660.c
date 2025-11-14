// 函数: sub_457660
// 地址: 0x457660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7d03
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t var_a8 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_84 = edi
void* ebp = arg3
void* var_88 = ebp
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
var_94 = nullptr
int32_t var_90 = 0
var_94 = sub_458490()
var_4.b = 1
int32_t* i = *(edi + 0x14)
char var_74
int32_t ebx

if (i != *(edi + 0x18))
    ebx = arg2
    
    do
        void* ecx = *i
        
        if (ebx s>= 0 && (*(ecx + 8) - *(ecx + 4)) s>> 2 s> ebx)
            int32_t ecx_1 = *(*(ecx + 4) + (ebx << 2))
            
            if (ecx_1 != 0)
                int32_t ebp_3 = (i - *(edi + 0x14)) s>> 2
                int32_t var_8c = ebp_3
                sub_460970(ecx_1, &var_74)
                var_4.b = 2
                void** eax_10
                int32_t* ecx_3
                eax_10, ecx_3 = sub_417ed0(&var_94, &var_74)
                void** edi_1 = eax_10
                int32_t var_60
                
                if (edi_1 == var_94)
                label_4577c2:
                    int32_t* var_ac_4 = ecx_3
                    char* var_78 = &var_74
                    char** var_b0_1 = &var_78
                    int32_t* eax_13 = sub_458710(ecx_3)
                    void** var_7c
                    sub_4587d0(&var_94, &var_7c, edi_1, &eax_13[4], eax_13)
                    edi_1 = var_7c
                else
                    void* edx_1 = &edi_1[4]
                    int32_t* ebx_1 = *(edx_1 + 0x10)
                    
                    if (edi_1[9] u>= 0x10)
                        edx_1 = *edx_1
                    
                    int32_t* ecx_4 = &var_74
                    int32_t* eax_11 = ebx_1
                    
                    if (var_60 u>= 0x10)
                        ecx_4 = var_74.d
                    
                    int32_t* var_64
                    
                    if (var_64 u< ebx_1)
                        eax_11 = var_64
                    
                    int32_t eax_12
                    eax_12, ecx_3 = sub_405190(eax_11, edx_1, ecx_4, eax_11)
                    bool cond:3_1 = eax_12 s< 0
                    
                    if (eax_12 == 0)
                        ecx_3 = var_64
                        
                        if (ecx_3 u>= ebx_1)
                            eax_12.b = ecx_3 != ebx_1
                        else
                            eax_12 = 0xffffffff
                        
                        cond:3_1 = eax_12 s< 0
                    
                    eax_12.b = cond:3_1
                    
                    if (eax_12.b != 0)
                        goto label_4577c2
                
                int32_t eax_15 = edi_1[0xb]
                int32_t ecx_6
                
                if (&var_8c u< eax_15)
                    ecx_6 = edi_1[0xa]
                
                if (&var_8c u>= eax_15 || ecx_6 u> &var_8c)
                    if (eax_15 == edi_1[0xc])
                        sub_415950(&edi_1[0xa], 1)
                    
                    int32_t* eax_18 = edi_1[0xb]
                    
                    if (eax_18 != 0)
                        *eax_18 = ebp_3
                else
                    if (eax_15 == edi_1[0xc])
                        sub_415950(&edi_1[0xa], 1)
                    
                    int32_t* ecx_8 = edi_1[0xb]
                    
                    if (ecx_8 != 0)
                        *ecx_8 = *(edi_1[0xa] + ((&var_8c - ecx_6) s>> 2 << 2))
                
                edi_1[0xb] += 4
                var_4.b = 1
                
                if (var_60 u>= 0x10)
                    j__free(var_74.d)
                
                edi = var_84
                ebx = arg2
        
        i = &i[1]
    while (i != *(edi + 0x18))
    
    ebp = var_88

if (var_90 != (*(edi + 0x18) - *(edi + 0x14)) s>> 2)
    int32_t* eax_22 = var_94
    int32_t* i_2 = *eax_22
    
    if (i_2 != eax_22)
        do
            if (((i_2[0xb] - i_2[0xa]) & 0xfffffffc) s> 4)
                int32_t* var_44
                sub_4692b0(&var_44, &i_2[4])
                int32_t var_60_1 = 0xf
                int32_t var_64_1 = 0
                var_74 = 0
                var_4.b = 4
                int32_t* eax_26 = &var_44
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    eax_26 = var_44
                
                int32_t* var_ac_7 = eax_26
                var_4.b = 5
                int32_t var_5c
                sub_403110(&var_74, sub_4691f0(&var_5c, 0x6db9a8), nullptr, 0xffffffff)
                var_4.b = 4
                int32_t var_48
                
                if (var_48 u>= 0x10)
                    j__free(var_5c)
                
                sub_4057c0(&var_74, 0x6db9e0, 6)
                
                for (int32_t* i_1 = i_2[0xa]; i_1 != i_2[0xb]; i_1 = &i_1[1])
                    int32_t var_ac_9 = *i_1 + 1
                    var_4.b = 6
                    sub_403110(&var_74, sub_4691f0(&var_5c, "%d ,"), nullptr, 0xffffffff)
                    var_4.b = 4
                    
                    if (var_48 u>= 0x10)
                        j__free(var_5c)
                
                sub_4057c0(&var_74, 0x6db9a4, 2)
                char* eax_31 = &var_74
                
                if (var_60_1 u>= 0x10)
                    eax_31 = var_74.d
                
                var_4.b = 7
                sub_403110(ebp + 4, sub_410930(sub_455910(eax_31), &var_74, &var_5c, \n"), nullptr, 
                    0xffffffff)
                
                if (var_48 u>= 0x10)
                    j__free(var_5c)
                
                if (var_60_1 u>= 0x10)
                    j__free(var_74.d)
                
                var_4.b = 1
                int32_t var_60_2 = 0xf
                int32_t var_64_2 = 0
                var_74 = 0
                
                if (var_30 u>= 0x10)
                    j__free(var_44)
            
            if (*(i_2 + 0xd) == 0)
                int32_t* i_3 = i_2[2]
                
                if (*(i_3 + 0xd) != 0)
                    int32_t* i_5 = i_2[1]
                    
                    if (*(i_5 + 0xd) == 0)
                        while (i_2 == i_5[2])
                            i_2 = i_5
                            i_5 = i_5[1]
                            
                            if (*(i_5 + 0xd) != 0)
                                break
                    
                    i_2 = i_5
                else
                    i_2 = i_3
                    int32_t* i_4 = *i_2
                    
                    while (*(i_4 + 0xd) == 0)
                        i_2 = i_4
                        i_4 = *i_2
        while (i_2 != var_94)
    
    ebx.b = 0
else
    ebx.b = 1

int32_t** eax_34 = var_94
sub_457dc0(&var_94, &var_88, *eax_34, eax_34)
j__free(var_94)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
