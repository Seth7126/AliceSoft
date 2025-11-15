// 函数: sub_4fc280
// 地址: 0x4fc280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736a7c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = arg3
int32_t var_8_1 = 1
int32_t ebx
ebx.b = 0
void* i = result_1[1]

if (i != *result_1)
    result = arg3
    
    do
        int32_t* edi = *(i - 4)
        i -= 4
        
        if (edi != arg7)
            int32_t* var_1c
            
            if (ebx.b != 0)
            label_4fc34b:
                var_1c = edi
                
                if (arg6 == 0)
                    sub_6d090a()
                    noreturn
                
                (*(*arg6 + 8))(&var_1c)
            else
                int32_t* ecx = *edi
                void* edx = ecx[0x14]
                result.b = *(edx + 0x308)
                
                if (result.b == 0)
                    goto label_4fc34b
                
                if (_mm_cvtepi32_ps(zx.o(*(edx + 0x304))) f<= 0)
                    goto label_4fc34b
                
                if ((*(*ecx + 0x44))(arg2, arg4, 1) == 0)
                    goto label_4fc34b
                
                var_1c = edi
                
                if (arg5 == 0)
                    sub_6d090a()
                    noreturn
                
                (*(*arg5 + 8))(&var_1c)
                void* eax_8
                
                if (edi[0x77] s< 0)
                    eax_8.b = *(*(*edi + 0x50) + 0x1a9)
                
                if (edi[0x77] s>= 0 || eax_8.b == 0)
                    ebx.b = 1
            result = result_1
    while (i != *result)

var_8_1.b = 2

if (arg5 != 0)
    void arg_8
    result = (*(*arg5 + 0x10))(arg5 != &arg_8)
    arg5 = nullptr

int32_t var_8_2 = 3
void arg_30

if (arg6 != 0)
    result = (*(*arg6 + 0x10))(arg6 != &arg_30)
fsbase->NtTib.ExceptionList = ExceptionList
return result
