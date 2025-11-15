// 函数: sub_595240
// 地址: 0x595240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729142
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = arg1[1]
int32_t edi = arg2
int32_t ebx_1

if (edi u< edx)
    ebx_1 = *arg1

char* ecx_8

if (edi u>= edx || ebx_1 u> edi)
    int32_t ebx_3 = arg1[2]
    
    if (edx == ebx_3)
        result = (ebx_3 - edx) s>> 6
        
        if (result u< 1)
            int32_t edx_5 = (edx - *arg1) s>> 6
            
            if (0x3ffffff - edx_5 u< 1)
                sub_6d0927("vector<T> too long")
                noreturn
            
            int32_t edx_6 = edx_5 + 1
            int32_t ebx_5 = (ebx_3 - *arg1) s>> 6
            uint32_t eax_13 = ebx_5 u>> 1
            int32_t ecx_6 = 0
            
            if (0x3ffffff - eax_13 u>= ebx_5)
                ecx_6 = eax_13 + ebx_5
            
            if (ecx_6 u>= edx_6)
                edx_6 = ecx_6
            
            result = sub_595370(arg1, edx_6)
    
    ecx_8 = arg1[1]
    arg2 = ecx_8
    char* var_14_2 = ecx_8
    int32_t var_8_2 = 1
else
    int32_t ecx = arg1[2]
    
    if (edx == ecx)
        result = (ecx - edx) s>> 6
        
        if (result u< 1)
            int32_t edx_2 = (edx - ebx_1) s>> 6
            
            if (0x3ffffff - edx_2 u< 1)
                sub_6d0927("vector<T> too long")
                noreturn
            
            int32_t edx_3 = edx_2 + 1
            int32_t ecx_2 = (ecx - *arg1) s>> 6
            uint32_t eax_7 = ecx_2 u>> 1
            int32_t ecx_3 = 0
            
            if (0x3ffffff - eax_7 u>= ecx_2)
                ecx_3 = eax_7 + ecx_2
            
            if (ecx_3 u>= edx_3)
                edx_3 = ecx_3
            
            result = sub_595370(arg1, edx_3)
    
    ecx_8 = arg1[1]
    edi = ((edi - ebx_1) & 0xffffffc0) + *arg1
    arg2 = ecx_8
    char* var_14_1 = ecx_8
    int32_t var_8_1 = 0

if (ecx_8 != 0)
    result = sub_595480(ecx_8, edi)

arg1[1] += 0x40
fsbase->NtTib.ExceptionList = ExceptionList
return result
