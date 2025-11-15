// 函数: sub_67c310
// 地址: 0x67c310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746758
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = nullptr
char* edi = nullptr
char* var_3c = nullptr
char* var_38 = nullptr
int32_t var_34 = 0
void* i = nullptr
int32_t var_8_1 = 0
void* i_1 = nullptr
char var_2c
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2[4] s> 0)
    do
        int32_t ecx = arg2[5]
        char* eax_3
        
        if (ecx u< 0x10)
            eax_3 = arg2
        else
            eax_3 = *arg2
        
        eax_3.b = *(eax_3 + i)
        char* var_30
        
        if (eax_3.b u< 0x81 || eax_3.b u> 0x9f)
            eax_3.b += 0x20
            
            if (eax_3.b u<= 0xf)
                goto label_67c386
            
            char* eax_10
            
            if (ecx u< 0x10)
                eax_10 = arg2
            else
                eax_10 = *arg2
            
            if (*(eax_10 + i) != 0xa)
                void** eax_18
                
                if (ecx u< 0x10)
                    eax_18 = arg2
                else
                    eax_18 = *arg2
                
                sub_4263a0(&var_3c, eax_18 + i)
                esi = var_38
                edi = var_3c
            else
                eax_10.b = edi == esi
                
                if (eax_10.b == 0)
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = eax_10.b
                    sub_403490(&var_2c, edi, esi - edi)
                    var_8_1.b = 1
                    sub_4055a0(*(*(arg1 + 8) - 4) + 4, &var_2c, 0, 0xffffffff)
                    var_8_1.b = 0
                    
                    if (var_18_1 u>= 0x10)
                        sub_403160(var_2c.d, var_18_1 + 1, 1)
                    
                    int32_t eax_16 = *(*(*(arg1 + 8) - 4) + 0x14)
                    
                    if (*(arg1 + 0x10) s< eax_16)
                        *(arg1 + 0x10) = eax_16
                    
                    esi = edi
                    var_38 = esi
                
                char* eax_17 = sub_6e810c(0x1c)
                var_30 = eax_17
                void* ecx_8 = &eax_17[4]
                *eax_17 = &crayfish::CLogLine::`vftable'
                *(ecx_8 + 0x14) = 0xf
                *(ecx_8 + 0x10) = 0
                
                if (*(ecx_8 + 0x14) u>= 0x10)
                    ecx_8 = *ecx_8
                
                *ecx_8 = 0
                var_30 = eax_17
                sub_42ccf0(arg1 + 4, &var_30)
            
            i = i_1
            result = 1
        else
        label_67c386:
            void** eax_4
            
            if (ecx u< 0x10)
                eax_4 = arg2
            else
                eax_4 = *arg2
            
            void* eax_5 = eax_4 + i
            var_30 = eax_5
            
            if (eax_5 u>= esi || edi u> eax_5)
                if (esi == var_34)
                    sub_405a20(&var_3c, 1)
                    esi = var_38
                    edi = var_3c
                    eax_5 = var_30
                    i = i_1
                
                if (esi != 0)
                    eax_5.b = *eax_5
                    *esi = eax_5.b
            else
                eax_5 -= edi
                var_30 = eax_5
                
                if (esi == var_34)
                    sub_405a20(&var_3c, 1)
                    esi = var_38
                    edi = var_3c
                    eax_5 = var_30
                    i = i_1
                
                if (esi != 0)
                    eax_5.b = *(edi + eax_5)
                    *esi = eax_5.b
            
            char* esi_1 = &esi[1]
            void** eax_6
            
            if (arg2[5] u< 0x10)
                eax_6 = arg2
            else
                eax_6 = *arg2
            
            void* eax_8 = eax_6 + 1 + i
            var_30 = eax_8
            
            if (eax_8 u>= esi_1 || edi u> eax_8)
                if (esi_1 == var_34)
                    sub_405a20(&var_3c, 1)
                    edi = var_3c
                    eax_8 = var_30
                    i = i_1
                
                if (esi_1 == 0)
                    goto label_67c45f
                
                eax_8.b = *eax_8
                *esi_1 = eax_8.b
            label_67c45f:
                esi = &esi_1[1]
                result = 2
                var_38 = esi
            else
                char* eax_9 = eax_8 - edi
                var_30 = eax_9
                
                if (esi_1 == var_34)
                    sub_405a20(&var_3c, 1)
                    edi = var_3c
                    eax_9 = var_30
                    i = i_1
                
                if (esi_1 == 0)
                    goto label_67c45f
                
                eax_9.b = *(eax_9 + edi)
                *esi_1 = eax_9.b
                esi = &esi_1[1]
                var_38 = esi
                result = 2
        i += result
        i_1 = i
    while (i s< arg2[4])

result.b = edi == esi

if (result.b == 0)
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = result.b
    sub_403490(&var_2c, edi, esi - edi)
    var_8_1.b = 2
    sub_4055a0(*(*(arg1 + 8) - 4) + 4, &var_2c, 0, 0xffffffff)
    
    if (var_18_2 u>= 0x10)
        sub_403160(var_2c.d, var_18_2 + 1, 1)
    
    result = *(*(*(arg1 + 8) - 4) + 0x14)
    
    if (*(arg1 + 0x10) s< result)
        *(arg1 + 0x10) = result

if (edi != 0)
    sub_403160(edi, var_34 - edi, 1)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
