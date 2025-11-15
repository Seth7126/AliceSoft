// 函数: sub_4fb5d0
// 地址: 0x4fb5d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736a3e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* arg_4
int32_t* ebx = arg_4
void* esi = ebx[1]
void* edx
int32_t result

if (esi == *ebx)
label_4fb665:
    result = 0
else
    while (true)
        arg_4 = *(esi - 4)
        
        if (arg3 == 0)
            sub_6d090a()
            noreturn
        
        char eax_6
        eax_6, edx = (*(*arg3 + 8))(&arg_4)
        
        if (eax_6 != 0)
            int32_t* ecx_2 = **(esi - 4)
            edx = ecx_2[0x14]
            int32_t* eax_7
            eax_7.b = *(edx + 0x308)
            
            if (eax_7.b != 0 && not(_mm_cvtepi32_ps(zx.o(*(edx + 0x304))) f<= 0))
                char eax_10
                eax_10, edx = (*(*ecx_2 + 0x44))(arg1, arg2, 1)
                
                if (eax_10 != 0)
                    result = *(esi - 4)
                    break
        
        esi -= 4
        
        if (esi == *ebx)
            goto label_4fb665

int32_t var_8_2 = 1

if (arg3 != 0)
    void arg_10
    edx.b = arg3 != &arg_10
    (*(*arg3 + 0x10))(zx.d(edx.b))

fsbase->NtTib.ExceptionList = ExceptionList
return result
