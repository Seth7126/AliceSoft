// 函数: sub_5b2b90
// 地址: 0x5b2b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f2b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* edi = arg_4
char* edx = edi[1]
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> edi[2])
label_5b2cd7:
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
int32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
edi[1] = &edx[4]

if (ecx_6 s> 0)
    do
        char* edx_1 = edi[1]
        
        if (&edx_1[4] u> edi[2])
            goto label_5b2cd7
        
        int32_t ecx_13 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        edi[1] = &edx_1[4]
        
        if (ecx_13 != 0xffffffff)
            if (ecx_13 != 0)
                goto label_5b2cd7
            
            sub_5b5090(&arg_4)
            int32_t var_8_1 = 0
            int32_t* esi_2 = arg_4
            int32_t* var_2c_1 = esi_2
            int32_t* var_30_1 = edi
            int32_t ecx_16
            result, ecx_16 = sub_5b2cf0(arg1)
            
            if (result.b == 0)
            label_5b2cc1:
                
                if (esi_2 == 0)
                    goto label_5b2cd7
                
                sub_5b34c0(esi_2)
                int32_t var_2c_5 = 0x44
                operator new(esi_2)
                goto label_5b2cd7
            
            if (arg1[1] s<= 1)
                int32_t var_2c_2 = ecx_16
                result = sub_5b3360(arg1, edi)
            
            if (arg1[1] s<= 1 && result.b == 0)
                goto label_5b2cc1
            
            sub_5b5120(&arg1[5], &arg_4)
            int32_t var_8_2 = 0xffffffff
            int32_t* esi_3 = arg_4
            
            if (esi_3 != 0)
                sub_5b34c0(esi_3)
                int32_t var_2c_4 = 0x44
                operator new(esi_3)
        
        result = result_1 + 1
        result_1 = result
    while (result s< ecx_6)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
