// 函数: sub_6127a0
// 地址: 0x6127a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743766
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_bc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = arg2
char* ebx = esi
char* result_2 = arg1
char* edi = esi
char* result_1 = result_2
int32_t var_ac = 0
struct _EXCEPTION_REGISTRATION_RECORD** i_1
i_1.b = *esi
char* result

if (i_1.b == 0)
label_612866:
    *(result_2 + 0x14) = 0xf
    *(result_2 + 0x10) = 0
    *result_2 = 0
    void* ecx_7
    
    if (*ebx != 0)
        char* ecx_26 = ebx
        
        do
            i_1.b = *ecx_26
            ecx_26 = &ecx_26[1]
        while (i_1.b != 0)
        
        ecx_7 = ecx_26 - &ecx_26[1]
        result_2 = result_1
    else
        ecx_7 = nullptr
    
    sub_403490(result_2, ebx, ecx_7)
    result = result_1
else
    while (true)
        if (i_1.b == 0x40)
            int32_t eax_3 = sx.d(esi[1])
            int32_t* eax_4 = eax_3 - 0x30
            char var_5c[0x10]
            char var_44
            int32_t var_30_1
            char var_2c
            int32_t var_18_1
            char* eax_14
            
            if (eax_3 == 0x30)
                var_30_1 = 0xf
                int32_t var_34_3 = 0
                var_44 = 0
                
                if (edi != esi)
                    eax_4 = sub_403490(&var_44, edi, esi - edi)
                
                int32_t var_8_4 = 0
                var_18_1 = 0xf
                int32_t var_1c_3 = 0
                var_2c = 0
                
                if (ebx != esi)
                    eax_4 = sub_403490(&var_2c, ebx, esi - ebx)
                
                var_8_4.b = 1
                eax_14 = sub_4176f0(eax_4.b, &var_2c, &var_5c, "::")
                var_8_4.b = 2
            label_612aff:
                sub_4177a0(eax_14, eax_14, result_1, &var_44)
                int32_t var_48
                
                if (var_48 u>= 0x10)
                    sub_403160(var_5c[0].d, var_48 + 1, 1)
                
                int32_t var_48_1 = 0xf
                int32_t var_4c_1 = 0
                var_5c[0] = 0
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                int32_t var_18_2 = 0xf
                int32_t var_1c_4 = 0
                var_2c = 0
                
                if (var_30_1 u>= 0x10)
                    sub_403160(var_44.d, var_30_1 + 1, 1)
                
                result = result_1
            else
                int32_t* eax_5 = eax_4 - 1
                
                if (eax_4 == 1)
                    var_30_1 = 0xf
                    int32_t var_34_2 = 0
                    var_44 = 0
                    
                    if (edi != esi)
                        eax_5 = sub_403490(&var_44, edi, esi - edi)
                    
                    int32_t var_8_3 = 3
                    var_18_1 = 0xf
                    int32_t var_1c_2 = 0
                    var_2c = 0
                    
                    if (ebx != esi)
                        eax_5 = sub_403490(&var_2c, ebx, esi - ebx)
                    
                    var_8_3.b = 4
                    eax_14 = sub_4176f0(eax_5.b, &var_2c, &var_5c, &data_76b694)
                    var_8_3.b = 5
                    goto label_612aff
                
                char i = eax_5.b - 1
                
                if (eax_5 == 1)
                    var_30_1 = 0xf
                    int32_t var_34_1 = 0
                    var_44 = 0
                    
                    if (edi != esi)
                        i = sub_403490(&var_44, edi, esi - edi)
                    
                    int32_t var_8_2 = 6
                    var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    
                    if (ebx != esi)
                        i = sub_403490(&var_2c, ebx, esi - ebx)
                    
                    var_8_2.b = 7
                    eax_14 = sub_4176f0(i, &var_2c, &var_5c, "::!")
                    var_8_2.b = 8
                    goto label_612aff
                
                bool cond:0_1 = esi[1] != 0
                int32_t var_78_1 = 0xf
                int32_t var_7c_1 = 0
                char var_8c = 0
                void* ecx_8
                
                if (cond:0_1)
                    char* ecx_9 = &esi[1]
                    
                    do
                        i = *ecx_9
                        ecx_9 = &ecx_9[1]
                    while (i != 0)
                    
                    ecx_8 = ecx_9 - &ecx_9[1]
                else
                    ecx_8 = nullptr
                
                char eax_6 = sub_403490(&var_8c, &esi[1], ecx_8)
                int32_t var_8_1 = 9
                int32_t var_60_1 = 0xf
                int32_t var_64_1 = 0
                char var_74 = 0
                
                if (ebx != esi)
                    eax_6 = sub_403490(&var_74, ebx, esi - ebx)
                
                var_8_1.b = 0xa
                char var_a4[0x10]
                void* eax_7 = sub_4176f0(eax_6, &var_74, &var_a4, "::")
                var_8_1.b = 0xb
                sub_4177a0(eax_7, eax_7, result_1, &var_8c)
                int32_t var_90
                
                if (var_90 u>= 0x10)
                    sub_403160(var_a4[0].d, var_90 + 1, 1)
                
                int32_t var_90_1 = 0xf
                int32_t var_94_1 = 0
                var_a4[0] = 0
                
                if (var_60_1 u>= 0x10)
                    sub_403160(var_74.d, var_60_1 + 1, 1)
                
                int32_t var_60_2 = 0xf
                int32_t var_64_2 = 0
                var_74 = 0
                
                if (var_78_1 u< 0x10)
                    result = result_1
                else
                    sub_403160(var_8c.d, var_78_1 + 1, 1)
                    result = result_1
            break
        
        if (i_1.b == 0x3a && esi[1] == i_1.b)
            esi = &esi[2]
            edi = esi
        else if (i_1.b == 0x28)
            for (i_1 = 1; i_1 s> 0; )
                int32_t ecx_1 = sx.d(esi[1])
                esi = &esi[1]
                
                if (ecx_1 == 0x28)
                    i_1 += 1
                else if (ecx_1 == 0x29)
                    i_1 -= 1
        else if (i_1.b == 0x3c)
            for (i_1 = 1; i_1 s> 0; )
                int32_t ecx_4 = sx.d(esi[1])
                esi = &esi[1]
                
                if (ecx_4 == 0x3c)
                    i_1 += 1
                else if (ecx_4 == 0x3e)
                    i_1 -= 1
        else if (i_1.b u< 0x81 || i_1.b u> 0x9f)
            i_1.b += 0x20
            
            if (i_1.b u> 0xf)
                esi = &esi[1]
            else
                esi = &esi[2]
        else
            esi = &esi[2]
        
        i_1.b = *esi
        
        if (i_1.b == 0)
            goto label_612866

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
