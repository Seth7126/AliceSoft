// 函数: sub_680ad0
// 地址: 0x680ad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740756
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg2
int32_t esi = arg3
int32_t var_14 = esi
int32_t ecx = arg4
void* edi = ebx
int32_t var_24 = ebx
int32_t eax_3 = ecx - 1
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(eax_3)
int32_t eax_6 = (eax_4 - edx) s>> 1
int32_t var_1c = eax_6

if (ebx s< eax_6)
    do
        void* eax_7 = (edi << 1) + 2
        int32_t* ecx_1 = esi + eax_7 * 0x18
        int32_t* edx_1 = &ecx_1[-6]
        
        if (ecx_1[-1] u>= 0x10)
            edx_1 = *edx_1
        
        if (ecx_1[5] u>= 0x10)
            ecx_1 = *ecx_1
        
        int32_t esi_2 = edx_1[4]
        int32_t eax_9 = esi_2
        int32_t edi_2 = ecx_1[4]
        
        if (edi_2 u< esi_2)
            eax_9 = edi_2
        
        int32_t eax_10 = sub_406ac0(eax_9, edx_1, ecx_1, eax_9)
        
        if (eax_10 == 0)
            bool c_1 = esi_2 u< edi_2
            
            if (esi_2 == edi_2 || c_1)
                eax_10 = neg.d(sbb.d(eax_10, eax_10, c_1))
            else
                eax_10 = 0xffffffff
        
        edi = eax_7 - 1
        
        if ((eax_10 u>> 0x1f).b == 0)
            edi = eax_7
        
        int32_t* ecx_3 = var_14 + edi * 0x18
        int32_t* esi_3 = var_14 + ebx * 0x18
        
        if (esi_3 != ecx_3)
            int32_t eax_15 = esi_3[5]
            
            if (eax_15 u>= 0x10)
                sub_403160(*esi_3, eax_15 + 1, 1)
            
            esi_3[5] = 0xf
            bool cond:3_1 = esi_3[5] u< 0x10
            esi_3[4] = 0
            int32_t* eax_17
            
            if (cond:3_1)
                eax_17 = esi_3
            else
                eax_17 = *esi_3
            
            *eax_17 = 0
            sub_4056a0(esi_3, ecx_3)
        
        eax_6 = var_1c
        ebx = edi
        esi = var_14
    while (edi s< eax_6)
    
    ecx = arg4

if (edi == eax_6 && (ecx.b & 1) == 0)
    eax_6, ecx = sub_409670(esi + ebx * 0x18, esi + (ecx - 1) * 0x18)
    ebx = eax_3

int32_t var_38_4 = ecx
char* result = sub_680ec0(eax_6, ebx, esi, var_24, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
return result
