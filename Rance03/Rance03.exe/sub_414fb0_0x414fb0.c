// 函数: sub_414fb0
// 地址: 0x414fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3e50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
SetFocus(arg2)

if (data_75d4b4 != 0)
    int32_t edi_3 = GetScrollPos(arg2, SB_VERT)
        + divs.dp.d(sx.q(arg3 u>> 0x10), *(arg1 + 0x58) + *(arg1 + 0x54))
    *(arg1 + 0x70) = edi_3
    InvalidateRect(arg2, nullptr, 1)
    UpdateWindow(arg2)
    
    if (edi_3 s>= 0)
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x68) - *(arg1 + 0x64))
        int32_t edx_4 = edx_3 s>> 3
        
        if (edi_3 s< (edx_4 u>> 0x1f) + edx_4)
            void** edx_7 = edi_3 * 0x30 + *(arg1 + 0x64)
            
            if (edx_7[5] u>= 0x10)
                edx_7 = *edx_7
            
            int32_t* eax_14 = (*(**(arg1 + 0x60) + 0x18))(edx_7)
            
            if (eax_14 != 0)
                void var_4c
                sub_401f60(&var_4c, (*(*eax_14 + 0x3c))(eax_4))
                int32_t var_c_1 = 0
                int32_t var_64
                sub_402b00(&var_64, &var_4c)
                var_c_1.b = 2
                sub_401fb0(&var_4c)
                int32_t i = 0
                int32_t eax_16
                int32_t edx_10
                edx_10:eax_16 = muls.dp.d(0x2aaaaaab, data_75d5c8 - data_75d5c4)
                int32_t edx_11 = edx_10 s>> 2
                
                if ((edx_11 u>> 0x1f) + edx_11 s> 0)
                    int32_t edx_15
                    
                    do
                        int32_t var_34
                        char eax_21 = sub_4058a0(sub_420a40(&var_34, i), &var_64)
                        int32_t var_20
                        
                        if (var_20 u>= 0x10)
                            j__free(var_34)
                        
                        if (eax_21 != 0)
                            int32_t eax_27 = (*(*eax_14 + 0x40))()
                            sub_417cf0(*(arg1 + 0x7c), i, eax_27)
                            break
                        
                        i += 1
                        int32_t eax_22
                        int32_t edx_14
                        edx_14:eax_22 = muls.dp.d(0x2aaaaaab, data_75d5c8 - data_75d5c4)
                        edx_15 = edx_14 s>> 2
                    while (i s< (edx_15 u>> 0x1f) + edx_15)
                
                int32_t var_50
                
                if (var_50 u>= 0x10)
                    j__free(var_64)
else
    *(arg1 + 0x70) = 0xffffffff
    InvalidateRect(arg2, nullptr, 1)
    UpdateWindow(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return 0
