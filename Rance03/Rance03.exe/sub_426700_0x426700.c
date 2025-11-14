// 函数: sub_426700
// 地址: 0x426700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_6 = zx.d(arg3)

if (eax_6 s> 0x9c89)
    if (eax_6 - 0x9c8a u<= 0x88)
        switch (eax_6)
            case 0x9c8a
                int32_t* ecx_3 = *(arg1 + 0x948)
                
                if (ecx_3 != 0)
                    (*(*ecx_3 + 8))(eax_4)
                
                SendMessageA(*(arg1 + 0x84c), 0x401, 0x9c8a, 0)
                SendMessageA(*(arg1 + 0x84c), 0x401, 0x9c8b, 1)
            case 0x9c8b
                int32_t* ecx_4 = *(arg1 + 0x948)
                
                if (ecx_4 != 0)
                    (*(*ecx_4 + 4))(eax_4)
                
                SendMessageA(*(arg1 + 0x84c), 0x401, 0x9c8a, 1)
                SendMessageA(*(arg1 + 0x84c), 0x401, 0x9c8b, 0)
            case 0x9c8c
                sub_42b2b0(arg1 + 0x144, (**(arg1 + 0x3f0))(eax_4))
                *(arg1 + 0x4ec) = *(arg1 + 0x4ec) == 0
                sub_4315f0(arg1 + 0x3f0)
            case 0x9d12
                int32_t var_20_1 = 0xf
                int32_t var_24_1 = 0
                char var_34 = 0
                int32_t var_c_1 = 0
                PSTR lpText
                PSTR lpCaption
                
                if (sub_42e3e0(arg1 + 0x944, &var_34) != 0)
                    lpCaption = "DPVariable"
                    lpText = 0x6daae4
                else
                    PSTR lpText_1 = &var_34
                    lpCaption = "DPVariable"
                    
                    if (var_20_1 u>= 0x10)
                        lpText_1 = var_34.d
                    
                    lpText = lpText_1
                
                MessageBoxA(arg2, lpText, lpCaption, MB_OK)
                sub_401fb0(&var_34)
else if (eax_6 == 0x9c89)
    sub_4270e0(arg1, arg2)
else
    if (eax_6 == 0x9c78)
        sub_426de0(arg1, 0x10)
        InvalidateRect(arg2, nullptr, 1)
    else if (eax_6 == 0x9c79)
        sub_426de0(arg1, 0xc)
        InvalidateRect(arg2, nullptr, 1)
    
    if (eax_6 == 0x9c77)
        sub_426de0(arg1, 0x14)
        InvalidateRect(arg2, nullptr, 1)
    else if (eax_6 == 0x190)
        sub_42b2b0(arg1 + 0x144, (**(arg1 + 0x3f0))(eax_4))
        sub_4315f0(arg1 + 0x3f0)
    else if (eax_6 == 0x9c43)
        DestroyWindow(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return 0
