// 函数: sub_418ff0
// 地址: 0x418ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728539
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t* var_48 = arg1
int32_t var_4c = 0
int32_t* var_50 = arg1

if (edi[5] u>= 0x10)
    edi = *edi

arg1[4] = 0
arg1[5] = 0
arg1[5] = 0xf
bool cond:1 = arg1[5] u< 0x10
arg1[4] = 0
char* eax_3

if (cond:1)
    eax_3 = arg1
else
    eax_3 = *arg1

*eax_3 = 0
int32_t var_8_1 = 0
int32_t* ecx = edi
int32_t ebx
ebx.b = *edi
int32_t var_4c_1 = 1
int32_t* var_48_1 = ecx

while (ebx.b != 0)
    if (ebx.b u< 0x81)
        if (ebx.b + 0x20 u> 0xf)
            goto label_419156
        
        goto label_419095
    
    char* ecx_6
    
    if (ebx.b u<= 0x9f || ebx.b + 0x20 u<= 0xf)
    label_419095:
        int32_t eax_5 = arg1[4]
        int32_t ecx_1 = arg1[5]
        
        if (eax_5 == ecx_1)
            if (eax_5 + 1 u> 0xfffffffe)
                sub_6d0927("string too long")
                noreturn
            
            if (ecx_1 u< eax_5 + 1)
                sub_403830(arg1, eax_5 + 1, arg1[4])
            else if (eax_5 == 0xffffffff)
                bool cond:2_1 = arg1[5] u< 0x10
                arg1[4] = eax_5 + 1
                int32_t* eax_7
                
                if (cond:2_1)
                    eax_7 = arg1
                else
                    eax_7 = *arg1
                
                *eax_7 = 0
        
        char* ecx_3
        
        if (arg1[5] u< 0x10)
            ecx_3 = arg1
        else
            ecx_3 = *arg1
        
        ecx_3[arg1[4]] = ebx.b
        arg1[4] += 1
        ecx_3[arg1[4]] = 0
        int32_t eax_10 = arg1[4]
        int32_t ecx_4 = arg1[5]
        ebx.b = *(edi + 1)
        
        if (eax_10 == ecx_4)
            if (eax_10 + 1 u> 0xfffffffe)
                sub_6d0927("string too long")
                noreturn
            
            if (ecx_4 u< eax_10 + 1)
                sub_403830(arg1, eax_10 + 1, arg1[4])
            else if (eax_10 == 0xffffffff)
                bool cond:5_1 = arg1[5] u< 0x10
                arg1[4] = eax_10 + 1
                int32_t* eax_12
                
                if (cond:5_1)
                    eax_12 = arg1
                else
                    eax_12 = *arg1
                
                *eax_12 = 0
        
        if (arg1[5] u< 0x10)
            ecx_6 = arg1
            ecx_6[arg1[4]] = ebx.b
            arg1[4] += 1
            edi += 2
            ecx_6[arg1[4]] = 0
            ecx = var_48_1
        else
            ecx_6 = *arg1
            ecx_6[arg1[4]] = ebx.b
            arg1[4] += 1
            edi += 2
            ecx_6[arg1[4]] = 0
            ecx = var_48_1
    else
    label_419156:
        
        if (ebx.b == 0x3a)
            int32_t eax_15 = arg1[4]
            int32_t ecx_7 = arg1[5]
            
            if (eax_15 == ecx_7)
                if (eax_15 + 1 u> 0xfffffffe)
                    sub_6d0927("string too long")
                    noreturn
                
                if (ecx_7 u< eax_15 + 1)
                    sub_403830(arg1, eax_15 + 1, arg1[4])
                else if (eax_15 == 0xffffffff)
                    bool cond:3_1 = arg1[5] u< 0x10
                    arg1[4] = eax_15 + 1
                    int32_t* eax_17
                    
                    if (cond:3_1)
                        eax_17 = arg1
                    else
                        eax_17 = *arg1
                    
                    *eax_17 = 0
            
            int32_t* ecx_9
            
            if (arg1[5] u< 0x10)
                ecx_9 = arg1
            else
                ecx_9 = *arg1
            
            *(ecx_9 + arg1[4]) = 0x3a
            arg1[4] += 1
            edi += 1
            *(arg1[4] + ecx_9) = 0
            ecx = edi
            var_48_1 = ecx
        else if (ebx.b != 0x40)
            int32_t eax_24 = arg1[4]
            int32_t ecx_12 = arg1[5]
            
            if (eax_24 == ecx_12)
                if (eax_24 + 1 u> 0xfffffffe)
                    sub_6d0927("string too long")
                    noreturn
                
                if (ecx_12 u< eax_24 + 1)
                    sub_403830(arg1, eax_24 + 1, arg1[4])
                else if (eax_24 == 0xffffffff)
                    bool cond:4_1 = arg1[5] u< 0x10
                    arg1[4] = eax_24 + 1
                    int32_t* eax_26
                    
                    if (cond:4_1)
                        eax_26 = arg1
                    else
                        eax_26 = *arg1
                    
                    *eax_26 = 0
            
            if (arg1[5] u< 0x10)
                ecx_6 = arg1
            else
                ecx_6 = *arg1
            
            ecx_6[arg1[4]] = ebx.b
            arg1[4] += 1
            edi += 1
            ecx_6[arg1[4]] = 0
            ecx = var_48_1
        else
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            
            if (ecx != edi)
                sub_403490(&var_2c, ecx, edi - ecx)
            
            edi += 1
            int32_t var_8_2 = 1
            char eax_4 = *edi
            void* var_44
            void** eax_30
            
            if (eax_4 == 0x30)
                eax_30 = sub_419600(&var_2c, "::", &var_44, &var_2c)
                var_8_2.b = 2
            label_4192f7:
                sub_4055a0(arg1, eax_30, 0, 0xffffffff)
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44, var_30 + 1, 1)
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                break
            
            if (eax_4 == 0x31)
                eax_30 = sub_419600(&var_2c, &data_75cf94, &var_44, &var_2c)
                var_8_2.b = 3
                goto label_4192f7
            
            if (eax_4 == 0x32)
                eax_30 = sub_419600(&var_2c, "::!", &var_44, &var_2c)
                var_8_2.b = 4
                goto label_4192f7
            
            sub_407430(arg1, "::", 2)
            var_8_2.b = 0
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            ecx = var_48_1
    ebx.b = *edi

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
