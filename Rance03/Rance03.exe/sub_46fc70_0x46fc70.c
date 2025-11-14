// 函数: sub_46fc70
// 地址: 0x46fc70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b96a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = *(arg1 + 0x10)
int32_t* i = *eax_5
int16_t top

if (i != eax_5)
    do
        void* eax_6 = i[0xa]
        
        if (eax_6 != 0)
            int32_t var_5c_1 = 0xf
            int32_t var_60_1 = 0
            char var_70 = 0
            int32_t var_4 = 0
            var_78 = 0
            int32_t var_74_1 = arg2
            
            if (&var_70 != eax_6 + 0x14)
                sub_401ff0(&var_70, eax_6 + 0x14, 0, 0xffffffff)
            
            int32_t var_58_1 = *(i[0xa] + 0xc)
            char var_54_1 = (*(**(i[0xa] + 4) + 0x18))(eax_4)
            (*(**(i[0xa] + 4) + 0x1c))()
            float var_50_1 = fconvert.s(unimplemented  {fstp dword [esp+0x3c], st0})
            unimplemented  {fstp dword [esp+0x3c], st0}
            top += 1
            int32_t var_4c_1 = (*(**(i[0xa] + 4) + 0x20))()
            int32_t var_48_1 = (*(**(i[0xa] + 4) + 0x24))()
            sub_46f2b0(arg3, &var_78)
            int32_t var_4_1 = 0xffffffff
            
            if (var_5c_1 u>= 0x10)
                j__free(var_70.d)
        
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
    while (i != *(arg1 + 0x10))

struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0x18)
struct _EXCEPTION_REGISTRATION_RECORD** i_1 = *result

if (i_1 != result)
    do
        result = i_1[5]
        
        if (result != 0)
            int32_t var_28_1 = 0xf
            int32_t var_2c_1 = 0
            char var_3c = 0
            int32_t var_4_2 = 1
            char var_44 = 0
            int32_t var_40_1 = arg2
            
            if (&var_3c != &result[5])
                sub_401ff0(&var_3c, &result[5], 0, 0xffffffff)
            
            int32_t var_24_1 = *(i_1[5] + 0xc)
            char var_20_1 = (*(*i_1[5]->Handler + 0x18))(eax_4)
            (*(*i_1[5]->Handler + 0x1c))()
            float var_1c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x70], st0})
            unimplemented  {fstp dword [esp+0x70], st0}
            top += 1
            int32_t var_18_1 = (*(*i_1[5]->Handler + 0x20))()
            int32_t var_14_1 = (*(*i_1[5]->Handler + 0x24))()
            result = sub_46f2b0(arg3, &var_44)
            int32_t var_4_3 = 0xffffffff
            
            if (var_28_1 u>= 0x10)
                result = j__free(var_3c.d)
        
        if (*(i_1 + 0xd) == 0)
            struct _EXCEPTION_REGISTRATION_RECORD** i_5 = i_1[2]
            
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
    while (i_1 != *(arg1 + 0x18))

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_78)
return result
