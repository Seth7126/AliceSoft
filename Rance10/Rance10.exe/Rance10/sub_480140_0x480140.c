// 函数: sub_480140
// 地址: 0x480140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e7f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
EnterCriticalSection(*(arg1 + 0x18) + 4)
int32_t* edi = *(arg1 + 0xc)
void* i = *edi
void* i_1 = i

for (; i != edi; i = i_1)
    void* ecx = *(i + 0x14)
    
    if (ecx != 0)
        int32_t var_2c_1 = 0xf
        int32_t var_30_1 = 0
        char var_40 = 0
        int32_t var_8_1 = 0
        int32_t var_44_1 = *(i + 0x10)
        char var_48 = 1
        
        if (&var_40 != ecx + 0x18)
            sub_403590(&var_40, ecx + 0x18, 0, 0xffffffff)
        
        void* ecx_3 = *(i + 0x14)
        int32_t var_28_1 = *(ecx_3 + 0x10)
        char var_24_1 = (*(**(ecx_3 + 4) + 0x18))(eax_2)
        (*(**(*(i + 0x14) + 4) + 0x20))()
        float var_20_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
        unimplemented  {fstp dword [ebp-0x1c], st0}
        int16_t top = top + 1
        int32_t var_1c_1 = (*(**(*(i + 0x14) + 4) + 0x24))()
        int32_t var_18_1 = (*(**(*(i + 0x14) + 4) + 0x28))()
        sub_4802c0(&var_48)
        int32_t var_8_2 = 0xffffffff
        
        if (var_2c_1 u>= 0x10)
            sub_403160(var_40.d, var_2c_1 + 1, 1)
    
    sub_429080(&i_1)

int32_t result = LeaveCriticalSection(*(arg1 + 0x18) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
