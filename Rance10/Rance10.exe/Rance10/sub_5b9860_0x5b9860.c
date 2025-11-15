// 函数: sub_5b9860
// 地址: 0x5b9860
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f788
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_24 = arg1
void* var_4c = arg1
sub_5be530(*(arg1 + 0x60), *(arg1 + 0x64))
void* esi = arg2
*(arg1 + 0x64) = *(arg1 + 0x60)
int32_t* var_2c = nullptr
int32_t var_1c = (*(esi + 0x18) - *(esi + 0x14)) s>> 2
int32_t var_28 = 0
int32_t* ebx_1 = sub_461990()
var_2c = ebx_1
int32_t edi = 0
int32_t var_8_1 = 0
int32_t var_18 = 0

if (var_1c s> 0)
    do
        int32_t var_20 = *(*(*(esi + 0x14) + (edi << 2)) + 0x18)
        void* var_34
        sub_461ee0(&var_2c, &var_34, &var_20)
        void* esi_1 = var_34
        int32_t ecx_2 = *(esi_1 + 0x18)
        int32_t eax_11
        
        if (&var_18 u< ecx_2)
            eax_11 = *(esi_1 + 0x14)
        
        if (&var_18 u>= ecx_2 || eax_11 u> &var_18)
            if (ecx_2 == *(esi_1 + 0x1c))
                sub_404610(esi_1 + 0x14, 1)
            
            int32_t* eax_14 = *(esi_1 + 0x18)
            
            if (eax_14 != 0)
                *eax_14 = edi
        else
            if (ecx_2 == *(esi_1 + 0x1c))
                sub_404610(esi_1 + 0x14, 1)
            
            int32_t* ecx_4 = *(esi_1 + 0x18)
            
            if (ecx_4 != 0)
                *ecx_4 = *(*(esi_1 + 0x14) + ((&var_18 - eax_11) s>> 2 << 2))
        
        *(esi_1 + 0x18) += 4
        edi += 1
        esi = arg2
        var_18 = edi
    while (edi s< var_1c)
    
    ebx_1 = var_2c

int32_t eax_15 = *ebx_1
var_1c = eax_15

if (eax_15 == ebx_1)
label_5b99aa:
    arg2:3.b = 1
else
    while (true)
        int32_t* esi_2 = *(eax_15 + 0x14)
        int32_t edi_1 = *(eax_15 + 0x18)
        
        if (esi_2 != edi_1)
            while (true)
                int32_t var_4c_2 = *esi_2
                
                if (sub_5b99f0(var_24, arg2) == 0)
                    ebx_1 = var_2c
                    arg2:3.b = 0
                    break
                
                esi_2 = &esi_2[1]
                
                if (esi_2 == edi_1)
                    goto label_5b999b
            
            break
        
    label_5b999b:
        sub_429080(&var_1c)
        eax_15 = var_1c
        
        if (eax_15 == ebx_1)
            ebx_1 = var_2c
            goto label_5b99aa

int32_t* var_4c_3 = ebx_1
sub_461060(&var_2c, &var_24, *ebx_1)
sub_403160(var_2c, 1, 0x20)
int32_t result
result.b = arg2:3.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
