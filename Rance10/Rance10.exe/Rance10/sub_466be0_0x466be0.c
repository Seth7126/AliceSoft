// 函数: sub_466be0
// 地址: 0x466be0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c8fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg3
int32_t* var_78 = ecx
int32_t eax_3

if (*(arg2 + 0x20) != 0)
    eax_3 = *(arg2 + 0x24)

int32_t* result
void* var_a8_5
void* var_a4_8
void** var_a0_13
char var_2c
int32_t* var_18_1

if (*(arg2 + 0x20) == 0 || eax_3 == *(arg2 + 0x1c) || eax_3 == 0xfffffff8)
    var_18_1 = 0xf
    int32_t var_1c_6 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x75ec68, 0x22)
    int32_t var_8_9 = 0
    var_a0_13 = nullptr
label_46711f:
    sub_45ebd0(*(arg1 + 4), &var_2c, var_a0_13)
label_467127:
    
    if (var_18_1 u>= 0x10)
        int32_t var_a0_14 = 1
        var_a4_8 = var_18_1 + 1
        var_a8_5 = var_2c.d
    label_467133:
        sub_403160(var_a8_5, var_a4_8, 1)
    
label_46713b:
    result.b = 0
else
    int32_t edx_1 = 0
    int32_t var_80_1 = 0
    
    if (*(eax_3 + 0x38) != 0xd)
    label_466f43:
        result = *(arg2 + 0x24)
    label_466f49:
        *(arg2 + 0x24) = result[1]
    else
        while (true)
            int32_t ebx_1 = 1
            void* var_74
            int32_t* var_60
            void** edi_2
            
            while (true)
                if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                    edi_2 = nullptr
                else
                    void* eax_7 = **(arg2 + 0x24)
                    *(arg2 + 0x24) = eax_7
                    
                    if (*(arg2 + 0x20) == 0 || eax_7 == *(arg2 + 0x1c))
                        edi_2 = nullptr
                    else
                        edi_2 = eax_7 + 8
                
                if (edi_2 == 0)
                    var_18_1 = 0xf
                    int32_t var_1c_5 = 0
                    var_2c = 0
                    int32_t* eax_27 = sub_403490(&var_2c, 0x75ebcc, 0x22)
                    int32_t var_8_8 = 1
                    var_8_8.b = 2
                    sub_4055a0(*(arg1 + 4), sub_4175e0(eax_27, &var_2c, &var_74, \n"), 0, 
                        0xffffffff)
                    
                    if (var_60 u>= 0x10)
                        sub_403160(var_74, var_60 + 1, 1)
                    
                    goto label_467127
                
                if (edi_2[0xc] != 0xd)
                    break
                
                ebx_1 += 1
            
            if (ebx_1 == 0)
                var_18_1 = 0xf
                int32_t var_1c_4 = 0
                var_2c = 0
                sub_403490(&var_2c, 0x75ecbc, 0x22)
                var_a0_13 = edi_2
                int32_t var_8_7 = 3
                goto label_46711f
            
            if (edx_1 + 1 s< ebx_1)
                var_18_1 = 0xf
                int32_t var_1c_3 = 0
                var_2c = 0
                sub_403490(&var_2c, 0x75ec8c, 0x2e)
                var_a0_13 = edi_2
                int32_t var_8_6 = 4
                goto label_46711f
            
            int32_t edx_2 = edi_2[0xc]
            void* var_44
            int32_t* var_30
            
            if (edx_2 != 0x13 && edx_2 != 0x12)
                sub_403360(&var_44, 0x75ee44)
                int32_t var_8_3 = 5
            label_466f72:
                sub_45ebd0(*(arg1 + 4), &var_44, edi_2)
                
                if (var_30 u< 0x10)
                    goto label_46713b
                
                int32_t var_a0_11 = 1
                var_a4_8 = var_30 + 1
                var_a8_5 = var_44
                goto label_467133
            
            if (edx_1 + 1 == ebx_1 && ecx[7] != 0)
                sub_403360(&var_44, 0x75ee08)
                int32_t var_8_4 = 6
                goto label_466f72
            
            if (var_80_1 == ebx_1)
                ecx = ecx[0xd]
                var_78 = ecx
            else if (edx_1 + 1 != ebx_1)
                ecx = ecx[0xd]
                int32_t i_2 = var_80_1 - ebx_1
                var_78 = ecx
                
                if (i_2 s> 0)
                    int32_t i
                    
                    do
                        ecx = ecx[0xd]
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                    var_78 = ecx
            
            if (sub_4755f0(ecx, edi_2) != 0)
                var_18_1 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                sub_403490(&var_2c, 0x75ee80, 0x42)
                var_a0_13 = edi_2
                int32_t var_8_5 = 7
                goto label_46711f
            
            ecx = sub_475360(var_78, edi_2)
            edx_1 = ebx_1
            var_78 = ecx
            var_80_1 = edx_1
            
            if (*(arg2 + 0x20) == 0)
                break
            
            if (*(arg2 + 0x24) == *(arg2 + 0x1c))
                break
            
            result = **(arg2 + 0x24)
            *(arg2 + 0x24) = result
            
            if (*(arg2 + 0x20) == 0)
                break
            
            if (result == *(arg2 + 0x1c))
                break
            
            void* edi_3 = &result[2]
            
            if (edi_3 == 0)
                break
            
            void* ebx_2 = *(edi_3 + 0x30)
            
            if (ebx_2 == 0xc || ebx_2 == 6)
                char var_5c
                sub_403360(&var_5c, 0x75cdef)
                int32_t* edx_4 = var_78
                int32_t var_8_1 = 8
                void* i_1 = edx_4[0xd]
                int32_t var_48
                
                if (i_1 != 0)
                    do
                        char* eax_11 = sub_46de30(i_1, &var_74)
                        var_8_1.b = 9
                        char* eax_12 = sub_4176f0(eax_11.b, eax_11, &var_44, U".")
                        var_8_1.b = 0xa
                        char* eax_13 = sub_417750(eax_12, eax_12, &var_2c, &var_5c)
                        
                        if (&var_5c != eax_13)
                            if (var_48 u>= 0x10)
                                sub_403160(var_5c.d, var_48 + 1, 1)
                            
                            var_48 = 0xf
                            int32_t var_4c_1 = 0
                            var_5c = 0
                            sub_4056a0(&var_5c, eax_13)
                        
                        int32_t var_18
                        
                        if (var_18 u>= 0x10)
                            sub_403160(var_2c.d, var_18 + 1, 1)
                        
                        var_18 = 0xf
                        int32_t var_1c_1 = 0
                        var_2c = 0
                        
                        if (var_30 u>= 0x10)
                            sub_403160(var_44, var_30 + 1, 1)
                        
                        var_8_1.b = 8
                        var_30 = 0xf
                        int32_t var_34_1 = 0
                        var_44.b = 0
                        
                        if (var_60 u>= 0x10)
                            sub_403160(var_74, var_60 + 1, 1)
                        
                        i_1 = *(i_1 + 0x34)
                    while (i_1 != 0)
                    
                    edx_4 = var_78
                
                if (ebx_2 == 0xc)
                    ebx_2 = arg1
                    
                    if (sub_465960(ebx_2, arg2, sub_4752b0(edx_4, *(sub_471ff0(arg2) + 0x34))).b
                            != 0)
                        goto label_466ee8
                    
                    sub_403360(&var_74, 0x75ed54)
                    var_8_1.b = 0xc
                label_466fc0:
                    sub_45ebd0(*(ebx_2 + 4), &var_74, edi_3)
                    sub_403320(&var_74)
                    ebx_2.b = 0
                label_466fd9:
                    
                    if (var_48 u>= 0x10)
                        sub_403160(var_5c.d, var_48 + 1, 1)
                    
                    result.b = ebx_2.b
                    goto label_467140
                
                if (ebx_2 == 6)
                    ebx_2 = arg1
                    
                    if (sub_465a80(ebx_2, arg2, sub_4752b0(edx_4, *(sub_471ff0(arg2) + 0x34))).b
                            == 0)
                        sub_403360(&var_74, 0x75ede4)
                        var_8_1.b = 0xd
                        goto label_466fc0
                
            label_466ee8:
                
                if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                label_466fd1:
                    ebx_2.b = 1
                    goto label_466fd9
                
                result = **(arg2 + 0x24)
                *(arg2 + 0x24) = result
                
                if (*(arg2 + 0x20) == 0 || result == *(arg2 + 0x1c))
                    goto label_466fd1
                
                edi_3 = &result[2]
                
                if (edi_3 == 0)
                    goto label_466fd1
                
                int32_t var_8_2 = 0xffffffff
                sub_403320(&var_5c)
                ecx = var_78
                edx_1 = var_80_1
            else if (ebx_2 != 0xd)
                goto label_466f49
            
            if (*(edi_3 + 0x30) != 0xd)
                goto label_466f43
    
    result.b = 1
label_467140:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
