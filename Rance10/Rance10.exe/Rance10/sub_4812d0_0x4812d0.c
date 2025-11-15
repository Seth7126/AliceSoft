// 函数: sub_4812d0
// 地址: 0x4812d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e8e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** result = arg1
int32_t* edi = result[4]
int32_t* i = *edi
int16_t top

while (i != edi)
    void* eax_3 = i[0xa]
    
    if (eax_3 != 0)
        int32_t var_2c_1 = 0xf
        int32_t var_30_1 = 0
        char var_40 = 0
        int32_t var_8_1 = 0
        char var_48 = 0
        int32_t var_44_1 = arg2
        
        if (&var_40 != eax_3 + 0x18)
            sub_403590(&var_40, eax_3 + 0x18, 0, 0xffffffff)
        
        void* ecx_1 = i[0xa]
        int32_t var_28_1 = *(ecx_1 + 0x10)
        char var_24_1 = (*(**(ecx_1 + 4) + 0x18))(eax_2)
        (*(**(i[0xa] + 4) + 0x20))()
        float var_20_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
        unimplemented  {fstp dword [ebp-0x1c], st0}
        top += 1
        int32_t var_1c_1 = (*(**(i[0xa] + 4) + 0x24))()
        int32_t var_18_1 = (*(**(i[0xa] + 4) + 0x28))()
        sub_4802c0(&var_48)
        int32_t var_8_2 = 0xffffffff
        
        if (var_2c_1 u>= 0x10)
            sub_403160(var_40.d, var_2c_1 + 1, 1)
    
    if (*(i + 0xd) == 0)
        int32_t* i_2 = i[2]
        
        if (*(i_2 + 0xd) != 0)
            int32_t* i_4 = i[1]
            
            if (*(i_4 + 0xd) == 0)
                while (i == i_4[2])
                    i = i_4
                    i_4 = i_4[1]
                    
                    if (*(i_4 + 0xd) != 0)
                        break
            
            i = i_4
        else
            i = i_2
            int32_t* i_3 = *i
            
            while (*(i_3 + 0xd) == 0)
                i = i_3
                i_3 = *i

void*** edi_1 = result[6]
void** i_1 = *edi_1

while (i_1 != edi_1)
    result = i_1[5]
    
    if (result != 0)
        void** result_1 = 0xf
        int32_t var_64_1 = 0
        char var_74 = 0
        int32_t var_8_3 = 1
        char var_7c = 0
        int32_t var_78_1 = arg2
        
        if (&var_74 != &result[6])
            sub_403590(&var_74, &result[6], 0, 0xffffffff)
        
        void* ecx_7 = i_1[5]
        int32_t var_5c_1 = *(ecx_7 + 0x10)
        char var_58_1 = (*(**(ecx_7 + 4) + 0x18))(eax_2)
        (*(**(i_1[5] + 4) + 0x20))()
        float var_54_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x50], st0})
        unimplemented  {fstp dword [ebp-0x50], st0}
        top += 1
        int32_t var_50_1 = (*(**(i_1[5] + 4) + 0x24))()
        int32_t var_4c_1 = (*(**(i_1[5] + 4) + 0x28))()
        sub_4802c0(&var_7c)
        int32_t var_8_4 = 0xffffffff
        result = result_1
        
        if (result u>= 0x10)
            result = sub_403160(var_74.d, result + 1, 1)
    
    if (*(i_1 + 0xd) == 0)
        void** i_5 = i_1[2]
        
        if (*(i_5 + 0xd) != 0)
            result = i_1[1]
            
            if (*(result + 0xd) == 0)
                while (i_1 == result[2])
                    i_1 = result
                    result = result[1]
                    
                    if (*(result + 0xd) != 0)
                        break
            
            i_1 = result
        else
            i_1 = i_5
            result = *i_1
            
            while (*(result + 0xd) == 0)
                i_1 = result
                result = *i_1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
