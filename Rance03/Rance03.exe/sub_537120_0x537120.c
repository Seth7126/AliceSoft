// 函数: sub_537120
// 地址: 0x537120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3fdb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* i = *(arg1 + 0x174)

while (i != *(arg1 + 0x178))
    bool cond:0_1 = *(i + 0x14) u< 0x10
    *(i + 0x10) = 0
    void* i_4
    
    if (cond:0_1)
        i_4 = i
    else
        i_4 = *i
    
    i += 0x18
    *i_4 = 0

char* ecx = *(arg1 + 0x174)

if (ecx != arg2)
    sub_401ff0(ecx, arg2, 0, 0xffffffff)

int32_t* result_1 = nullptr
int32_t var_88 = 0
int32_t var_84 = 0
int32_t var_4 = 0
int32_t var_60 = 0xf
int32_t var_64 = 0
char var_74 = 0
sub_402110(&var_74, 0x6e3718, 3)
var_4.b = 1
sub_412d60(&result_1, &var_74)
var_4.b = 0

if (var_60 u>= 0x10)
    j__free(var_74.d)

int32_t var_60_1 = 0xf
int32_t var_64_1 = 0
var_74 = 0
sub_402110(&var_74, 0x6e3714, 3)
var_4.b = 2
sub_412d60(&result_1, &var_74)
var_4.b = 0

if (var_60_1 u>= 0x10)
    j__free(var_74.d)

int32_t var_60_2 = 0xf
int32_t var_64_2 = 0
var_74 = 0
sub_402110(&var_74, 0x6e3708, 3)
var_4.b = 3
sub_412d60(&result_1, &var_74)
var_4.b = 0

if (var_60_2 u>= 0x10)
    j__free(var_74.d)

int32_t i_1 = 1
int32_t ebx = var_88
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x178) - *(arg1 + 0x174))
int32_t i_3 = 1
int32_t edx_2 = edx_1 s>> 2
int32_t* result = result_1

if ((edx_2 u>> 0x1f) + edx_2 s> 1)
    int32_t ecx_9 = 0x18
    var_94 = 0x18
    int32_t edx_6
    
    do
        int32_t* result_2 = result
        
        if (result != ebx)
            do
                int32_t* result_4
                
                if (result_2[5] u< 0x10)
                    result_4 = result_2
                else
                    result_4 = *result_2
                
                int32_t* result_5 = result_4
                int32_t i_2 = i_1
                int32_t* var_b4_2 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                    arg2)
                char var_5c
                int32_t* eax_12 = sub_4691f0(&var_5c, "%s_%02d.%s")
                var_4.b = 4
                char* eax_13 = sub_4028a0(&var_74, arg3)
                var_4.b = 5
                int32_t var_44
                sub_410a20(eax_13, eax_13, &var_44, eax_12)
                
                if (var_60_2 u>= 0x10)
                    j__free(var_74.d)
                
                var_60_2 = 0xf
                int32_t var_64_3 = 0
                var_74 = 0
                var_4.b = 8
                int32_t var_48
                
                if (var_48 u>= 0x10)
                    j__free(var_5c.d)
                
                var_48 = 0xf
                int32_t var_4c_1 = 0
                var_5c = 0
                bool eax_14
                
                if (sub_590700(arg4, &var_44) == 0)
                    eax_14 = sub_525610(arg4 + 0x30, &var_44) != 0
                else
                    eax_14 = true
                
                if (eax_14 != 0)
                    int32_t i_5 = i_3
                    int32_t* var_b0_1 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                        arg2)
                    int32_t var_2c
                    int32_t* eax_16 = sub_4691f0(&var_2c, "%s_%02d")
                    int32_t* edi_3 = *(arg1 + 0x174) + var_94
                    
                    if (edi_3 != eax_16)
                        if (edi_3[5] u>= 0x10)
                            j__free(*edi_3)
                        
                        edi_3[5] = 0xf
                        edi_3[4] = 0
                        *edi_3 = 0
                        
                        if (eax_16[5] u>= 0x10)
                            *edi_3 = *eax_16
                            *eax_16 = 0
                        else
                            void* eax_17 = eax_16[4]
                            
                            if (eax_17 != 0xffffffff)
                                _memcpy(edi_3, eax_16, eax_17 + 1, eax_4)
                        
                        edi_3[4] = eax_16[4]
                        edi_3[5] = eax_16[5]
                        eax_16[5] = 0xf
                        eax_16[4] = 0
                        *eax_16 = 0
                    
                    int32_t var_18
                    
                    if (var_18 u>= 0x10)
                        j__free(var_2c)
                    
                    ebx = var_88
                
                var_4.b = 0
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    j__free(var_44)
                
                i_1 = i_3
                result_2 = &result_2[6]
            while (result_2 != ebx)
            
            ecx_9 = var_94
        
        int32_t eax_22 = *(arg1 + 0x174)
        
        if (*(ecx_9 + eax_22 + 0x10) == 0)
            break
        
        i_1 += 1
        var_94 = ecx_9 + 0x18
        i_3 = i_1
        int32_t eax_23
        int32_t edx_5
        edx_5:eax_23 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x178) - eax_22)
        ecx_9 = var_94
        edx_6 = edx_5 s>> 2
        result = result_1
    while (i_1 s< (edx_6 u>> 0x1f) + edx_6)
    result = result_1

if (result != 0)
    int32_t* result_3 = result
    
    if (result != ebx)
        do
            if (result_3[5] u>= 0x10)
                j__free(*result_3)
            
            result_3[5] = 0xf
            result_3[4] = 0
            *result_3 = 0
            result_3 = &result_3[6]
        while (result_3 != ebx)
        
        result = result_1
    
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
