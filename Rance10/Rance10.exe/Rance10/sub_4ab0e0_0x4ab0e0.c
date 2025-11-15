// 函数: sub_4ab0e0
// 地址: 0x4ab0e0
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
void* eax_3 = arg1 + 4
int32_t* i = *eax_3
void* var_18 = eax_3
int32_t var_14 = edi

for (; i != edi; i = &i[4])
    int32_t* j = *i
    
    for (int32_t edx_1 = i[1]; j != edx_1; j = &j[3])
        eax_3 = j[1]
        int32_t* ebx_1 = *j
        
        if (eax_3 != ebx_1)
            while (*ebx_1 != arg2)
                ebx_1 = &ebx_1[1]
                
                if (ebx_1 == eax_3)
                    break
            
            edx_1 = i[1]
            edi = var_14
            
            if (eax_3 != ebx_1)
                int32_t var_40_4 = arg3
                struct _EXCEPTION_REGISTRATION_RECORD** eax_10 = sub_4afe50(i, arg2)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_10

int32_t var_8_1 = 0
int32_t* var_28
int32_t* eax_5 = sub_4ac2b0(var_18, sub_4afc30(eax_3, arg3, &var_28, arg2))
int32_t* ecx_2 = var_28

if (ecx_2 != 0)
    int32_t var_40_3 = arg2
    int32_t* var_44_1 = ecx_2
    int32_t var_24
    sub_4ac600(ecx_2, var_24)
    int32_t* esi_1 = var_28
    int32_t var_20
    eax_5 = sub_403160(esi_1, (var_20 - esi_1) s/ 0xc, 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
