// 函数: sub_4266d0
// 地址: 0x4266d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729730
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t* var_50 = ebx
*(*ebx + 0x14) = *(arg2 + 0x20)
*(*ebx + 0x18) = *(arg2 + 0x24)
ebx[1]
void* var_60
int32_t* eax_5 = sub_425e30(&var_60, arg2 + 8)
sub_425bb0(*ebx + 0x1c, eax_5)
void* ecx_3 = var_60
int32_t var_58

if (ecx_3 != 0)
    sub_403160(ecx_3, (var_58 - ecx_3) s>> 2, 4)
sub_426ef0(*ebx + 0x28, arg3)
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403590(&var_2c, arg2 + 8, 0, 0xffffffff)
int32_t var_8_1 = 0
sub_407430(&var_2c, U"(", 1)
int32_t esi_2 = 0
int32_t eax_9
int32_t edx_2
edx_2:eax_9 = muls.dp.d(0x2aaaaaab, *(arg3 + 4) - *arg3)
int32_t edx_3 = edx_2 s>> 2
int32_t eax_12 = (edx_3 u>> 0x1f) + edx_3
int32_t var_30

if (eax_12 s> 0)
    int32_t edi_1 = 0
    
    do
        var_8_1.b = 1
        void* var_44
        sub_4055a0(&var_2c, sub_42db30(*arg3 + edi_1, &var_44, ebx[1]), 0, 0xffffffff)
        var_8_1.b = 0
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        void* const edx_4 = &data_794c80
        
        if (esi_2 s>= eax_12 - 1)
            edx_4 = &data_794c78
        
        void* eax_18
        
        if (*edx_4 != 0)
            void* const eax_19 = edx_4
            void* ebx_1 = eax_19 + 1
            char i
            
            do
                i = *eax_19
                eax_19 += 1
            while (i != 0)
            eax_18 = eax_19 - ebx_1
            ebx = var_50
        else
            eax_18 = nullptr
        
        sub_407430(&var_2c, edx_4, eax_18)
        esi_2 += 1
        edi_1 += 0x18
    while (esi_2 s< eax_12)

sub_407430(&var_2c, ");", 2)
ebx[1]
void* var_38
int32_t* eax_20 = sub_425e30(&var_38, &var_2c)
int32_t* esi_4 = *ebx + 8

if (esi_4 != eax_20)
    void* ecx_16 = *esi_4
    
    if (ecx_16 != 0)
        sub_403160(ecx_16, (esi_4[2] - ecx_16) s>> 2, 4)
        *esi_4 = 0
        esi_4[1] = 0
        esi_4[2] = 0
    
    *esi_4 = *eax_20
    esi_4[1] = eax_20[1]
    esi_4[2] = eax_20[2]
    *eax_20 = 0
    eax_20[1] = 0
    eax_20[2] = 0

void* ecx_17 = var_38

if (ecx_17 != 0)
    sub_403160(ecx_17, (var_30 - ecx_17) s>> 2, 4)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
