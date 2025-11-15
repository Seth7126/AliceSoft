// 函数: sub_4fbb10
// 地址: 0x4fbb10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7290a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_42ccf0(arg2, arg1 + 8)
void* ebx = nullptr
void* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
int32_t edi = arg3[1]
void** esi_1 = *arg3
int32_t esi_2

if (esi_1 == edi)
    esi_2 = 0
else
    do
        result = *esi_1
        void* ecx_1 = *(result + 0x10)
        
        if (*(ecx_1 + 0x8c) != 0)
            result = (*(**(ecx_1 + 0x74) + 0x3c))(arg2, &var_1c, 0)
        
        esi_1 = &esi_1[1]
    while (esi_1 != edi)
    
    esi_2 = var_18
    ebx = var_1c

if (ebx != esi_2)
    do
        result = sub_42ccf0(arg2, ebx)
        ebx += 4
    while (ebx != esi_2)
    
    ebx = var_1c

if (ebx != 0)
    result = sub_403160(ebx, (var_14 - ebx) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
