// 函数: sub_46c3c0
// 地址: 0x46c3c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d2b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_8c = ebx
int32_t var_98 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
char* edx = *(esi + 4)
int32_t var_88 = 0
char var_60

if (*edx == 0x22)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    void* edx_1 = &edx[1]
    int32_t var_8_2 = 1
    *(esi + 4) = edx_1
    
    if (*(esi + 0xc) u<= edx_1)
    label_46c548:
        void* var_9c_5 = arg1
        sub_471d90(arg2, &var_30, 0x12)
    else
        while (true)
            arg1.b = *edx_1
            char var_7c = arg1.b
            
            if (arg1.b u< 0x81)
                if (arg1.b + 0x20 u> 0xf)
                    goto label_46c4ac
                
                arg1 = sub_407430(&var_30, edx_1, 2)
                *(esi + 4) += 1
            else if (arg1.b u<= 0x9f || arg1.b + 0x20 u<= 0xf)
                arg1 = sub_407430(&var_30, edx_1, 2)
                *(esi + 4) += 1
            else
            label_46c4ac:
                
                if (arg1.b == 0xd || arg1.b == 0xa)
                    char* eax_9 = &var_30
                    
                    if (var_1c_1 u>= 0x10)
                        eax_9 = var_30.d
                    
                    var_7c.d = eax_9
                    int32_t var_4c_2 = 0xf
                    int32_t var_50_2 = 0
                    var_60 = 0
                    sub_403490(&var_60, 0x75f6b0, 0x36)
                    var_8_2.b = 2
                    char var_48
                    char* eax_11 = sub_409240(&var_7c, &var_60, &var_48, &var_7c)
                    var_8_2.b = 3
                    var_8_2.b = 4
                    void* var_78
                    sub_4055a0(*(esi + 0x2c), sub_4175e0(eax_11, eax_11, &var_78, \n"), 0, 
                        0xffffffff)
                    int32_t var_64
                    
                    if (var_64 u>= 0x10)
                        sub_403160(var_78, var_64 + 1, 1)
                    
                    int32_t var_34
                    
                    if (var_34 u>= 0x10)
                        sub_403160(var_48.d, var_34 + 1, 1)
                    
                    var_8_2.b = 1
                    int32_t var_34_1 = 0xf
                    int32_t var_38_1 = 0
                    var_48 = 0
                    
                    if (var_4c_2 u>= 0x10)
                        sub_403160(var_60.d, var_4c_2 + 1, 1)
                    
                    int32_t var_34_2 = 0xf
                    int32_t var_38_2 = 0
                    var_48 = 0
                    int32_t var_9c_8 = sub_403490(&var_48, 0x75ce37, nullptr)
                    var_8_2.b = 5
                    sub_471d90(arg2, &var_48, 0)
                    
                    if (var_34_2 u>= 0x10)
                        sub_403160(var_48.d, var_34_2 + 1, 1)
                    
                    int32_t var_34_3 = 0xf
                    int32_t var_38_3 = 0
                    var_48 = 0
                    break
                
                if (arg1.b != 0x5c)
                    if (arg1.b == 0x22)
                        *(esi + 4) = edx_1 + 1
                        goto label_46c548
                    
                    arg1 = sub_405500(&var_30, 1, (var_7c.d).b)
                else
                    *(esi + 4) = edx_1 + 1
                    char var_80_1
                    
                    if (*(esi + 0xc) u> edx_1 + 1)
                        ebx.b = *(edx_1 + 1)
                        var_80_1 = ebx.b
                        
                        if (ebx.b == 0x6e)
                            arg1 = sub_405500(&var_30, 1, 0xa)
                        else if (ebx.b != 0x22)
                            if (ebx.b != 0x5c)
                                goto label_46c4cc
                            
                            arg1 = sub_405500(&var_30, 1, 0x5c)
                        else
                            arg1 = sub_405500(&var_30, 1, 0x22)
                    else
                        ebx.b = 0
                        var_80_1 = 0
                    label_46c4cc:
                        sub_405500(&var_30, 1, 0x5c)
                        sub_405500(&var_30, 1, var_80_1)
                        char eax_3
                        eax_3, arg1 = sub_404d60(ebx.b)
                        
                        if (eax_3 != 0)
                            *(esi + 4) += 1
                            char* eax_4 = *(esi + 4)
                            char var_9c_4
                            
                            if (*(esi + 0xc) u> eax_4)
                                eax_4.b = *eax_4
                                var_9c_4 = eax_4.b
                            else
                                var_9c_4 = 0
                            
                            arg1 = sub_405500(&var_30, 1, var_9c_4)
            
            *(esi + 4) += 1
            edx_1 = *(esi + 4)
            
            if (*(esi + 0xc) u<= edx_1)
                goto label_46c548
    
    if (var_1c_1 u>= 0x10)
        int32_t var_9c_6 = 1
        sub_403160(var_30.d, var_1c_1 + 1, 1)
else
    int32_t var_4c_1 = 0xf
    int32_t var_50_1 = 0
    var_60 = 0
    int32_t var_9c_1 = sub_403490(&var_60, 0x75ce35, nullptr)
    int32_t var_8_1 = 0
    sub_471d90(arg2, &var_60, 0x12)
    
    if (var_4c_1 u>= 0x10)
        int32_t var_9c_2 = 1
        sub_403160(var_60.d, var_4c_1 + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
