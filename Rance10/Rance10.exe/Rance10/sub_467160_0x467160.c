// 函数: sub_467160
// 地址: 0x467160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c950
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3

if (*(arg3 + 0x20) != 0)
    eax_3 = *(arg3 + 0x24)

void* ebx

if (*(arg3 + 0x20) == 0 || eax_3 == *(arg3 + 0x1c))
    ebx = nullptr
else
    ebx = eax_3 + 8

void* edx = &arg2[0x8c]
void* var_48 = edx
char* result

while (true)
    void* eax_7
    
    if (*(arg3 + 0x20) == 0 || *(arg3 + 0x24) == *(arg3 + 0x1c))
        eax_7 = nullptr
    else
        void* eax_6 = **(arg3 + 0x24)
        *(arg3 + 0x24) = eax_6
        
        if (*(arg3 + 0x20) == 0 || eax_6 == *(arg3 + 0x1c))
            eax_7 = nullptr
        else
            eax_7 = eax_6 + 8
    
    char var_2c
    char* var_18_1
    
    if (eax_7 == 0)
        var_18_1 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_403490(&var_2c, 0x75eef0, 0x12)
        int32_t var_8_4 = 0
    label_467341:
        sub_45ebd0(*(arg1 + 4), &var_2c, ebx)
        
        if (var_18_1 u>= 0x10)
            int32_t var_60_7 = 1
            sub_403160(var_2c.d, &var_18_1[1], 1)
    else
        if (*(eax_7 + 0x30) == 0xb)
            goto label_4672b8
        
        void* eax_9
        int32_t ecx_3
        eax_9, ecx_3 = sub_45f690(edx, *(sub_471ff0(arg3) + 0x34))
        int32_t var_60_2 = ecx_3
        
        if (sub_468c30(arg1, eax_9, arg3).b != 0)
            void* eax_13
            
            if (*(arg3 + 0x20) == 0 || *(arg3 + 0x24) == *(arg3 + 0x1c))
                eax_13 = nullptr
            else
                void* eax_12 = **(arg3 + 0x24)
                *(arg3 + 0x24) = eax_12
                
                if (*(arg3 + 0x20) == 0 || eax_12 == *(arg3 + 0x1c))
                    eax_13 = nullptr
                else
                    eax_13 = eax_12 + 8
            
            if (eax_13 == 0)
                var_18_1 = 0xf
                int32_t var_1c_1 = 0
                var_2c = 0
                sub_403490(&var_2c, 0x75eedc, 0x12)
                int32_t var_8_2 = 1
                goto label_467341
            
            if (*(eax_13 + 0x30) == 0xb)
                edx = var_48
            label_4672b8:
                
                if (*(edx + 4) != *(edx + 8))
                    *(arg2 + 0x34) = 5
                    result.b = 1
                    break
                
                char* var_30_1 = 0xf
                int32_t var_34_1 = 0
                char var_44 = 0
                sub_403490(&var_44, 0x75ef04, 0x20)
                int32_t var_8_3 = 3
                sub_45ebd0(*(arg1 + 4), &var_44, ebx)
                
                if (var_30_1 u>= 0x10)
                    int32_t var_60_5 = 1
                    sub_403160(var_44.d, &var_30_1[1], 1)
            else
                edx = var_48
                
                if (*(sub_471ff0(arg3) + 0x30) == 5)
                    continue
                else
                    sub_403360(&var_2c, 0x75ef28)
                    int32_t var_8_1 = 2
                    sub_45ebd0(*(arg1 + 4), &var_2c, ebx)
                    sub_403320(&var_2c)
    result.b = 0
    break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
