// 函数: sub_6ea04f
// 地址: 0x6ea04f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x38
int32_t (* var_c)(void* arg1) = sub_74a485
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t __saved_ebp_4
int32_t __saved_ebp_3 = __saved_ebp_4
int32_t __saved_ebp
int32_t eax_17 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_17
void* const var_5c_5 = &data_6ea05b
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::details::_MallocaArrayHolder<class Concurrency::Context*>::VTable* const 
    var_2c = &Concurrency::details::_MallocaArrayHolder<class Concurrency::Context*>::`vftable'
int32_t edi = 0
int32_t var_28 = 0
int32_t var_18 = 0
int32_t i_2 = 0
int32_t var_24 = 0
int32_t var_8_1 = 0
void var_48
sub_6ea792(&var_48, &arg1[2])
int32_t* esp_1 = &var_58
var_8_1.b = 1
int32_t* i_4 = *arg1
*arg1 = 1
int32_t* i_3 = i_4

if (i_3 u> 1)
    int32_t edx_1 = 0
    int32_t* i = i_3
    
    if (i_3 != 0)
        do
            i = *i
            edx_1 += 1
        while (i != 0)
    
    int32_t edx_2 = edx_1 << 2
    int32_t eax_3 = sbb.d(i, i, edx_2 u< edx_2 + 8)
    int32_t* eax_8
    
    if (((edx_2 + 8) & eax_3) == 0)
        eax_8 = nullptr
    else
        int32_t eax_5 = sbb.d(eax_3, eax_3, edx_2 u< edx_2 + 8) & (edx_2 + 8)
        
        if (eax_5 u> 0x400)
            int32_t var_5c_1 = sbb.d(eax_5, eax_5, edx_2 u< edx_2 + 8) & (edx_2 + 8)
            eax_8 = sub_705e22()
            
            if (eax_8 != 0)
                *eax_8 = 0xdddd
                eax_8 = &eax_8[2]
        else
            __alloca_probe_16(sbb.d(eax_5, eax_5, edx_2 u< edx_2 + 8) & (edx_2 + 8))
            eax_8 = &var_58
            
            if (&var_58 != 0)
                var_58 = 0xcccc
                eax_8 = &eax_8[2]
    
    esp_1 = &var_58
    edi = sub_6e9d3b(&var_2c, eax_8)
    i_2 = 0
    var_18 = edi
    
    if (i_3 != 0)
        int32_t* i_1
        
        do
            i_1 = *i_3
            esp_1 = &var_58
            int32_t var_20
            
            if (sub_6e99ac(i_3, &var_20) != 0)
                *i_3 = arg1[1]
                arg1[1] = i_3
            
            int32_t eax_14 = var_20
            
            if (eax_14 != 0)
                *(var_18 + (i_2 << 2)) = eax_14
                i_2 += 1
            
            i_3 = i_1
        while (i_1 != 0)
        edi = var_18

var_8_1.b = 0
Concurrency::reader_writer_lock::scoped_lock::~scoped_lock(&var_48)

while (i_2 != 0)
    i_2 -= 1
    int32_t esi = *(**(edi + (i_2 << 2)) + 0xc)
    j_sub_4033e0()
    esi()
    esp_1 = &esp_1[4]
    edi = var_18

*(esp_1 - 4) = var_28
int32_t result = __freea_crt()
*(esp_1 - 4)
@__security_check_cookie@4(eax_17 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ea17f
return result
