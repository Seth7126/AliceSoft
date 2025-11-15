// 函数: sub_481880
// 地址: 0x481880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e940
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* eax_3 = arg1
int32_t var_8_1 = 0
void** eax_4 = *eax_3
uint8_t var_18 = 1
void** esi = eax_4[1]
int32_t* arg_c

if (*(esi + 0xd) == 0)
    int32_t* eax_5 = arg_c
    int32_t ebx_1 = eax_5[4]
    void** var_1c_1
    
    do
        int32_t* edx_1 = &esi[4]
        var_1c_1 = esi
        
        if (esi[9] u>= 0x10)
            edx_1 = *edx_1
        
        int32_t* ecx
        
        if (eax_5[5] u< 0x10)
            ecx = eax_5
        else
            ecx = *eax_5
        
        int32_t edi_2 = edx_1[4]
        int32_t eax_6 = edi_2
        
        if (ebx_1 u< edi_2)
            eax_6 = ebx_1
        
        int32_t eax_7
        eax_7, arg1 = sub_406ac0(eax_6, edx_1, ecx, eax_6)
        
        if (eax_7 == 0)
            bool c_1 = edi_2 u< ebx_1
            
            if (edi_2 == ebx_1 || c_1)
                eax_7 = neg.d(sbb.d(eax_7, eax_7, c_1))
            else
                eax_7 = 0xffffffff
        
        uint8_t eax_9 = (eax_7 u>> 0x1f).b
        var_18 = eax_9
        
        if (eax_9 == 0)
            esi = esi[2]
        else
            esi = *esi
        
        eax_5 = arg_c
    while (*(esi + 0xd) == 0)
    
    eax_4 = var_1c_1

int32_t var_34_2 = arg3
*arg2 = *sub_432760(eax_3, &arg_c, var_18, eax_4, arg1)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
