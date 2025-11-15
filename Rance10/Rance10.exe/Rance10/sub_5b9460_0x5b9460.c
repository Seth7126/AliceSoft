// 函数: sub_5b9460
// 地址: 0x5b9460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f6e1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = *(arg2 + 0x1c)
int32_t edi_1 = *(arg2 + 0x20)

if (esi != edi_1)
    void* edx_1 = &esi[7]
    arg2 = edx_1
    
    do
        result = *(edx_1 - 4)
        struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result
        
        if (*(edx_1 - 0xc) != 0)
            int32_t* result_4
            
            if (arg1[1] == arg1[2])
                int32_t* result_6 = result_4
                result_4 = sub_5be570(arg1)
                edx_1 = arg2
            
            result = arg1[1]
            struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
            int32_t var_8_1 = 0
            
            if (result != 0)
                result[4] = 0
                result[5] = 0
                result[5] = 0xf
                bool cond:1_1 = result[5] u< 0x10
                result[4] = 0
                struct _EXCEPTION_REGISTRATION_RECORD* result_5
                
                if (cond:1_1)
                    result_5 = result
                else
                    result_5 = *result
                
                result_5->Next.b = 0
                sub_403590(result, esi, 0, 0xffffffff)
                result_4 = result
                edx_1 = arg2
                result_4[6] = result_3
                result_4[7] = *edx_1
                result = *(edx_1 + 4)
                result_4[8] = result
            
            int32_t var_8_2 = 0xffffffff
            arg1[1] += 0x24
        
        esi = &esi[9]
        edx_1 += 0x24
        arg2 = edx_1
    while (esi != edi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
