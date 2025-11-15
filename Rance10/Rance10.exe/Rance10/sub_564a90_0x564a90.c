// 函数: sub_564a90
// 地址: 0x564a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e8ac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = arg1[1]
int32_t ebx_1

if (arg2 u< edx)
    ebx_1 = *arg1

struct _EXCEPTION_REGISTRATION_RECORD*** ebx_6

if (arg2 u>= edx || ebx_1 u> arg2)
    int32_t ebx_3 = arg1[2]
    
    if (edx == ebx_3)
        result = (ebx_3 - edx) s>> 3
        
        if (result u< 1)
            int32_t edx_5 = (edx - *arg1) s>> 3
            
            if (0x1fffffff - edx_5 u< 1)
                sub_6d0927("vector<T> too long")
                noreturn
            
            int32_t edx_6 = edx_5 + 1
            int32_t ebx_5 = (ebx_3 - *arg1) s>> 3
            uint32_t eax_18 = ebx_5 u>> 1
            int32_t ecx_9 = 0
            
            if (0x1fffffff - eax_18 u>= ebx_5)
                ecx_9 = eax_18 + ebx_5
            
            if (ecx_9 u>= edx_6)
                edx_6 = ecx_9
            
            result = sub_564fc0(arg1, edx_6)
    
    ebx_6 = arg1[1]
    
    if (ebx_6 != 0)
        int32_t var_8_2 = 1
        *ebx_6 = nullptr
        ebx_6[1] = 0
        void* ecx_11 = *(arg2 + 4)
        struct _EXCEPTION_REGISTRATION_RECORD** result_2 = *arg2
        
        if (ecx_11 != 0)
            *(ecx_11 + 4) += 1
        
        int32_t ecx_12 = ebx_6[1]
        
        if (ecx_12 != 0)
            bool cond:0_1 = *(ecx_12 + 4) != 1
            *(ecx_12 + 4)
            *(ecx_12 + 4) -= 1
            
            if (not(cond:0_1))
                (**ecx_12)(eax_2)
                int32_t edi_5 = *(ecx_12 + 8)
                *(ecx_12 + 8) -= 1
                
                if (edi_5 == 1)
                    (*(*ecx_12 + 4))()
        
        ebx_6[1] = ecx_11
        result = result_2
        *ebx_6 = result
else
    int32_t ecx = arg1[2]
    int32_t edi_2 = (arg2 - ebx_1) s>> 3
    
    if (edx == ecx && (ecx - edx) s>> 3 u< 1)
        int32_t edx_2 = (edx - ebx_1) s>> 3
        
        if (0x1fffffff - edx_2 u< 1)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edx_3 = edx_2 + 1
        int32_t ecx_2 = (ecx - *arg1) s>> 3
        uint32_t eax_8 = ecx_2 u>> 1
        int32_t ecx_3 = 0
        
        if (0x1fffffff - eax_8 u>= ecx_2)
            ecx_3 = eax_8 + ecx_2
        
        if (ecx_3 u>= edx_3)
            edx_3 = ecx_3
        
        sub_564fc0(arg1, edx_3)
    
    ebx_6 = arg1[1]
    result = *arg1
    
    if (ebx_6 != 0)
        int32_t var_8_1 = 0
        *ebx_6 = nullptr
        ebx_6[1] = 0
        void* ecx_5 = result[edi_2 * 2 + 1]
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result[edi_2 * 2]
        
        if (ecx_5 != 0)
            *(ecx_5 + 4) += 1
        
        int32_t ecx_6 = ebx_6[1]
        
        if (ecx_6 != 0)
            bool cond:1_1 = *(ecx_6 + 4) != 1
            *(ecx_6 + 4)
            *(ecx_6 + 4) -= 1
            
            if (not(cond:1_1))
                (**ecx_6)(eax_2)
                int32_t edi_3 = *(ecx_6 + 8)
                *(ecx_6 + 8) -= 1
                
                if (edi_3 == 1)
                    (*(*ecx_6 + 4))()
        
        ebx_6[1] = ecx_5
        result = result_1
        *ebx_6 = result
arg1[1] += 8
fsbase->NtTib.ExceptionList = ExceptionList
return result
