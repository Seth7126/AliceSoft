// 函数: sub_47c9a0
// 地址: 0x47c9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg2[4]
int32_t var_30 = 0

if (esi == 0)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = esi
    *arg1 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

char* edi = nullptr
char* ecx_3 = nullptr
int32_t ebx = 0
char* var_3c = nullptr
char* var_38 = nullptr
int32_t var_34 = 0
int32_t var_8_1 = 0

if (esi != neg.d(esi))
    sub_405a80(&var_3c, esi * 2)
    ebx = var_34
    ecx_3 = var_38
    edi = var_3c

int32_t eax_4 = arg2[5]
void* esi_2

if (eax_4 u< 0x10)
    esi_2 = arg2
else
    esi_2 = *arg2

if (eax_4 u>= 0x10)
    arg2 = *arg2

int32_t var_1c_1 = 0
void* eax_7 = arg2[4] + arg2
int32_t edx_1 = eax_7 - esi_2

if (esi_2 u> eax_7)
    edx_1 = 0

if (edx_1 != 0)
    int32_t var_20_1 = 0x1a
    int32_t eax_12
    
    do
        uint32_t eax_8 = zx.d(*esi_2)
        int32_t edx_2 = 0
        uint32_t temp1_1 = modu.dp.d(edx_2:eax_8, var_20_1)
        uint32_t eax_9
        eax_9.b = divu.dp.d(edx_2:eax_8, var_20_1).b + 0x41
        char var_11 = eax_9.b
        uint32_t edx_4 = temp1_1
        
        if (&var_11 u< ecx_3)
            edx_4 = temp1_1
        
        if (&var_11 u>= ecx_3 || edi u> &var_11)
            if (ecx_3 == ebx)
                sub_405a20(&var_3c, 1)
                ebx = var_34
                ecx_3 = var_38
                edi = var_3c
                edx_4 = temp1_1
            
            if (ecx_3 != 0)
                *ecx_3 = eax_9.b
        else
            eax_9 = &var_11 - edi
            
            if (ecx_3 == ebx)
                sub_405a20(&var_3c, 1)
                ebx = var_34
                ecx_3 = var_38
                edi = var_3c
                edx_4 = temp1_1
            
            if (ecx_3 != 0)
                eax_9.b = edi[eax_9]
                *ecx_3 = eax_9.b
        
        char* ecx_8 = &ecx_3[1]
        edx_4.b += 0x41
        var_11 = edx_4.b
        
        if (&var_11 u>= ecx_8 || edi u> &var_11)
            if (ecx_8 == ebx)
                sub_405a20(&var_3c, 1)
                ebx = var_34
                edi = var_3c
            
            if (ecx_8 != 0)
                *ecx_8 = edx_4.b
        else
            int32_t eax_10 = &var_11 - edi
            
            if (ecx_8 == ebx)
                sub_405a20(&var_3c, 1)
                ebx = var_34
                edi = var_3c
            
            if (ecx_8 != 0)
                eax_10.b = edi[eax_10]
                *ecx_8 = eax_10.b
        
        ecx_3 = &ecx_8[1]
        eax_12 = var_1c_1 + 1
        var_38 = ecx_3
        esi_2 += 1
        var_1c_1 = eax_12
    while (eax_12 != edx_1)

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0

if (edi != ecx_3)
    sub_403490(arg1, edi, ecx_3 - edi)

if (edi != 0)
    sub_403160(edi, ebx - edi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
