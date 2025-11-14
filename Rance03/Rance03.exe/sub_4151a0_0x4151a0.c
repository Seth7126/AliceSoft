// 函数: sub_4151a0
// 地址: 0x4151a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
SetFocus(arg2)

if (data_75d4b4 != 0)
    int32_t eax_5 = GetScrollPos(arg2, SB_VERT)
    int32_t temp0_1 = divs.dp.d(sx.q(arg3 u>> 0x10), *(arg1 + 0x58) + *(arg1 + 0x54))
    int32_t edi_4 = temp0_1 + eax_5
    
    if (temp0_1 + eax_5 s>= 0)
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x68) - *(arg1 + 0x64))
        int32_t edx_4 = edx_3 s>> 3
        
        if (edi_4 s< (edx_4 u>> 0x1f) + edx_4)
            void** edx_7 = edi_4 * 0x30 + *(arg1 + 0x64)
            
            if (edx_7[5] u>= 0x10)
                edx_7 = *edx_7
            
            int32_t* eax_14 = (*(**(arg1 + 0x60) + 0x18))(edx_7)
            
            if (eax_14 != 0)
                struct win32only::CMenu::VTable* const var_4c
                sub_401f60(&var_4c, (*(*eax_14 + 0x3c))(eax_4))
                int32_t var_c_1 = 0
                void var_34
                var_5c = sub_420ac0(sub_402b00(&var_34, &var_4c))
                sub_401fb0(&var_34)
                int32_t var_c_2 = 0xffffffff
                sub_401fb0(&var_4c)
                
                if (var_5c != 0xffffffff)
                    int32_t eax_20 = (*(*eax_14 + 0x40))()
                    data_74b430 = var_5c
                    data_75d4ac = eax_20
                    *(arg1 + 0x70) = edi_4
                    InvalidateRect(arg2, nullptr, 1)
                    UpdateWindow(arg2)
                    var_4c = &win32only::CMenu::`vftable'
                    HMENU hMenu = nullptr
                    char var_44_1 = 1
                    
                    if (sub_698070(&var_4c) != 0)
                        AppendMenuA(hMenu, MF_BYCOMMAND, 0x9d0b, 0x6da494)
                        POINT point
                        GetCursorPos(&point)
                        sub_6982b0(&var_4c, GetParent(GetParent(GetParent(arg2))), point.x, point.y)
                    
                    sub_698040(&var_4c)
else
    *(arg1 + 0x70) = 0xffffffff
    InvalidateRect(arg2, nullptr, 1)
    UpdateWindow(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return 0
