// 函数: sub_4ab370
// 地址: 0x4ab370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731848
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4ab5b0(arg1, arg3)
int32_t edi = *(arg1 + 8)
int32_t* i = *(arg1 + 4)
int32_t var_14 = edi

for (; i != edi; i = &i[4])
    int32_t* j = *i
    
    for (int32_t edx_1 = i[1]; j != edx_1; j = &j[3])
        int32_t eax_4 = j[1]
        int32_t* ebx_1 = *j
        
        if (eax_4 != ebx_1)
            while (*ebx_1 != arg2)
                ebx_1 = &ebx_1[1]
                
                if (ebx_1 == eax_4)
                    break
            
            edx_1 = i[1]
            edi = var_14
            
            if (eax_4 != ebx_1)
                int32_t eax_11 = sub_4affd0(i, arg2, arg3)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_11

void* var_40_1 = arg2
int32_t var_8_1 = 0
int32_t* var_28
int32_t* eax_6 = sub_4ac2b0(arg1 + 4, sub_4afd10(&var_28, arg3))
int32_t* ecx_2 = var_28

if (ecx_2 != 0)
    void* var_40_3 = arg2
    int32_t* var_44_1 = ecx_2
    int32_t var_24
    sub_4ac600(ecx_2, var_24)
    int32_t* esi_1 = var_28
    int32_t var_20
    eax_6 = sub_403160(esi_1, (var_20 - esi_1) s/ 0xc, 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
