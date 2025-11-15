// 函数: sub_49e330
// 地址: 0x49e330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730c60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result

if (*arg2 == arg2[1])
    result.b = 1
else
    HMENU hMenu = GetMenu(**(arg1 + 0x10))
    struct win32only::CMenu::VTable* var_40
    void* var_30
    
    if (*(arg1 + 0x258) == 0)
        HMENU hMenu_1 = *(arg1 + 0x258)
        
        if (hMenu_1 != 0)
            if (*(arg1 + 0x25c) != 0)
                DestroyMenu(hMenu_1)
            
            *(arg1 + 0x258) = 0
        
        *(arg1 + 0x25c) = 1
        result = CreatePopupMenu()
        *(arg1 + 0x258) = result
        
        if (result == 0)
        label_49e3e5:
            result.b = 0
        else
            uint32_t i = 0
            int32_t eax_6
            int32_t edx_1
            edx_1:eax_6 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
            int32_t edx_2 = edx_1 s>> 2
            
            if ((edx_2 u>> 0x1f) + edx_2 s> 0)
                int32_t eax_10 = 0
                int32_t var_34_1 = 0
                int32_t edx_4
                
                do
                    if (sub_6ce160(arg1 + 0x254, i, *arg2 + eax_10, i.w - 0x6348).b == 0)
                        goto label_49e3e5_1
                    
                    i += 1
                    var_34_1 += 0x18
                    int32_t eax_12
                    int32_t edx_3
                    edx_3:eax_12 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
                    edx_4 = edx_3 s>> 2
                    eax_10 = var_34_1
                while (i s< (edx_4 u>> 0x1f) + edx_4)
            
            HMENU eax_16 = GetSubMenu(hMenu, 2)
            
            if (eax_16 != 0)
                DrawMenuBar(**(arg1 + 0x10))
                result.b = 1
            else
                var_40 = &win32only::CMenu::`vftable'
                int32_t var_8_2 = 1
                HMENU hMenu_3 = hMenu
                char var_38_2 = eax_16.b
                int32_t* ecx_13 = sub_403360(&var_30, 0x760f18)
                int32_t var_5c_5 = *(arg1 + 0x258)
                void* ebx_2
                ebx_2.b = sub_6ce1f0(&var_40, ecx_13, &var_30) == 0
                BOOL var_1c
                
                if (var_1c u>= 0x10)
                    sub_403160(var_30, var_1c + 1, 1)
                
                if (ebx_2.b == 0)
                    DrawMenuBar(**(arg1 + 0x10))
                    result.b = 1
                else
                    result.b = 0
    else
        HMENU eax_4 = GetSubMenu(hMenu, 2)
        
        if (eax_4 != 0)
            DrawMenuBar(**(arg1 + 0x10))
            result.b = 1
        else
            var_40 = &win32only::CMenu::`vftable'
            HMENU var_8_1 = eax_4
            HMENU hMenu_2 = hMenu
            char var_38_1 = eax_4.b
            int32_t* ecx_1 = sub_403360(&var_30, 0x760f30)
            int32_t var_5c_2 = *(arg1 + 0x258)
            HMENU ebx_1
            ebx_1.b = sub_6ce1f0(&var_40, ecx_1, &var_30) == 0
            sub_403320(&var_30)
            sub_6ce130(&var_40)
            
            if (ebx_1.b == 0)
                DrawMenuBar(**(arg1 + 0x10))
                result.b = 1
            else
            label_49e3e5_1:
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
