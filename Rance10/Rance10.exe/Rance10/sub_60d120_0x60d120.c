// 函数: sub_60d120
// 地址: 0x60d120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742fb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_38
int32_t var_8_1 = 0
int32_t ecx = arg3[5]
int32_t ebx = arg3[4]
int32_t* edi

if (ecx u< 0x10)
    edi = arg3
else
    edi = *arg3

int32_t ecx_1 = 0
int32_t edx = 0x811c9dc5

if (ebx != 0)
    do
        uint32_t eax_4 = zx.d(*(edi + ecx_1))
        ecx_1 += 1
        edx = (eax_4 ^ edx) * 0x1000193
    while (ecx_1 u< ebx)

int32_t ecx_2 = (arg1[6] & edx) << 3
int32_t* eax_8 = arg1[3]
int32_t edi_1 = eax_8[(arg1[6] & edx) * 2]
void* esi_1

if (edi_1 != arg1[1])
    esi_1 = *eax_8[(arg1[6] & edx) * 2 + 1]
else
    esi_1 = arg1[1]

while (esi_1 != edi_1)
    esi_1 = *(esi_1 + 4)
    int32_t* edx_1 = esi_1 + 8
    void* ecx_3 = &edx_1[4]
    
    if (*(esi_1 + 0x1c) u>= 0x10)
        edx_1 = *edx_1
    
    int32_t* eax_9 = arg3
    
    if (ecx u>= 0x10)
        eax_9 = *eax_9
    
    int32_t ecx_4 = *ecx_3
    int32_t eax_10 = ecx_4
    
    if (ebx u< ecx_4)
        eax_10 = ebx
    
    if (sub_406ac0(eax_10, edx_1, eax_9, eax_10) == 0)
        int32_t eax_12 = *ecx_3
        
        if (ebx u>= eax_12 && ebx u<= eax_12)
            *arg2 = esi_1
            arg2[1].b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2

int32_t var_8_2 = 0xffffffff
void* edi_2 = *arg1[1]
int32_t* eax_14 = sub_44b960(edi_2, *(edi_2 + 4), arg3)

if (0x71c71c6 - arg1[2] u< 1)
    sub_6d0927("list<T> too long")
    noreturn

arg1[2] += 1
*(edi_2 + 4) = eax_14
*eax_14[1] = eax_14
int32_t* edi_4 = *arg1[1]
arg3 = edi_4
void* eax_17 = *edi_4

if (esi_1 != eax_17)
    *edi_4[1] = eax_17
    **(eax_17 + 4) = esi_1
    **(esi_1 + 4) = edi_4
    int32_t edx_3 = *(esi_1 + 4)
    *(esi_1 + 4) = *(eax_17 + 4)
    *(eax_17 + 4) = edi_4[1]
    edi_4[1] = edx_3

void** ecx_16 = arg1[3] + ecx_2
void* eax_18 = *ecx_16

if (eax_18 == arg1[1])
    *ecx_16 = edi_4
    *(arg1[3] + ecx_2 + 4) = edi_4
else if (eax_18 != esi_1)
    int32_t eax_21 = *ecx_16[1]
    ecx_16[1] = eax_21
    
    if (eax_21 != edi_4)
        int32_t ecx_17 = arg1[3]
        *(ecx_17 + ecx_2 + 4) = *(*(ecx_17 + ecx_2 + 4) + 4)
else
    *ecx_16 = edi_4

int32_t var_8_3 = 2
sub_60da50(arg1)
*arg2 = edi_4
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
