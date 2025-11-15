// 函数: sub_62a140
// 地址: 0x62a140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744c20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = *(arg1 + 0x30)
int32_t* esi = *(arg1 + 0x2c)
int32_t* var_1c = nullptr
int32_t var_18 = 0
var_1c = sub_4f2cd0()
int32_t var_8_1 = 0
sub_62a460(&var_1c, esi, edi)
int32_t var_8_2 = 1
int32_t* esi_1 = var_1c
void* eax_4 = *esi_1
void* var_14 = eax_4

if (eax_4 != esi_1)
    do
        void* eax_5 = sub_622960(*(arg1 + 0x24), *(eax_4 + 0x10))
        
        if (eax_5 != 0 && sub_5ff710(eax_5, *(arg1 + 0x28)) == 0)
            int32_t* eax_8 = var_1c
            int32_t* var_30_4 = eax_8
            sub_513f00(&var_1c, &var_14, *eax_8)
            sub_403160(var_1c, 1, 0x14)
            int32_t eax_9
            eax_9.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        
        sub_429080(&var_14)
        eax_4 = var_14
    while (eax_4 != esi_1)
    
    esi_1 = var_1c

int32_t* var_30_3 = esi_1
sub_513f00(&var_1c, &var_14, *esi_1)
sub_403160(var_1c, 1, 0x14)
int32_t eax_7
eax_7.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
