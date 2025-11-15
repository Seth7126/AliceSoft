// 函数: sub_4662b0
// 地址: 0x4662b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c7e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result
void* var_98_5
void* var_94_7
char var_44
char* var_30_1
void* var_2c
char* var_18
int32_t* eax_70
int32_t* esi_5

if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
label_466927:
    var_30_1 = 0xf
    int32_t var_34_4 = 0
    var_44 = 0
    sub_403490(&var_44, 0x75eb80, 0x26)
    int32_t var_8_15 = 0
    esi_5 = *(arg1 + 4)
    eax_70 = sub_4175e0(arg1, &var_44, &var_2c, U"\n")
    var_8_15.b = 1
label_466969:
    sub_4055a0(esi_5, eax_70, 0, 0xffffffff)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, &var_18[1], 1)
    
    if (var_30_1 u< 0x10)
    label_46699c:
        result.b = 0
    else
        int32_t var_90_16 = 1
        var_94_7 = &var_30_1[1]
        var_98_5 = var_44.d
    label_466994:
        sub_403160(var_98_5, var_94_7, 1)
    label_46699c_1:
        result.b = 0
else
    result = **(arg2 + 0x24)
    *(arg2 + 0x24) = result
    
    if (*(arg2 + 0x20) == 0 || result == *(arg2 + 0x1c))
        goto label_466927
    
    void* esi_2 = &result[8]
    void* var_60_1 = esi_2
    
    if (result == 0xfffffff8)
        goto label_466927
    
    if (*(esi_2 + 0x30) == 8)
        int32_t var_78_1 = 0xffffffff
        int32_t edx_1 = (*(*arg3 + 8))(eax_2)
        
        while (true)
            int32_t ecx_1 = *(esi_2 + 0x30)
            
            if (ecx_1 != 4 && ecx_1 != 0x20 && ecx_1 != 8)
                int32_t eax_7 = *(esi_2 + 0x34)
                
                if (var_78_1 == eax_7)
                    sub_403360(&var_2c, 0x75ebf0)
                    int32_t var_8_14 = 4
                    sub_45ebd0(*(arg1 + 4), &var_2c, esi_2)
                    break
                
                var_78_1 = eax_7
                void* esi_3 = nullptr
                *(arg2 + 0x24) = *(*(arg2 + 0x24) + 4)
                
                if ((arg3[3] - arg3[2]) s>> 2 s<= 0)
                label_4666b5:
                    esi_2 = var_60_1
                    edx_1 += 1
                    continue
                
                while (true)
                    void* eax_16
                    
                    if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                        eax_16 = nullptr
                    else
                        void* eax_15 = **(arg2 + 0x24)
                        *(arg2 + 0x24) = eax_15
                        
                        if (*(arg2 + 0x20) == 0 || eax_15 == *(arg2 + 0x1c))
                            eax_16 = nullptr
                        else
                            eax_16 = eax_15 + 8
                    
                    var_60_1 = eax_16
                    
                    if (eax_16 == 0)
                        var_30_1 = 0xf
                        int32_t var_34_3 = 0
                        var_44 = 0
                        sub_403490(&var_44, 0x75eba8, 0x22)
                        int32_t var_8_13 = 5
                        esi_5 = *(arg1 + 4)
                        eax_70 = sub_4175e0(arg1, &var_44, &var_2c, U"\n")
                        var_8_13.b = 6
                        goto label_466969
                    
                    void* var_90_3
                    
                    if (*(eax_16 + 0x30) == 9)
                        if (arg3[5] != arg3[6])
                            goto label_466329
                        
                        sub_403360(&var_2c, 0x75eaa8)
                        int32_t var_8_12 = 7
                        var_90_3 = var_60_1
                    else
                        void* const var_70_1
                        void* const edx_2
                        
                        if ((*(*arg3 + 8))() s> edx_1)
                            if (edx_1 s>= 0)
                                if ((*(*arg3 + 8))() s> edx_1)
                                    edx_2 = *(arg3[5] + (edx_1 << 2))
                                else
                                    edx_2 = nullptr
                            else
                                edx_2 = nullptr
                            
                            var_70_1 = edx_2
                        else
                            void* eax_19 = sub_45fd50(arg3)
                            edx_2 = eax_19
                            var_70_1 = eax_19
                        
                        void* const var_68_1
                        
                        if (esi_3 s< 0)
                            var_68_1 = nullptr
                        else if ((arg3[3] - arg3[2]) s>> 2 s> esi_3)
                            var_68_1 = *(arg3[2] + (esi_3 << 2))
                        else
                            var_68_1 = nullptr
                        
                        void* eax_28 = sub_45f690(edx_2, *(var_60_1 + 0x34))
                        void* var_6c = eax_28
                        int32_t ecx_9 = *(var_60_1 + 0x30)
                        void* edx_5
                        
                        if (ecx_9 == 5 || ecx_9 == 4 || ecx_9 == 0x20)
                            void* eax_29
                            eax_29.b = *(var_68_1 + 4)
                            
                            if (eax_29.b == 0)
                                var_6c = esi_3 + 1
                                sub_403360(&var_2c, 0x75ead0)
                                int32_t var_8_11 = 0xa
                                void** eax_82 = sub_409350(&var_6c, &var_2c, &var_44, &var_6c)
                                var_8_11.b = 0xb
                                sub_45ebd0(*(arg1 + 4), eax_82, var_60_1)
                                sub_403320(&var_44)
                                sub_403320(&var_2c)
                                goto label_46699c_2
                            
                            *(eax_28 + 0x34) = *(var_68_1 + 8)
                            *(eax_28 + 0x3c) = *(var_68_1 + 0x24)
                            *(var_6c + 0x40) = sub_462f40(sub_462f40(*(var_68_1 + 0x28)))
                            void** eax_38 = sub_470a70(var_68_1, &var_2c)
                            int32_t var_8_2 = 0xc
                            sub_46df20(var_6c, eax_38)
                            int32_t var_8_3 = 0xffffffff
                            
                            if (var_18 u>= 0x10)
                                sub_403160(var_2c, &var_18[1], 1)
                            
                            edx_5 = var_60_1
                            goto label_466552
                        
                        if (ecx_9 != 0x12 || *(var_68_1 + 8) == 3)
                            if (sub_4686c0(arg1, eax_28, arg2, *(var_68_1 + 8)).b == 0)
                                goto label_46699c_2
                            
                            if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                                edx_5 = nullptr
                            else
                                void* eax_32 = **(arg2 + 0x24)
                                *(arg2 + 0x24) = eax_32
                                
                                if (*(arg2 + 0x20) == 0 || eax_32 == *(arg2 + 0x1c))
                                    edx_5 = nullptr
                                else
                                    edx_5 = eax_32 + 8
                            
                            var_60_1 = edx_5
                            
                            if (edx_5 != 0)
                            label_466552:
                                int32_t eax_44 = *(edx_5 + 0x30)
                                
                                if (eax_44 != 5)
                                label_4665aa:
                                    
                                    if (eax_44 == 4 || eax_44 == 0x20)
                                    label_4665bb:
                                        esi_3 += 1
                                        
                                        if (esi_3 s>= (arg3[3] - arg3[2]) s>> 2)
                                            goto label_4666a3
                                        
                                        while (true)
                                            void* const ecx_16
                                            
                                            if (esi_3 s< 0)
                                                ecx_16 = nullptr
                                            else if ((arg3[3] - arg3[2]) s>> 2 s> esi_3)
                                                ecx_16 = *(arg3[2] + (esi_3 << 2))
                                            else
                                                ecx_16 = nullptr
                                            
                                            void* eax_54 = sub_45f690(var_70_1, *(edx_5 + 0x34))
                                            var_6c = eax_54
                                            
                                            if (*(ecx_16 + 4) == 0)
                                                var_6c = esi_3 + 1
                                                sub_403360(&var_2c, 0x75ed70)
                                                int32_t var_8_10 = 0xf
                                                char* eax_75 =
                                                    sub_409350(&var_6c, &var_2c, &var_44, &var_6c)
                                                var_8_10.b = 0x10
                                                sub_45ebd0(*(arg1 + 4), eax_75, var_60_1)
                                                int32_t var_30
                                                
                                                if (var_30 u>= 0x10)
                                                    sub_403160(var_44.d, var_30 + 1, 1)
                                                
                                                int32_t var_30_2 = 0xf
                                                int32_t var_34_2 = 0
                                                var_44 = 0
                                                break
                                            
                                            *(eax_54 + 0x34) = *(ecx_16 + 8)
                                            *(eax_54 + 0x3c) = *(ecx_16 + 0x24)
                                            *(var_6c + 0x40) =
                                                sub_462f40(sub_462f40(*(ecx_16 + 0x28)))
                                            char var_5c
                                            void** eax_57 = sub_470a70(ecx_16, &var_5c)
                                            int32_t var_8_4 = 0x11
                                            sub_46df20(var_6c, eax_57)
                                            int32_t var_8_5 = 0xffffffff
                                            int32_t var_48
                                            
                                            if (var_48 u>= 0x10)
                                                sub_403160(var_5c.d, var_48 + 1, 1)
                                            
                                            esi_3 += 1
                                            edx_5 = var_60_1
                                            int32_t eax_62 = (arg3[3] - arg3[2]) s>> 2
                                            var_48 = 0xf
                                            int32_t var_4c_1 = 0
                                            var_5c = 0
                                            
                                            if (esi_3 s>= eax_62)
                                                goto label_4666a3
                                        
                                        break
                                    
                                    sub_403360(&var_2c, 0x75ece0)
                                    int32_t var_8_9 = 0xe
                                else
                                    if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                                        edx_5 = nullptr
                                    else
                                        void* eax_43 = **(arg2 + 0x24)
                                        *(arg2 + 0x24) = eax_43
                                        
                                        if (*(arg2 + 0x20) == 0 || eax_43 == *(arg2 + 0x1c))
                                            edx_5 = nullptr
                                        else
                                            edx_5 = eax_43 + 8
                                    
                                    var_60_1 = edx_5
                                    
                                    if (edx_5 == 0)
                                        sub_403360(&var_2c, 0x75ed08)
                                        int32_t var_8_8 = 0xd
                                        sub_45eb40(*(arg1 + 4), &var_2c)
                                        sub_403320(&var_2c)
                                        goto label_46699c_2
                                    
                                    eax_44 = *(edx_5 + 0x30)
                                    
                                    if (eax_44 == 4)
                                        goto label_4665bb
                                    
                                    if (eax_44 == 0x20)
                                        goto label_4665aa
                                    
                                    *(arg2 + 0x24) = *(*(arg2 + 0x24) + 4)
                                label_4666a3:
                                    esi_3 += 1
                                    
                                    if (esi_3 s>= (arg3[3] - arg3[2]) s>> 2)
                                        goto label_4666b5
                                    
                                    continue
                                
                                var_90_3 = var_60_1
                            else
                                sub_403360(&var_2c, 0x75eb34)
                                int32_t var_8_1 = 9
                                var_90_3 = nullptr
                        else
                            sub_403360(&var_2c, "string")
                            int32_t var_8_7 = 8
                            var_90_3 = var_60_1
                    
                    sub_45ebd0(*(arg1 + 4), &var_2c, var_90_3)
                    sub_403320(&var_2c)
                    goto label_46699c_2
                
                break
            
            if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                esi_2 = nullptr
            else
                void* eax_68 = **(arg2 + 0x24)
                *(arg2 + 0x24) = eax_68
                
                if (*(arg2 + 0x20) == 0 || eax_68 == *(arg2 + 0x1c))
                    esi_2 = nullptr
                else
                    esi_2 = eax_68 + 8
            
            var_60_1 = esi_2
            
            if (esi_2 == 0)
                var_30_1 = 0xf
                void* var_34_1 = esi_2
                var_44 = 0
                sub_403490(&var_44, 0x75eb5c, 0x22)
                int32_t var_8_6 = 2
                esi_5 = *(arg1 + 4)
                eax_70 = sub_4175e0(arg1, &var_44, &var_2c, U"\n")
                var_8_6.b = 3
                goto label_466969
        
        if (var_18 u>= 0x10)
            int32_t var_90_12 = 1
            var_94_7 = &var_18[1]
            var_98_5 = var_2c
            goto label_466994
        
    label_46699c_2:
        result.b = 0
    else
    label_466329:
        result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
