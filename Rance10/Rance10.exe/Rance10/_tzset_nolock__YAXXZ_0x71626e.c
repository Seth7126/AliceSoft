// 函数: ?tzset_nolock@@YAXXZ
// 地址: 0x71626e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
data_7e172c = 0xffffffff
data_7e1720 = 0xffffffff
int32_t edi
int32_t var_11c = edi
void* edi_1 = nullptr
void* const var_120 = &data_756010
int32_t var_124 = 0x100
void var_108
void* var_128 = &var_108
data_7fca10 = 0
uint32_t var_10c
int32_t* var_12c = &var_10c
int32_t eax_2 = sub_70b82a()

if (eax_2 == 0)
    edi_1 = &var_108
else if (eax_2 == 0x22)
    void* eax_3 = __malloc_base(var_10c)
    
    if (eax_3 != 0)
        void* const var_120_3 = &data_756010
        uint32_t var_124_1 = var_10c
        void* var_128_1 = eax_3
        void var_110
        void* var_12c_1 = &var_110
        
        if (sub_70b82a() == 0)
            void* var_120_2 = nullptr
            __free_base(0)
            edi_1 = eax_3
        else
            __free_base(eax_3)
    else
        __free_base(nullptr)

int32_t esi_3 = edi_1 - &var_108
int32_t esi_4 = neg.d(esi_3)

if (edi_1 == 0 || *edi_1 == 0)
    tzset_from_system_nolock()
else
    tzset_from_environment_nolock(edi_1)

int32_t result = __free_base(sbb.d(esi_4, esi_4, esi_3 != 0) & edi_1)
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
