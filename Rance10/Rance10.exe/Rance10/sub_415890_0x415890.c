// 函数: sub_415890
// 地址: 0x415890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_88 = 0xffffffff
int32_t (* var_8c)(void* arg1) = sub_7280a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = __security_cookie ^ &var_84
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_98 = arg2
int32_t ebx = arg2[1]
void* esi = *arg2
int32_t* ecx = arg4
int32_t* var_94 = ecx

if (esi != ebx)
    do
        sub_40ad50(esi)
        esi += 0x7c
    while (esi != ebx)
    
    arg2 = var_98
    ecx = var_94

arg2[1] = *arg2
void* result

if (arg3 == 0 || ecx == 0 || arg6 s>= 4)
    result.b = 0
else
    result = (*(*ecx + 4))(arg5)
    void* result_1 = result
    
    if (result == 0)
        result.b = 0
    else
        int32_t ebx_2 = (*(*var_94 + 0x18))(arg5)
        int32_t var_a4_1 = ebx_2
        result = (*(*arg3 + 0x20))(ebx_2)
        
        if (ebx_2 s< 0 || result s< 0)
            result.b = 0
        else
            sub_403450((*(*arg3 + 4))(ebx_2))
            sub_416ce0(var_98, result)
            int32_t esi_2 = 0
            
            if (result s> 0)
                do
                    sub_414340(&var_84)
                    int32_t var_88_1 = 0
                    char* eax_9 = (*(*arg3 + 0x28))(ebx_2, esi_2)
                    int32_t var_80
                    
                    if (eax_9 != 0)
                        int32_t* eax_10 = (*(*arg3 + 0x24))(var_a4_1, esi_2)
                        
                        if (eax_10 != 0)
                            sub_4198f0(&var_80, eax_10)
                            sub_403450(eax_9)
                            sub_415460(&var_84, (*(*result_1 + 0x18))(eax_2) + (esi_2 << 2), arg5, 
                                esi_2, arg3, var_94, arg6 + 1)
                    
                    sub_416b70(var_98, &var_84)
                    int32_t eax_15 = var_80
                    
                    if (eax_15 == 0x12 || eax_15 == 0x33 || eax_15 == 0x13 || eax_15 == 0x5d
                            || eax_15 == 0x59)
                        esi_2 += 1
                    
                    int32_t var_88_2 = 0xffffffff
                    sub_40ad50(&var_84)
                    ebx_2 = var_a4_1
                    esi_2 += 1
                while (esi_2 s< result)
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_84)
return result
