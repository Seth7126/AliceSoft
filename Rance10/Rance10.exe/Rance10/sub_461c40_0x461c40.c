// 函数: sub_461c40
// 地址: 0x461c40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c0d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* edx = arg1
int32_t* var_1c = edx
int32_t var_8_1 = 0
uint8_t eax_3 = 1
int32_t* ecx = *edx
void** edi = ecx
void** arg_c
int32_t** ebx = arg_c
uint8_t var_18 = 1
void** esi = ecx[1]

if (*(esi + 0xd) == 0)
    do
        bool cond:0_1 = esi[9] u< 0x10
        void* edx_1 = &esi[4]
        arg_c = esi
        void* edi_1 = edx_1 + 0x10
        
        if (not(cond:0_1))
            edx_1 = *edx_1
        
        int32_t* ecx_1
        
        if (ebx[5] u< 0x10)
            ecx_1 = ebx
        else
            ecx_1 = *ebx
        
        int32_t edi_2 = *edi_1
        int32_t eax_4 = edi_2
        
        if (ebx[4] u< edi_2)
            eax_4 = ebx[4]
        
        int32_t eax_5 = sub_406ac0(eax_4, edx_1, ecx_1, eax_4)
        
        if (eax_5 == 0)
            int32_t ecx_2 = ebx[4]
            bool c_1 = edi_2 u< ecx_2
            
            if (edi_2 == ecx_2 || c_1)
                eax_5 = neg.d(sbb.d(eax_5, eax_5, c_1))
            else
                eax_5 = 0xffffffff
        
        eax_3 = (eax_5 u>> 0x1f).b
        var_18 = eax_3
        
        if (eax_3 == 0)
            esi = esi[2]
        else
            esi = *esi
    while (*(esi + 0xd) == 0)
    
    edi = arg_c
    edx = var_1c

void** esi_1 = edi
arg_c = esi_1

if (eax_3 == 0)
    goto label_461d43

uint8_t var_40
int32_t** var_3c
void** var_38
int32_t* ecx_3

if (edi != *ecx)
    sub_429da0(&arg_c)
    esi_1 = arg_c
label_461d43:
    
    if (sub_412ca0(&esi_1[4], ebx) == 0)
        *arg2 = esi_1
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    int32_t var_34_4 = arg3
    ecx_3 = var_1c
    var_38 = ebx
    var_3c = edi
    var_40 = var_18
else
    int32_t var_34_2 = arg3
    ecx_3 = edx
    var_38 = ebx
    var_3c = edi
    var_40 = 1

int32_t** eax_8 = arg2
*eax_8 = *sub_461d80(ecx_3, &arg_c, var_40, var_3c, var_38)
eax_8[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
