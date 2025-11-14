// 函数: sub_577030
// 地址: 0x577030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c67f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(arg2 + 8))
label_57714b:
    result.b = 0
else
    int32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    var_5c = ecx_6
    int32_t ebx_1 = 0
    
    if (ecx_6 s> 0)
        do
            char* edx_1 = *(arg2 + 4)
            
            if (&edx_1[4] u> *(arg2 + 8))
                goto label_57714b
            
            int32_t ecx_13 =
                ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
            *(arg2 + 4) = &edx_1[4]
            
            if (ecx_13 == 0)
                void var_58
                sub_5765b0(&var_58)
                int32_t var_4 = 0
                char eax_9
                int32_t ecx_16
                eax_9, ecx_16 = sub_577220(arg1, arg2, &var_58)
                int16_t top = top - 1
                unimplemented  {call 0x577220}
                char eax_10
                
                if (eax_9 != 0 && *(arg1 + 8) s<= 1)
                    int32_t var_74_2 = ecx_16
                    eax_10 = sub_5780a0(arg1, arg2)
                
                if (eax_9 == 0 || (*(arg1 + 8) s<= 1 && eax_10 == 0))
                    sub_577170(&var_58)
                    goto label_57714b
                
                sub_578d90(arg1 + 0x18, &var_58)
                int32_t var_4_1 = 0xffffffff
                sub_577170(&var_58)
            else if (ecx_13 != 0xffffffff)
                goto label_57714b
            
            ebx_1 += 1
        while (ebx_1 s< var_5c)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
