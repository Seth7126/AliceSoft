// 函数: sub_607430
// 地址: 0x607430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742818
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_14 = ebx
int32_t* var_1c = nullptr
int32_t var_18 = 0
int32_t* eax_3
int32_t ecx
eax_3, ecx = sub_4f2cd0()
var_1c = eax_3
int32_t var_8_1 = 0
int32_t edi = *(ebx + 8)
int32_t* esi = *(ebx + 4)
int32_t* var_24

if (esi != edi)
    void* ebx_1 = var_14
    
    do
        if (*esi != 0)
            void* var_3c_1 = ebx_1
            int32_t* var_40_1 = esi
            ecx = sub_4f2d40(&var_1c, &var_24, ecx)
        
        esi = &esi[4]
    while (esi != edi)
    
    eax_3 = var_1c
    ebx = var_14

var_14.b = 0
void* var_3c_2 = var_14
void* var_28 = nullptr
int32_t* var_44_2 = *eax_3
var_24 = nullptr
int32_t var_20 = 0
sub_55c430(&var_28, var_44_2, eax_3)

if (ebx + 0x40 == &var_28)
    void* ecx_4 = var_28
    
    if (ecx_4 != 0)
        sub_403160(ecx_4, (var_20 - ecx_4) s>> 2, 4)
else
    void* ecx_3 = *(ebx + 0x40)
    
    if (ecx_3 != 0)
        sub_403160(ecx_3, (*(ebx + 0x48) - ecx_3) s>> 2, 4)
        *(ebx + 0x40) = 0
        *(ebx + 0x44) = 0
        *(ebx + 0x48) = 0
    
    *(ebx + 0x40) = var_28
    *(ebx + 0x44) = var_24
    *(ebx + 0x48) = var_20

int32_t** eax_13 = var_1c
sub_4f27c0(&var_1c, &var_14, *eax_13, eax_13)
int32_t result = sub_403160(var_1c, 1, 0x14)
fsbase->NtTib.ExceptionList = ExceptionList
return result
