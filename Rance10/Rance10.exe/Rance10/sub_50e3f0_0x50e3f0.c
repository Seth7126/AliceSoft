// 函数: sub_50e3f0
// 地址: 0x50e3f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736328
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg3
int32_t result_1 = arg4
int32_t* var_38 = ebx
*ebx = 0
*arg4 = 0
int32_t result_5 = *(arg1 + 0x128)
int32_t result_2 = result_5
int32_t result_7 = result_5

if ((result_5.b & 1) != 0)
    result_7 = result_5 + 1

int32_t result_8 = int.d(sub_4a78b0(*(arg1 + 0x140)))
float xmm0_2 = *(arg1 + 0x13c)

if (result_8 s< result_5)
    result_5 = result_8

int32_t result_6 = result_5
float xmm0_3 = sub_4a78b0(xmm0_2)
int32_t result_4 = result_2
int32_t result_9 = int.d(xmm0_3)

if (result_9 s< result_4)
    result_4 = result_9

int32_t* eax_6 = &result_6
result_2 = result_4

if (result_4 s>= result_5)
    eax_6 = &result_2

int32_t esi = 0
int32_t ecx_3 = result_7 + (*eax_6 << 1) + *(arg1 + 0x214)
int32_t var_34 = ecx_3
int32_t result = arg2[4]
result_2 = result

if (result s> 0)
    do
        char* eax_8
        
        if (arg2[5] u< 0x10)
            eax_8 = arg2
        else
            eax_8 = *arg2
        
        ebx.b = eax_8[esi]
        result_6.b = ebx.b
        
        if (ebx.b != 0xa)
            char result_10 = result_6.b
            int32_t result_3 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            sub_4e2870(&var_2c, 1, result_10)
            int32_t var_8_1 = 0
            
            if (ebx.b u< 0x81 || ebx.b u> 0x9f)
                ebx.b += 0x20
                
                if (ebx.b u<= 0xf)
                    goto label_50e517
            else
            label_50e517:
                esi += 1
                
                if (esi s>= result_2)
                    result = result_3
                    
                    if (result u>= 0x10)
                        result = sub_403160(var_2c.d, result + 1, 1)
                    
                    ebx = var_38
                    break
                
                int32_t* eax_9
                
                if (arg2[5] u< 0x10)
                    eax_9 = arg2
                else
                    eax_9 = *arg2
                
                eax_9.b = *(eax_9 + esi)
                sub_405500(&var_2c, 1, eax_9.b)
            
            ebx = var_38
            int32_t ecx_6 = 0
            int32_t var_50
            
            if (sub_641fe0(arg1 + 0x120, &var_2c, &var_50) != 0)
                ecx_6 = var_50
            
            *ebx += *(arg1 + 0x210) + ecx_6
            int32_t var_8_2 = 0xffffffff
            result = result_3
            
            if (result u>= 0x10)
                result = sub_403160(var_2c.d, result + 1, 1)
            
            ecx_3 = var_34
        else
            ebx = var_38
            result = result_1
            *ebx = 0
            *result += ecx_3
        
        esi += 1
    while (esi s< result_2)

if (arg5 != 0)
    result = *(arg1 + 0x210)
    *ebx -= result

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
