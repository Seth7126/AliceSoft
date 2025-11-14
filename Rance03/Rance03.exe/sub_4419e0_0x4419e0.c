// 函数: sub_4419e0
// 地址: 0x4419e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ebx
int32_t* var_24 = ebx
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t* var_34 = &var_18
sub_441c70(arg1)
int32_t var_1c = *(arg1 + 8)
sub_4158d0(&var_18, &var_1c)
int32_t* eax_4 = *(arg1 + 4)
void** esi = *eax_4
int32_t edi_1

if (esi == eax_4)
label_441a70:
    edi_1 = var_18
    int32_t var_20 = (var_14 - edi_1) s>> 2
    
    if ((*(*arg2 + 0x30))(&var_20, 1) == 0)
    label_441ac0:
        ebx.b = 0
    else
        int32_t esi_1 = 0
        
        if (var_20 s> 0)
            do
                if ((*(*arg2 + 0x24))(esi_1, *(edi_1 + (esi_1 << 2))) == 0)
                    goto label_441ac0_1
                
                esi_1 += 1
            while (esi_1 s< var_20)
        
        ebx.b = 1
else
    while (true)
        if (sub_440fa0(esi[2], &var_18) == 0)
            edi_1 = var_18
            break
        
        esi = *esi
        
        if (esi == *(arg1 + 4))
            goto label_441a70
    
label_441ac0_1:
    ebx.b = 0

if (edi_1 != 0)
    j__free(edi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
