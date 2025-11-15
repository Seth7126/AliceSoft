// 函数: sub_491130
// 地址: 0x491130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f7c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_38
int32_t var_8_1 = 0
int32_t ecx = arg3[5]
int32_t ebx = arg3[4]
int32_t* esi

if (ecx u< 0x10)
    esi = arg3
else
    esi = *arg3

int32_t ecx_1 = 0
int32_t edx = 0x811c9dc5

if (ebx != 0)
    do
        uint32_t eax_4 = zx.d(*(esi + ecx_1))
        ecx_1 += 1
        edx = (eax_4 ^ edx) * 0x1000193
    while (ecx_1 u< ebx)

int32_t ecx_2 = (arg1[6] & edx) << 3
int32_t eax_8 = arg1[3]
int32_t edi_1 = *(ecx_2 + eax_8)
void* esi_2

if (edi_1 != arg1[1])
    esi_2 = **(ecx_2 + eax_8 + 4)
else
    esi_2 = arg1[1]

while (esi_2 != edi_1)
    esi_2 = *(esi_2 + 4)
    int32_t* edx_1 = esi_2 + 8
    void* ecx_3 = &edx_1[4]
    
    if (*(esi_2 + 0x1c) u>= 0x10)
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
            *arg4[1] = *arg4
            *(*arg4 + 4) = arg4[1]
            arg1[2] -= 1
            Concurrency::details::UMSSchedulerProxy::~UMSSchedulerProxy(&arg4[2])
            sub_403160(arg4, 1, 0x48)
            *arg2 = esi_2
            arg2[1].b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2

arg3 = arg4
void* eax_13 = *arg4

if (esi_2 != eax_13)
    *arg4[1] = eax_13
    **(eax_13 + 4) = esi_2
    **(esi_2 + 4) = arg4
    int32_t edx_2 = *(esi_2 + 4)
    *(esi_2 + 4) = *(eax_13 + 4)
    *(eax_13 + 4) = arg4[1]
    arg4[1] = edx_2

void** ecx_13 = arg1[3] + ecx_2
void* eax_14 = *ecx_13

if (eax_14 == arg1[1])
    *ecx_13 = arg4
    *(ecx_2 + arg1[3] + 4) = arg4
else if (eax_14 != esi_2)
    int32_t eax_21 = *ecx_13[1]
    ecx_13[1] = eax_21
    
    if (eax_21 != arg4)
        int32_t ecx_19 = arg1[3]
        *(ecx_19 + ecx_2 + 4) = *(*(ecx_19 + ecx_2 + 4) + 4)
else
    *ecx_13 = arg4

int32_t var_8_2 = 2
sub_491320(arg1)
*arg2 = arg4
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
