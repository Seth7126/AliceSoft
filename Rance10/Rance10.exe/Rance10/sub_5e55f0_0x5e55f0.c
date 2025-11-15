// 函数: sub_5e55f0
// 地址: 0x5e55f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741940
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
SRWLOCK* result = sub_5665c0(data_7fd4cc, arg3, arg2)

if (result == 0)
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t* esi = nullptr
void* var_2c = nullptr
int32_t* var_28 = nullptr
int32_t var_24 = 0
int32_t var_8_1 = 0
int32_t eax_4 = (*(*arg4 + 8))(eax_2)

if (eax_4 != 0)
    if (eax_4 u> 0x15555555)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_574eb0(&var_2c, eax_4)
    esi = var_28

int32_t edi = 0
int32_t var_1c
int32_t var_18
int32_t var_14

if ((*(*arg4 + 8))() s> 0)
    int32_t eax_14
    
    do
        int32_t* eax_8 = (*(*arg6 + 0x10))(edi)
        int32_t xmm0_1
        
        if (eax_8 != 0)
            xmm0_1 = *eax_8
        else
            xmm0_1 = (zx.o(0)).d
        
        var_1c = xmm0_1
        int32_t* eax_10 = (*(*arg5 + 0x10))(edi)
        int32_t xmm0_2
        
        if (eax_10 != 0)
            xmm0_2 = *eax_10
        else
            xmm0_2 = (zx.o(0)).d
        
        int32_t eax_11 = *arg4
        var_18 = xmm0_2
        int32_t* eax_12 = (*(eax_11 + 0x10))(edi)
        int32_t xmm0_3
        
        if (eax_12 != 0)
            xmm0_3 = *eax_12
        else
            xmm0_3 = (zx.o(0)).d
        
        var_14 = xmm0_3
        
        if (esi == var_24)
            sub_574e20(&var_2c, 1)
            esi = var_28
        
        if (esi != 0)
            *esi = var_14
            esi[1] = var_18
            esi[2] = var_1c
        
        esi = &esi[3]
        var_28 = esi
        edi += 1
        eax_14 = (*(*arg4 + 8))()
    while (edi s< eax_14)

void* var_38 = nullptr
int32_t var_34 = 0
int32_t var_30 = 0
var_8_1.b = 1
int32_t eax_16 = (*(*arg7 + 8))()

if (eax_16 != 0)
    if (eax_16 u> 0xfffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_5f05a0(&var_38, eax_16)

int32_t esi_1 = 0

if ((*(*arg7 + 8))() s> 0)
    int32_t eax_26
    
    do
        int32_t eax_20 = (*(*arg9 + 0xc))(esi_1)
        
        if (eax_20 != 0)
            var_1c = _mm_cvtepi32_ps(zx.o(*eax_20)) * 0.00392156886f
        else
            var_1c = eax_20
        
        int32_t eax_22 = (*(*arg8 + 0xc))(esi_1)
        
        if (eax_22 != 0)
            var_18 = _mm_cvtepi32_ps(zx.o(*eax_22)) * 0.00392156886f
        else
            var_18 = eax_22
        
        int32_t eax_24 = (*(*arg7 + 0xc))(esi_1)
        
        if (eax_24 != 0)
            var_14 = _mm_cvtepi32_ps(zx.o(*eax_24)) * 0.00392156886f
        else
            var_14 = eax_24
        
        sub_5f0670(&var_38, &var_14, &var_18, &var_1c)
        esi_1 += 1
        eax_26 = (*(*arg7 + 8))()
    while (esi_1 s< eax_26)

char eax_27 = sub_583480(result, &var_2c, &var_38, arg10)
void* edx = var_38
int32_t* ebx
ebx.b = eax_27

if (edx != 0)
    sub_403160(edx, (var_30 - edx) s>> 4, 0x10)

void* esi_2 = var_2c

if (esi_2 != 0)
    sub_403160(esi_2, (var_24 - esi_2) s/ 0xc, 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
