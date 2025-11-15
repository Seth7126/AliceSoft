// 函数: sub_5fbc20
// 地址: 0x5fbc20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cfa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_5fc660(arg1, arg2)
void* esi = *arg1
int32_t ebx = 0
int32_t edi_1 = arg1[1]
int32_t var_4c = 0

if (esi != edi_1)
    int32_t* result_1 = esi + 8
    
    do
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = muls.dp.d(0x4bda12f7, *(arg3 + 0x38) - *(arg3 + 0x34))
        int32_t edx_2 = edx_1 s>> 5
        int32_t eax_9
        
        if (ebx u< (edx_2 u>> 0x1f) + edx_2)
            eax_9 = ebx * 0x6c
        
        int32_t* result_2
        
        if (ebx u>= (edx_2 u>> 0x1f) + edx_2 || eax_9 == neg.d(*(arg3 + 0x34)))
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            sub_403490(&var_2c, 0x76abac, 8)
            int32_t var_8_1 = 0
            char var_44
            void** eax_12 = sub_4351a0(&var_4c, &var_2c, &var_44, &var_4c)
            var_8_1.b = 1
            
            if (result_1 != eax_12)
                sub_403590(result_1, eax_12, 0, 0xffffffff)
            
            int32_t var_30
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, var_30 + 1, 1)
            
            int32_t var_8_2 = 0xffffffff
            var_30 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            result_2 = result_1
            ebx = var_4c
        else
            void** ecx_5 = eax_9 + *(arg3 + 0x34) + 4
            result_2 = result_1
            
            if (result_2 != ecx_5)
                sub_403590(result_2, ecx_5, 0, 0xffffffff)
                result_2 = result_1
                ebx = var_4c
        
        ebx += 1
        esi += 0x38
        result = &result_2[0xe]
        var_4c = ebx
        result_1 = result
    while (esi != edi_1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
