// 函数: sub_4729b0
// 地址: 0x4729b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72dbc9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char edx = 0
int32_t* result = *(arg1 + 0x1c)
char var_a5 = 0
void* esi = *result
*(arg1 + 0x24) = esi

if (*(arg1 + 0x20) != 0 && esi != result)
    int32_t* i = esi + 8
    
    if (esi != 0xfffffff8)
        do
            int32_t* i_4
            
            if (i[5] u< 0x10)
                i_4 = i
            else
                i_4 = *i
            
            int32_t eax_4 = 5
            
            if (i[4] u< 5)
                eax_4 = i[4]
            
            int32_t edi_1 = sub_406ac0(eax_4, "const", i_4, eax_4)
            
            if (edi_1 == 0)
                int32_t eax_6 = i[4]
                
                if (eax_6 u>= 5)
                    edi_1 = neg.d(sbb.d(edi_1, edi_1, 5 u< eax_6))
                else
                    edi_1 = 0xffffffff
            
            if (sub_407560(i, "#define") == 0)
                if (edi_1 == 0)
                    goto label_472a86
                
                *(arg1 + 0x24) = **(arg1 + 0x24)
                edx = var_a5
            else
                char var_48
                
                if (edi_1 != 0)
                label_472c2f:
                    void var_a4
                    sub_4691b0(&var_a4, i)
                    int32_t var_8_3 = 1
                    int32_t var_c8
                    __builtin_memset(&var_c8, 0, 0x18)
                    void* eax_36
                    
                    do
                        int32_t var_1c_1 = 0xf
                        int32_t var_20_1 = 0
                        char var_30 = 0
                        int32_t* var_e4_7 = arg2
                        var_8_3.b = 4
                        struct _EXCEPTION_REGISTRATION_RECORD** var_bc
                        
                        if (sub_472ef0(arg1, &var_30, &var_bc, &var_a4, &var_c8) == 0)
                            int32_t var_34_2 = 0xf
                            int32_t var_38_2 = 0
                            var_48 = 0
                            sub_403490(&var_48, "#define/const", 0x54)
                            var_8_3.b = 5
                            sub_45ebd0(*(arg1 + 0x28), &var_48, &var_a4)
                            
                            if (var_34_2 u>= 0x10)
                                sub_403160(var_48.d, var_34_2 + 1, 1)
                            
                            var_a5 = 1
                            *(arg1 + 0x24) = **(arg1 + 0x24)
                            sub_4676f0(&var_bc)
                            
                            if (var_1c_1 u>= 0x10)
                                sub_403160(var_30.d, var_1c_1 + 1, 1)
                            
                            int32_t var_1c_3 = 0xf
                            int32_t var_20_3 = 0
                            var_30 = 0
                            break
                        
                        int32_t var_58_1 = 0xf
                        int32_t var_5c_1 = 0
                        char var_6c = 0
                        sub_403590(&var_6c, &var_30, 0, 0xffffffff)
                        var_8_3.b = 6
                        var_8_3.b = 7
                        int32_t* var_e4_9 = arg2
                        char* var_e8_4 = &var_6c
                        void* var_d0
                        void var_54
                        sub_4745a0(arg2, &var_d0, sub_4742d0(&var_54, &var_bc))
                        var_8_3.b = 4
                        sub_4676f0(&var_54)
                        
                        if (var_58_1 u>= 0x10)
                            sub_403160(var_6c.d, var_58_1 + 1, 1)
                        
                        int32_t var_58_2 = 0xf
                        int32_t var_5c_2 = 0
                        var_6c = 0
                        sub_4739f0(&var_c8, &var_bc)
                        sub_4676f0(&var_bc)
                        
                        if (var_1c_1 u>= 0x10)
                            sub_403160(var_30.d, var_1c_1 + 1, 1)
                        
                        int32_t var_1c_2 = 0xf
                        int32_t var_20_2 = 0
                        var_30 = 0
                        
                        if (sub_471ff0(arg1) == 0)
                            break
                        
                        eax_36 = sub_471ff0(arg1)
                    while (*(eax_36 + 0x30) == 5)
                    sub_4676f0(&var_c8)
                    int32_t var_8_4 = 0xffffffff
                    sub_408940(&var_a4)
                    edx = var_a5
                else
                label_472a86:
                    int32_t* esi_1 = *(arg1 + 0x24)
                    int32_t edi_3 = *esi_1
                    *esi_1[1] = edi_3
                    *(*esi_1 + 4) = esi_1[1]
                    *(arg1 + 0x20) -= 1
                    sub_408940(&esi_1[2])
                    sub_403160(esi_1, 1, 0x40)
                    *(arg1 + 0x24) = edi_3
                    i = sub_471ff0(arg1)
                    int32_t eax_25
                    
                    if (i != 0)
                        int32_t* i_1
                        
                        if (i[5] u< 0x10)
                            i_1 = i
                        else
                            i_1 = *i
                        
                        int32_t edi_4 = i[4]
                        int32_t eax_13 = 3
                        
                        if (edi_4 u< 3)
                            eax_13 = edi_4
                        
                        int32_t eax_14 = sub_406ac0(eax_13, 0x75f93c, i_1, eax_13)
                        
                        if (eax_14 == 0)
                            if (edi_4 u>= 3)
                                eax_14 = neg.d(sbb.d(3, 3, 3 u< edi_4))
                            else
                                eax_14 = 0xffffffff
                        
                        int32_t ecx_6 = 1
                        
                        if (eax_14 == 0)
                            ecx_6 = 0x11
                        
                        int32_t* i_2
                        
                        if (i[5] u< 0x10)
                            i_2 = i
                        else
                            i_2 = *i
                        
                        int32_t eax_16 = 5
                        
                        if (edi_4 u< 5)
                            eax_16 = edi_4
                        
                        int32_t eax_17 = sub_406ac0(eax_16, "float", i_2, eax_16)
                        bool cond:5_1 = eax_17 == 0
                        
                        if (eax_17 == 0)
                            int32_t eax_18
                            
                            if (edi_4 u>= 5)
                                eax_18 = neg.d(sbb.d(5, 5, 5 u< edi_4))
                            else
                                eax_18 = 0xffffffff
                            
                            cond:5_1 = eax_18 == 0
                        
                        int32_t eax_20 = ecx_6
                        
                        if (cond:5_1)
                            eax_20 = 0x11
                        
                        int32_t* i_3
                        
                        if (i[5] u< 0x10)
                            i_3 = i
                        else
                            i_3 = *i
                        
                        int32_t eax_21 = 6
                        
                        if (edi_4 u< 6)
                            eax_21 = edi_4
                        
                        int32_t eax_22 = sub_406ac0(eax_21, "string", i_3, eax_21)
                        bool cond:7_1 = eax_22 == 0
                        
                        if (eax_22 == 0)
                            int32_t eax_23
                            
                            if (edi_4 u>= 6)
                                eax_23 = neg.d(sbb.d(6, 6, 6 u< edi_4))
                            else
                                eax_23 = 0xffffffff
                            
                            cond:7_1 = eax_23 == 0
                        
                        eax_25 = eax_20
                        
                        if (cond:7_1)
                            eax_25 = 0x12
                    
                    if (i != 0 && eax_25 != 1)
                        goto label_472c2f
                    
                    int32_t var_34_1 = 0xf
                    int32_t var_38_1 = 0
                    var_48 = 0
                    sub_403490(&var_48, "const", 0x53)
                    int32_t var_8_1 = 0
                    sub_45ebd0(*(arg1 + 0x28), &var_48, i)
                    int32_t var_8_2 = 0xffffffff
                    
                    if (var_34_1 u>= 0x10)
                        sub_403160(var_48.d, var_34_1 + 1, 1)
                    
                    edx = 1
                    var_a5 = 1
                    *(arg1 + 0x24) = **(arg1 + 0x24)
            
            i = sub_471ff0(arg1)
        while (i != 0)

result.b = edx
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
