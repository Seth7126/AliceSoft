// 函数: sub_60dda0
// 地址: 0x60dda0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743030
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_3c
int32_t var_8_1 = 0
int32_t* arg_8
int32_t* eax_3 = arg_8
int32_t ecx = eax_3[5]
int32_t ebx = eax_3[4]
int32_t* esi

if (ecx u< 0x10)
    esi = eax_3
else
    esi = *eax_3

int32_t ecx_1 = 0
int32_t edx = 0x811c9dc5

if (ebx != 0)
    do
        uint32_t eax_4 = zx.d(*(esi + ecx_1))
        ecx_1 += 1
        edx = (eax_4 ^ edx) * 0x1000193
    while (ecx_1 u< ebx)

int32_t edx_1 = (arg1[6] & edx) << 3
int32_t* eax_8 = arg1[3]
int32_t edi_1 = eax_8[(arg1[6] & edx) * 2]
void* esi_1

if (edi_1 != arg1[1])
    esi_1 = *eax_8[(arg1[6] & edx) * 2 + 1]
else
    esi_1 = arg1[1]

while (esi_1 != edi_1)
    esi_1 = *(esi_1 + 4)
    void* edx_2 = esi_1 + 8
    void* ecx_3 = edx_2 + 0x10
    
    if (*(esi_1 + 0x1c) u>= 0x10)
        edx_2 = *edx_2
    
    int32_t* eax_9 = arg_8
    
    if (ecx u>= 0x10)
        eax_9 = *eax_9
    
    int32_t ecx_4 = *ecx_3
    int32_t eax_10 = ecx_4
    
    if (ebx u< ecx_4)
        eax_10 = ebx
    
    if (sub_406ac0(eax_10, edx_2, eax_9, eax_10) == 0)
        int32_t eax_12 = *ecx_3
        
        if (ebx u>= eax_12 && ebx u<= eax_12)
            sub_60db20(&arg1[1], &arg_8, arg3)
            *arg2 = esi_1
            arg2[1].b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2

arg_8 = arg3
void* eax_13 = *arg3

if (esi_1 != eax_13)
    *arg3[1] = eax_13
    **(eax_13 + 4) = esi_1
    **(esi_1 + 4) = arg3
    int32_t edx_3 = *(esi_1 + 4)
    *(esi_1 + 4) = *(eax_13 + 4)
    *(eax_13 + 4) = arg3[1]
    arg3[1] = edx_3

int32_t** ecx_13 = edx_1 + arg1[3]
int32_t* eax_14 = *ecx_13

if (eax_14 == arg1[1])
    *ecx_13 = arg3
    *(arg1[3] + edx_1 + 4) = arg3
else if (eax_14 != esi_1)
    int32_t eax_18 = *ecx_13[1]
    ecx_13[1] = eax_18
    
    if (eax_18 != arg3)
        void* ecx_19 = edx_1 + arg1[3]
        *(ecx_19 + 4) = *(*(ecx_19 + 4) + 4)
else
    *ecx_13 = arg3

int32_t var_8_2 = 2
sub_60d910(arg1)
*arg2 = arg3
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
